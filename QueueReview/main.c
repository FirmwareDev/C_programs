#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/*
* This is a circular buffer that allows enqueue or dequeue arbitrary
* amount of bytes. The buffer size is limited to BUF_SIZE.
*/

static char *GetErrorString(int x);

#define BUF_SIZE    4096

typedef struct {
   int write_index; //(rear)
   int read_index; //(front)
   char *buf; //character queue where elements are stored
   int size; //size of the Q
} circular_buf_t;

circular_buf_t buf; // since the char array(char *buf) in the struct is being modified, we should pass this struct by address in the enqueue and dequeue parameter list

/*
* Enqueue (size) bytes from (client_buf) to the local buf
* memory of (client_buf) is allocated by the caller
*/
int enqueue(char *client_buf, int size) //
{
   if (size > BUF_SIZE) {
       printf("%s", GetErrorString(3)); //there is no case 3 in the function GetErrorString()
       return 3;
   }
   //a condition to check if the buffer is full to avoid over writing the data in the buffer


   int part1 = buf.size - buf.write_index;
   // the source and destination address are passed wrong,
    //which causes the data from local buff to be copied to client_buf.
    //they should be interchanged for achieving the task mentioned in the description of Enqueue

   memcpy(client_buf, buf.buf + buf.write_index, part1);

   if (part1 != size) {
       int part2 = size - part1; //(if size is smaller than part1 it can generate a negative value, mod of this operation should be assigned to part2
       memcpy(client_buf+part1, buf.buf[0], part2); //(number of bytes can't be negative)
       //also, part1 size is 4096, adding 4096 to client_buf can cause buffer overflow, or data overwriting
   }

   return 0;
}

/*
* Dequeue (size) bytes from the local buf to (client_buf),
* (client_buf) is allocated by the caller. It is okay to assume
* (client_buf) is big enough to hold all the (size) bytes
*/
int dequeue(char *client_buf, int size)
{   //wrong condition for overflow, also, for dequeue operation we need the information whether the local buf is empty, if not then we can continue the the transfer.
    // the relational operator used should be ">", since the size(which is the size of client_buf should not exceed 4096(Maximum buf size)
   if (size < BUF_SIZE) {
       printf("%s", GetErrorString(2));
       return 2;
   }

   //below code will not be executed cause of the return statement in "if-block",
   //if comment above if statements
   int copy_size = buf.write_index - buf.read_index + 1;
   memcpy(client_buf, buf.buf + buf.write_index, copy_size); //copies only 1 byte
   return 0;
}

static char *GetErrorString(int x)
{
   char errorString[20];

   switch ( x )
   {
       case 0:
           errorString = "Success -- No error."; //the assignment operator does not copy the "string" in the char errorString array
           break;
       case 2:
            errorString = "Overflow!"; //the assignment operator does not copy the "string" in the char errorString array
           break;
   } // if there is no default and no case match is found then, none of the cases will be executed.

   errorString[19] = 0; // not needed
   return errorString;
}


int main(int argc,char* argv[])
{

   // initialize buffer
   buf.buf = malloc(BUF_SIZE);
   buf.size = BUF_SIZE;

   // Perform enqueue() and dequeue();
    char * temp = "Writing something for testing if this works!";
    char *client_buf = (char*)malloc((strlen(temp)+1) * sizeof(char));
    strcpy(client_buf,temp);
    int enR= enqueue(client_buf,100);
    int deQ = dequeue(client_buf,100);

   // All completed, return
   return 0;
}

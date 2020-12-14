#include <iostream>

using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    //1.create the queue
    Queue()
    {
        front=rear= -1;
        size = 10;
        Q = new int[size];
    }

    Queue(int size)
    {

    }

};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

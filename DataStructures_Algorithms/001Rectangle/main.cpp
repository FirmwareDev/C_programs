#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() {length= breadth = 1;}  // default constructor
    Rectangle(int l, int b); // parameterized constructor

    /* These function perform operations on actual parameters of the class
    called as FACILITATORS */

    int area();
    int perimeter();

    /* Accessors / getter function */
    int getLength(){return length;}

    /* Mutators/ setter functions */
    void setLength(int l){length = l;}

    /* Destructor */
    ~Rectangle();
};


//constructor
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return (2*(length+breadth));
}

Rectangle::~Rectangle()
{

}

int main()
{
    Rectangle r(10,5);
    cout<<r.perimeter()<<endl;
    cout<<r.area()<<endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;
    return 0;
}

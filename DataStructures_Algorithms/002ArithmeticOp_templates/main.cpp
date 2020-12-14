#include <iostream>

using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;
public:

    Arithmetic(T a,T b);

    T add();
    T sub();

   // ~Arithmetic();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c = (a-b);
    return c;
}

int main()
{
    Arithmetic<int> Ar(10,6);
    cout << Ar.add()<< endl;

    Arithmetic<float> Ar1(20,25);
    cout<<Ar1.sub()<<endl;
    return 0;

}

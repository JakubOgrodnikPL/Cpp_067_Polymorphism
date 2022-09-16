#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void calculate_area()=0;//pure virtual function
};

class Circle :public Shape
{
    float r;
public:
    Circle(float x)
    {
        r=x;
    }
    virtual void calculate_area()
    {
        cout<<"Circle area: "<<3.14*r*r<<endl;
    }
};

class Square :public Shape
{
    float a;
public:
    Square(float x)
    {
        a=x;
    }
    virtual void calculate_area()
    {
        cout<<"Square area: "<<a*a<<endl;
    }
};

void calculations(Shape *x)
{
    x -> calculate_area();
}

int main()
{
    Circle c(1);
    Square s(2);
    Shape *ind;
    ind = &c;
    ind -> calculate_area();
    ind = &s;
    ind -> calculate_area();

    calculations(ind);

    return 0;
}

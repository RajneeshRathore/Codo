/*Construct a Program in C++ to show the working of function overloading(compile
time polymorphism) by using a function named calculate Area () to calculate area
of square, rectangle and triangle using different signatures as required.
*/
#include<iostream>
using namespace std;
class area
{
   double length;
    double width;
    double side;
    double base;
    double height;
    public:
    area(double length,double width,double side,double base, double height)
    {
      this->length=length;
      this->width=width;
      this->side=side;
      this->base=base;
      this->height=height;
    }
    double calArea(double side)
    {
       return (side*side);
    }
     double calArea(double length,double width)
    {
       return (length*width);
    }
    double calArea(double base ,float heigth)
    {
        return (0.5*(base*heigth));
    }
    void show()
    {
        cout<<"Area of square : "<<calArea(side)<<endl<<"Area of Rectangle : "<<calArea(length,width)<<endl<<"Area of Triangle "<<calArea(base,height)<<endl;
    }
};
int main()
{
   double l,w,s,b,h;
   cout<<"enter the length:\n";
   cin>>l;
    cout<<"enter the width:\n";
   cin>>w;
    cout<<"enter the side:\n";
   cin>>s;
    cout<<"enter the base:\n";
   cin>>b;
   cout<<"enter the heigth:\n";
   cin>>h;
   area a1(l,w,s,b,h);
   a1.show();


    return 0;
}
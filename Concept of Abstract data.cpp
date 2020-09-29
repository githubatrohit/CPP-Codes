#include<iostream>
using namespace std;
class Shape
{
    public: double a,b;
        void get_data ()
        {
            cin>>a>>b;
        }
        virtual void display_area () = 0;
};
 
class Circle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of Circle "<<3.14*a*b <<endl;
    }
};
 
class Rectangle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of rectangle "<<a*b<<endl;
    }
};
 
int main()
{   
    Circle t;
    Shape *st = &t;
    cout<<"Enter radius twice: ";
    st->get_data();
    st->display_area();
     
    Rectangle r;
    Shape *sr = &r;
    cout<<"Enter length and breadth: ";
    sr->get_data();
    sr->display_area();
    return 0;   
}

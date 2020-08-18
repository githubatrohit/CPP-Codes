#include<iostream>
using namespace std;
float AREA_VOL(int r);
float AREA_VOL(float r1);

int main()
    {
    int r;
	float r1;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter radius of sphere:";
	cin>>r1;
	AREA_VOL(r);
	AREA_VOL(r1);
    return 0;
    }
    float AREA_VOL(int r)
    {
        double circle = 3.14*r*r;
        cout<<"\nArea of circle is"<<circle;
        
    }
    float AREA_VOL(float r1)
    {
        double sphere = (4*3.14*r1*r1*r1)/3;
        cout<<"\nVolume of sphere is"<<sphere;
    }
    

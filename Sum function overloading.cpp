#include<iostream>
using namespace std;
double SUM(int a);
double SUM(int a, int b);
double SUM(int a, int b, int c);
int main(void)
{
	double a,b,c;
	cout<<"Enter the values of a, b and c:"<<endl;
	cin>>a>>b>>c;
	if (b==0 && c==0)
		SUM(a);
	else if (c==0)
		SUM(a,b);
	else 
		SUM(a,b,c);
	return 0;		
}

double SUM(int a, int b, int c)

{
	double sum3= a+b+c;
	cout<<"The sum of all 3 values entered:"<<sum3<<endl;

}

double SUM(int a)

{
	double sum1 = a+10+20;
	cout<<"The sum of all 3  values as you entered one value is :"<<sum1<<endl;

}


double SUM(int a, int b)
{
	double sum2 = a+b+20;
	cout<<"The sum of all 3  values  you entered two values are :"<<sum2<<endl;
}



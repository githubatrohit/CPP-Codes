#include<iostream>
using namespace std;
class B;
class A{
	private:
		int data;
	public:
		void getdata(int value=55)
		{
			data=value;
		}
		friend int largest(A,B);
};
class B
{
	private: 
		int data;
	public:
		void getdata(int value=63){
			data=value;
		}
		friend int largest(A,B);
};
int largest(A obj1, B obj2)
{
	if(obj1.data>obj2.data)
		cout<<"This is largest :"<<obj1.data;
			
		else 
			cout<<"This is largest :"<<obj2.data;;
	
	}
int main()
{
	A abc;
	B xyz;
	abc.getdata();
	xyz.getdata();
	largest(abc,xyz);
	return 0;
}

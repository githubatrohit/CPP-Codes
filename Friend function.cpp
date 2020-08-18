#include <iostream>
using namespace std;
class B;
class A
{
	private:
		int numA;
	public:
		A(): numA(15) { }
		friend int add(A, B);
};

class B
{
	private:
		int numB;
	public:
		B(): numB(12) { }
		friend int add(A , B);
};


int add(A objA, B objB)
{
	return (objA.numA + objB.numB);
}

int main()
{
	A objA;
	B objB;
	cout<<"\n Sum of the two entered numbers is:  "<< add(objA, objB);
	return 0;
}

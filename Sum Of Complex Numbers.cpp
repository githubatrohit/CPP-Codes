#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
		public:
			
			void getcomplex(int r, int i){
				real=r;
				img=i;
			}
			int sumcom(complex obj1, complex obj2)
			{
			real=obj1.real+obj2.real;
			img=obj1.img+obj2.img;				
			}
			void printcom(){
				cout<<"sum = "<<real<<"+i"<<img<<endl;
			}
}obj1,obj2,obj3;
int main()
{
//complex obj1,obj2,obj3;
obj1.getcomplex(5,7);
obj2.getcomplex(2,4);
obj3.sumcom(obj1,obj2);
obj3.printcom();
return 0;
}

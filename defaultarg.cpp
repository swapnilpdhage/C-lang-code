//wap to demostrarte the defaulter arguments

#include<conio.h>
#include<iostream>
using namespace std;

class test
{
	public:
	int add(int x=10,int y=20,int z=30,int a=40)
	{
		return(x+y+z+a);
	}
};
int main()
{
	test t1;
	cout<<"addition of 4 default is "<<t1.add(); // 4 def
	cout<<"\naddition of 3 default is "<<t1.add(15);// 3 def
	cout<<"\naddition of 2 default is "<<t1.add(15,25);//2 def
	cout<<"\naddition of 1 default is "<<t1.add(15,25,35);//1 def
	cout<<"\naddition of actual arg is "<<t1.add(15,25,35,45);
	getch();
}

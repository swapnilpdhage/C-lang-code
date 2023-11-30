// object as an arguments 02-august-2023
#include<conio.h>
#include<iostream>
using namespace std;

class emp
{
	long int basic,hra;
	public:
		int get()
		{
			cin>>basic>>hra;
		}
		int cal(emp x,emp y)
		{
			basic=x.basic+y.basic;
			hra=x.hra+y.hra;
		}
		int show()
		{
			cout<<basic<<"\t"<<hra<<"\n";
		}
};
int main()
{
	emp e1,e2,e3;
	
	cout<<"enter the basic and hra of emp1: ";
	
	e1.get();
	cout<<"enter the basic and hra of emp2: ";
	e2.get();
	
	e3.cal(e1,e2);
	
	e1.show();
	e2.show();
	
	e3.show();
	getch();
	
}

//program to demonstrate constructor overloading

#include<iostream.h>
#include<conio.h>

class demo
{
	int x;

	public:
	demo()                              //default constructor
	{
		cout<<"default constructor";
	}
	demo(int a)           //single paramaterized constructor
	{
		x=a;
		cout<<"constructor with one parameter"<<x<<endl;

		cout<<"square of a=>"<<x*x<<endl;
	}
	demo(int a,int b)          //double parameter
	{
		cout<<"constructor with 2 parameter"<<a<<"\t"<<b<<endl;

		cout<<"result of a+b=>"<<a+b<<endl;
	}
	demo(demo &d)                //copy parameter
	{
		cout<<"copy constructor"<<endl;
		x=d.x;

	cout<<"copied value=>"<<x;
	}
};
void main()
{
	clrscr();
	demo d1;
	demo d2(23);
	demo d3(25,33);
	demo d4(d2);

getch();
}
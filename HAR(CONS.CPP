//concept of constructor
#include<iostream.h>
#include<conio.h>

class construct
{
public:
	int a,b;
	//default constructor
	construct()
	{
	     a=10;
	     b=20;
	}
};
int main()
{
	//default constructor is called automatically
	//when function is create

	construct c;
	cout<<"a:"<<c.a<<endl
	    <<"b:"<<c.b;
getch();
return 0;
}
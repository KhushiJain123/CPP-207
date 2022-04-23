//program to demonstrate array of object(inf of product)
#include<iostream.h>
#include<conio.h>

class product
{
     private:
	char pname[20];
	int pno;               //data member
	float pprize;

     public:
	void get();            //member function
	void put();
};
void product::get()           //member fuc declaration outside class body
{
	cout<<"Enter product name";
	cin>>pname;

	cout<<"Enter product number";
	cin>>

}
//functon overloading

#include<iostream.h>
#include<conio.h>

void print(int i)
{
	cout<<"Hear is int"<<i<<endl;
}
void print(double f)
{
	cout<<"Hear is float"<<f<<endl;
}
void print(char const *c)
{
	cout<<"Hear is char*"<<c<<endl;
}

int main()
{
	print(10);
	print(10.10);
	print("ten");

getch();
return 0;
}
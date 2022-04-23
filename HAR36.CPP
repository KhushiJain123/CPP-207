//program to demonstrete array of object
#include<iostream.h>
#include<conio.h>

class student
{
     private:
	int rollno;
	char sname[15];
	char gender[5];

     public:
	void get();
	void put();
};
void student::get()
{
	cout<<"Enter rollno:->";
	cin>>rollno;

	cout<<"Enter student name:->";
	cin>>sname;

	cout<<"Enter gender:->";
	cin>>gender;
}
void student::put()
{
	cout<<"rollno<<\t\t<<sname\t\t<<gender"<<endl;
}
main()
{
int i;
clrscr();
	student s[5];

	for(i=0; i<5; i++)
	{
		s[i].get();
	}
	for(i=0; i<5; i++)
	{
		s[i].put();
	}
getch();
}

#include<iostream.h>
class file
{
	char name[20];
	int age;
	char clas[10];
	char gender;
	public:
	void info()
	{
		cout<<"enter the name of person\n";
		cin>>name;
		cout<<"\nenter the gender of person\n";
		cin>>gender;
		cout<<"\nenter the age\n";
		cin>>age;
	}
	void disp()
	{
		cout<<"my name is "<<name<<" and im "<<gender<<" ";
		if(age>=18)
		{
			cout<<"and im eligible to vote";
		}
		else
		{
			cout<<"and im not eligble to vote";
		}
	}
};
void main()
{ 
	file s;
	s.info();
	s.disp();
	getch();
}

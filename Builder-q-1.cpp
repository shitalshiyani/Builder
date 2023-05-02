#include<iostream>
#include<string.h>

using namespace std;

class employee
{
	private :
	int id;
	char name[100];
	char role[100];
	char salary[10];
	char exp[20];
	char add[100];
	char email[60];
	char contact[12];

    public :
    void setData()
    {
    	cout<<"Enter Employee ID=";
    	cin>>id;
    	cout<<"Enter Employee Name=";
    	cin>>name;
    	cout<<"Enter Employee Role=";
    	cin>>role;
    	cout<<"Enter Employee Salary=";
    	cin>>salary;
    	cout<<"Enter Employee Experience=";
    	cin>>exp;
    	cout<<"Enter Employee Address=";
    	cin>>add;
    	cout<<"Enter Employee Email=";
    	cin>>email;
    	cout<<"Enter Employee Contact=";
    	cin>>contact;
	}
	
	void getData()
	{
		cout<<"ID="<<id<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Role="<<role<<endl;
		cout<<"Salary="<<salary<<endl;
		cout<<"Experience="<<exp<<endl;
		cout<<"Address="<<add<<endl;
		cout<<"Email="<<email<<endl;
		cout<<"Contact="<<contact<<endl;	
	}
};

main()
{
	employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	cout<<"---------------------------------------------"<<endl;
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
}

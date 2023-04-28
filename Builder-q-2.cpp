#include<iostream>
#include<string.h>

using namespace std;

class A
{
	public :
		int roll_no;
		char name[100];
		int std;
};

class B
{
	public :
		int n1;
		char n2[100];
		int n3;
	void setData()
	{
		cout<<"Enter Student Roll No.=";
		cin>>n1;
		cout<<"Enter Student Name=";
		cin>>n2;
		cout<<"Enter Student Standard=";
		cin>>n3;
	}
	
	void getData()
	{
		cout<<"Roll No="<<n1<<endl;
		cout<<"Name="<<n2<<endl;
		cout<<"Standard="<<n3<<endl;
	}
};
main()
{
    B s1,s2;
    
    s1.setData();
    s2.setData();
    
    cout<<"................................."<<endl;
    
	s1.getData();
    s2.getData();	
}

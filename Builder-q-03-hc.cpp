#include<iostream>
#include<string.h>

using namespace std;

class College;
class HighSchool
{
	public :
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		char stu_contact[12];
		static char stu_edu_school_name[100];
		char stu_address[100];
		
		 void setData()
		{
			cout<<"Enter School Student ID=";
			cin>>id;
			cout<<"Enter School Student Name=";
			cin>>stu_name;
			cout<<"Enter School Student Roll NO=";
			cin>>stu_roll_no;
			cout<<"Enter School Student Standard=";
			cin>>stu_standard;
			cout<<"Enter School Student Age=";
			cin>>stu_age;
			cout<<"Enter School Student Contact No=";
			cin>>stu_contact;
			cout<<"Enter School Student Address=";
			cin>>stu_address;
			cout<<"................................................................"<<endl;
		}
		
		 void getData()
		{
			cout<<"HighSchool Name="<<HighSchool::stu_edu_school_name<<endl;
			cout<<"ID="<<id<<endl;
			cout<<"Student Name="<<stu_name<<endl;
			cout<<"Student Roll No="<<stu_roll_no<<endl;
			cout<<"Student Standard="<<stu_standard<<endl;
			cout<<"Student Age="<<stu_age<<endl;
			cout<<"Student Contact="<<stu_contact<<endl;
			cout<<"Student Address="<<stu_address<<endl;
			cout<<"................................................................"<<endl;
		}
		
};

class College
{
	public :
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		char stu_contact[12];
		static char stu_edu_college_name[100];
		char stu_address[100];
		
		 void setData_collge()
		{
			this->id=id;
			cout<<"Enter College Student ID=";
			cin>>id;
			this->stu_name[100]=stu_name[100];
			cout<<"Enter College Student Name=";
			cin>>stu_name;
			this->stu_roll_no=stu_roll_no;
			cout<<"Enter College Student Roll NO=";
			cin>>stu_roll_no;
			this->stu_standard=stu_standard;
			cout<<"Enter College Student Standard=";
			cin>>stu_standard;
			this->stu_age=stu_age;
			cout<<"Enter College Student Age=";
			cin>>stu_age;
			this->stu_contact[12]=stu_contact[12];
			cout<<"Enter College Student Contact No=";
			cin>>stu_contact;
			this->stu_address[100]=stu_address[100];
			cout<<"Enter College Student Address=";
			cin>>stu_address;
			cout<<"................................................................"<<endl;
		}
		
		 void getData_college()
		{
			
			cout<<"College Name="<<College::stu_edu_college_name<<endl;
			cout<<"ID="<<id<<endl;
			cout<<"Student Name="<<stu_name<<endl;
			cout<<"Student Roll No="<<stu_roll_no<<endl;
			cout<<"Student Standard="<<stu_standard<<endl;
			cout<<"Student Age="<<stu_age<<endl;
			cout<<"Student Contact="<<stu_contact<<endl;
			cout<<"Student Address="<<stu_address<<endl;
		}
};
char HighSchool::stu_edu_school_name[]="RNW HighSchool";
char College::stu_edu_college_name[]="Red & White Group Of Institutes";

main()
{
	HighSchool h;
	College c;
	
	
	
	
	h.setData();
	h.getData();
	
	c.setData_collge();
	c.getData_college();
	
}

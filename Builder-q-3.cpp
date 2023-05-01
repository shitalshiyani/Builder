#include<iostream>
#include<string.h>

using namespace std;
class Hotel
{
	public :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		char room_size[50];
		int establish_year;
		char add[100];
		char rating_type[10];
		char website[100];

    public :
    	
    	void setData()
    	{
    		
    		this->id = id;
    		cout<<"ID=";
    		cin>>id;
    		this->name[100]= name[100];
    		cout<<"Name=";
    		cin>>name;
    		this->type[100] = type[100];
    		cout<<"Hotel Type=";
    		cin>>type;
    		this->staff_size= staff_size;
    		cout<<"Hotel Staff Size=";
    		cin>>staff_size;
    		this->room_size[50] = room_size[50];
    		cout<<"Enter Room Size=";
    		cin>>room_size;
    		this->establish_year= establish_year;
    		cout<<"Enter Establish Year=";
    		cin>>establish_year;
    		this->add[100]= add[100];
    		cout<<"Hotel Address=";
    		cin>>add;
    		this->rating_type[10] = rating_type[10];
    		cout<<"Enter Hotel Rating=";
    		cin>>rating_type;
    		this->website[100]= website[100];
    		cout<<"Enter Hotel Website=";
    		cin>>website;

			getData();	
		}
		void getData()
		{
			cout<<"Id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Hotel Type="<<type<<endl;
			cout<<"Hotel Staff Size="<<staff_size<<endl;
			cout<<"Hotel Room Size="<<room_size<<endl;
			cout<<"Hotel Establish Year="<<establish_year<<endl;
			cout<<"Hotel Address="<<add<<endl;
			cout<<"Hotel Rating Type="<<rating_type<<endl;
			cout<<"Hotel Website="<<website<<endl;

		}
};
		
main()
{
	Hotel h;
	
	h.setData();
	
	
}

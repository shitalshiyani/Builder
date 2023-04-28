#include<iostream>
#include<string.h>

using namespace std;
class Hotel
{
	public :
		int id;
		char name[100];
		int type;
		int staff_size;
		int room_size;
		int establish_year;
		char add[100];
		int rating_type;
		char website[100];
};
    public :
    	
    	void setData(int id,int name[100],int type,int staff_size,int room_size,int establish_year,int add,int rating_type,int website)
    	{
    		this->type = type
    		cout<<"Enter Hotel Id=";
    		cin>>id;
    		cout<<"Enter Hotel Name=";
    		cin>>name;
    		cout<<"Enter Hotel Type=";
    		cin>>type;
    		cout<<"Enter Hotel Staff Size=";
    		cin>>staff_size;
    		cout<<"Enter Hotel Room Size=";
    		cin>>room_size;
    		cout<<"Enter Hotel Establish Year=";
    		cin>>establish_year;
    		cout<<"Enter Hotel Address=";
    		cin>>add;
    		cout<<"Enter Hotel Rating Type=";
    		cin>>rating_type;
    		cout<<"Enter Hotel Website=";
    		cin>>website;
			getData();	
		}
		void getData()
		{
			cout<<"Id="<<id
		}
		
main()
{
	
}

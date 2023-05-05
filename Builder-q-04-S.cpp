#include<iostream>
#include<string.h>

using namespace std;

class State
{
	public :
	static char state_name[100];
	int no_of_city;
	int no_of_district;
	char largest_city[100];
	char state_population[100];
	char state_language[100];
	
	void setData()
	{
		cout<<"Enter No of City In Gujarat=";
		cin>>no_of_city;
		cout<<"Enter No of District In Gujarat=";
		cin>>no_of_district;
		cout<<"Enter Largest City In Gujarat=";
		cin>>largest_city;
		cout<<"Enter No of State Population In Gujarat=";
		cin>>state_population;
		cout<<"Enter Mother Language In Gujarat=";
		cin>>state_language;
		cout<<"..........................................."<<endl;
	}
	
	void getData()
	{
		cout<<"No Of City="<<no_of_city<<endl
		<<"No of District="<<no_of_district<<endl
		<<"Largest City="<<largest_city<<endl
		<<"State Population="<<state_population<<endl
		<<"Mother Language="<<state_language<<endl;		
	}
	
	static void info()
	{
		cout<<"State="<<state_name<<endl;
	}
};

char State::state_name[100]="Gujarat";

main()
{
	State s;
	
	s.setData();
	s.info();
	s.getData();
	
}

//program to execute employees bonus through the salaries
#include<iostream>
using namespace std;
int main ()
{
	float salary,bonus;
	int year;
	cout<<"input your salary"<<endl;
	cin>>salary;
	cout<<"input year of service"<<endl;
	cin>>year;
	if(year>10)
	{
		bonus=salary*10.0/100;
	}
	else if(year>=6&year<=10)
	{
	bonus=salary*8.0/100;	
	}	
	else if(year>=0&year<=6)
	{
		bonus=salary*5.0/100;
	}
	salary=salary+bonus;
	cout<<"your total salary:$;"<<salary;
	return 0;
}
//to find commission in trade sales
#include<iostream>
using namespace std;
int main()
{
	double sales1=0.0;
	double sales2=0.0;
	double commissionRates=0.0;
	double totalsales=0.0;
	double commission=0.0;
	cout<<"first sales";
	cin>>sales1;
	cout<<"second sales";
	cin>>sales2;
	cout<<"commissionRates in decimal format";
	cin>>commissionRates;
	totalsales=sales1+sales2;
	commission=totalsales*commissionRates;
	cout<<"commission:$"<<commission<<endl;
	return 0;
}
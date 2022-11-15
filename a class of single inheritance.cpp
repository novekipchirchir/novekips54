//A programm to execute class and objects in inheritance
//public in c++
#include<iostream>
using namespace std;
//base class
class grandfather{
	public:
		void trustfund(){
			cout<<"i am trustee"<<endl;
		}
		void berkshirehathwayconglomorate(){
			cout<<"i am the CEO"<<endl;
		}
		void teslastock(){
			cout<<"i own 30% shares"<<endl;
		}
};
//derived class
class father:public grandfather{
	public:
		void teslastock(){
			cout<<"i own 30% shares"<<endl;
		}
};
int main(){
	//creating object of inheritance
	grandfather father1;
	//calling member of the base class
	father1.trustfund();
	father1.berkshirehathwayconglomorate();
	//calling member of a derived class
	father1.teslastock();
	return 0;
}
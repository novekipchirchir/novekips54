// A program to illustrate the working of a class
//piblic and private in c++ class
#include<iostream>
using namespace std;
//creating a class cylinder
class cylinder{
	public:
		int radius,height;
		float sa;
		float pi=3.142;
		float volume(){
			//Display of a formula of volume and surfaceArea cylinder
			return(pi*radius*radius*height);
		}
		float surfaceArea(){
			sa=(2*pi*radius*rsdius)+(2*pi*radius*radius);
			return sa;
		}
     }
     int main(){
     	// a function of cylinder cylinder1
		 cylinder cylinder1;
		 int a,b;
		 float vol,sa;
		 a=cylinder1.radius=4;
		 b=cylinder1.height=10;
		 vol=cylinder1.volume();
		 sa=cylinder1.surfaceArea;
		 cout<<"volume is:"<<<vol<<endl;
		 cout<<"sa is:"<<sa<<endl;
		 return 0;
	 }
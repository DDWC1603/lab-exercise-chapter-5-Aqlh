//its a program to find the average value.
//AQILAH A17DW2330

#include<iostream>
using namespace std;

double avg(double x, double y);
int main()
{

	double x=0.0;
	double y=0.0;

	cout<<"Enter first number"<<endl;
	cin>>x;
	
	cout<<"Enter second number"<<endl;
	cin>>y;
	
	std::cin.get();
    
	cout<<"Average is: "<<avg(x,y)<<endl;
	
	
	
}

double avg(double x,double y)
{
	
   return (x+y)/2;
	
}

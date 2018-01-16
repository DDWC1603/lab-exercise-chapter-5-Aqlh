//finish up this program.thanks.
//AQILAH A17DW2330

#include <iostream>
#include <iomanip>
using namespace std;

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat >0)
	{
		for(int i=2; i<=up; i++)
		cout<<setw(height)<<right<<"+"<<endl;
		for(int i=2; i<=down; i++)
		cout<<"+"<<endl;
		repeat --;
	}
}


void OmbakKeluar()
{

	cout<<"\nwaveDemo\n";
	ombakOmbak();
}

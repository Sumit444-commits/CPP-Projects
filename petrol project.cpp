#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;
class Pump{
	private : 
	float price;
	int set;
	
	public: 
	void setting(){
		cout<<"\n\t\t\t-----WELCOME TO PETROL STATION-----";
		cout<<"\n\n\t\t\tSELECT \n\t\t\t1.DESIL\n\t\t\t2.PETROL\n\t\t\t";
		cin>>set;
		switch(set){
			case 1: 
			getprice();
			desil();
			break;
			case 2:
			getprice();
			petrol();
			break;
		}		
	}
	void getprice(){
		
		cout<<"\n\t\t\tEnter Price ";
		cin>>price;
	}
	void petrol(){
		for(int i=0;i<=price;i++){
	Sleep(250);
	system("CLS");
	cout<<"\n\n\n\t\t\t\t\t--Petrol Pump-- ";
	cout<<"\n\n\t\t\tRUPEES "<<i<<" Rs.";
	cout<<"\n\t\t\tLiter "<<setprecision(4)<<fixed<<(float)i/272;
	cout<<"\n\t\t\tPrice per liter 272 Rs.";
	}
	}
	void desil(){
			for(int i=0;i<=price;i++){
	Sleep(250);
	system("CLS");
	cout<<"\n\n\n\t\t\t\t\t--Petrol Pump-- ";
	cout<<"\n\n\t\t\tRUPEES "<<i<<" Rs.";
	cout<<"\n\t\t\tLiter "<<setprecision(4)<<fixed<<(float)i/293;
	cout<<"\n\t\t\tPrice per liter 293 Rs.";
	}
	}
};
int main(){
	Pump a;
	a.setting();

getch();
return 0;
}


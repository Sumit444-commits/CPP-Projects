#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class banking{
	private: 
	char on_t[4];
	string password,ot;
	string acc_h_name;
	double balance;
	double amount;
	int opt;
	public:
		banking(){
			cout<<"\n\t\t\t\t-----User Info-----\n";
			cout<<"\tEnter Account Holder Name : ";
			getline(cin,acc_h_name);
			cout<<"\n\tEnter Initial Balance: ";
			cin>>balance;
			cin.ignore();
			cout<<"\tCreate 4 digit pin ";
			cin>>password;
			system("cls");
		}
	void account(){
		cout<<"\n\t\t\tEnter Your 4 digit Pin \n\n\t\t\t\t";
		for(int i=0;i<4;i++){
				on_t[i]=getch();
				cout<<"*";
			}
		
		options();
	}
	void options(){
		if(password==on_t){
			system("cls");
		cout<<"\n\tEnter Choice:";
		cout<<"\n\t1.Deposit\n\t2.Withdraw\n\t3.Display Details\n\t4.Exit\n\t";
		cin>>opt;	
		calling();	
		}
else{
			cout<<"\nWrong Pin \nEnter correct pin";
			getch();
			system("cls");
			account();
		}  
		}
	void deposit(){
		cout<<"\n\tEnter Amount To Depoist: ";
		cin>>amount;
		cout<<"\n\tAmount Deposited: "<<setiosflags(ios::fixed)<<setprecision(2)<<fixed<<amount;
		balance=balance+amount;
		getch();
		options();
	}
	void Withdraw(){
		cout<<"\n\tEnter Amount To Withdraw: ";
		cin>>amount;
		if(amount>balance){
			cout<<"\n\tInsufficient balance!";
			getch();
		options();
		}else{
		cout<<"\n\tAmount Withdrawn: "<<setiosflags(ios::fixed)<<setprecision(2)<<fixed<<amount;
		balance-=amount;
		getch();
		options();
		}
	}
	void Display(){
		cout<<"\n\t\t\t--User Info--";
		cout<<"\n\tAccount Holder Name: "<<acc_h_name;
		cout<<"\n\tBalance "<<setiosflags(ios::fixed)<<setprecision(2)<<fixed<<balance;
		getch();
		options();
	}
	void calling(){
		switch(opt){
			case 1:
			deposit();
			break;
			case 2:
			Withdraw();
			break;
			case 3:
			Display();
			break;
			case 4:
			cout<<"\n\n\t\tThank you For Visiting our Bank";
				break;
				default:
					cout<<"\n\tInvalid Choice :";
					getch();
					options();
					break;
		}
	}
};
int main(){
banking a;
	char y_n;
	do{
		a.account();
	cout<<"\n\n\tWant to Run Again your Program(y/n)";
		cin>>y_n;
	system("cls");
	}while(y_n=='y');


return 0;
}


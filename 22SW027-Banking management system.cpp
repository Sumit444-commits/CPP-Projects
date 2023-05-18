#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class Bank
{
	private : 
		int total;
		string id;
		struct person
		{
			string name,ID,address,pass,password,contact;
			double cash;	
		}person[100];
	public:
		Bank()
		{
			total=0;	
		}
	void choice();
	void perData();
	void show();
	void update();
	void search();
	void transactions();
	void forget_password();
	void del();
	void loading();
	
};
void Bank::choice()
{
	char ch;
		system("cls");
		cout<<"\t\t\t---------------------------------------------------------"<<endl;
		cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
		cout<<"\t\t\t---------------------------------------------------------"<<endl;
		cout<<"\n\t\t\t\t\t***************";
		cout<<"\n\t\t\t\t\t Control Panel";
		cout<<"\n\t\t\t\t\t***************";
		cout<<"\n 1.Create New Account";
		cout<<"\n 2.View Coustomer List";
		cout<<"\n 3.Update Information of Existing Account";
		cout<<"\n 4.Check The Details of an Existing Account";
		cout<<"\n 5.For Transactions";
		cout<<"\n 6.Remove Existing Account";
		cout<<"\n 7.Forget password";
		cout<<"\n 8.Exit";
		cout<<"\n Enter your choice ";
		ch=getch();
		system("cls");
			switch(ch)
		{
			case '1':
				 perData();
				 loading();
			 	 cout<<"\t\t\t---------------------------------------------------------"<<endl;
				 cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
				 cout<<"\t\t\t---------------------------------------------------------"<<endl;
				 cout<<"\n\n\t\t\tCongratulations! Your account created Successfully.\n";
				 getch();
				 choice();
				break;
			case '2':
				if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";
					getch();
					system("cls");
					choice();	
				}else
				{
					loading();
					show();
					getch();
					system("cls");
					choice();
				}
				break;
			case '3':
				if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";	
					getch();
					system("cls");
					choice();
				}else
				{	loading();
					update();
					getch();
					loading();
					system("cls");
					choice();
				}
				break;
			case '4':
				if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";	
					getch();
					system("cls");
					choice();
				}else
				{
					search();
					getch();
					system("cls");
					choice();
				}
				break;
			case '5':
				if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";	
					getch();
					system("cls");
					choice();
				}else
				{	
					loading();
					transactions();
					getch();
					system("cls");
					choice();
					
				}
				break;
			case '6':
					if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";	
					getch();
					system("cls");
					choice();
				}else
				{
					del();
					system("cls");
					choice();
				}
				break;
			case '7':
					if(total==0)
				{
					cout<<"\n\n\t\tNo Data is entered \n\t\tPlease create an account";
					getch();
					system("cls");
					choice();	
				}else
				{
					loading();
					forget_password();
					system("cls");
					choice();
				}
				break;
			case '8':
				cout<<"\n\n\t\tThank you for visiting...";
				exit(0);
			break;
			default:
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;				
	cout<<"\n\n Invalid Value... Please Try Again...";
				getch();
				system("cls");
				choice();	
		}	
}
void Bank::perData()
{
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\nEnter Data of Person "<<total+1<<endl;
	cout<<"Enter Name : ";
	getline(cin,person[total].name);
	u:
	cout<<"ID : ";
	cin>>person[total].ID;
	cin.ignore();
	for(int i=0;i<total;i++)
	{
		if(person[i].ID==person[total].ID)
		{
			cout<<"\nThis ID is used for another account...\nPlease try a different one \n";
			goto u;
		}
	}
	cout<<"Address : ";
	getline(cin,person[total].address);
	cout<<"Contact : ";
	cin.ignore();
	cin>>person[total].contact;
	c:
	cout<<"Total Cash : ";
	cin>>person[total].cash;
	if(person[total].cash<0)
	{
		cout<<"\nEnter a valid amount\n";
		goto c;
	}
	do{
	cout<<"Create Password for your account : ";
	cin>>person[total].password;
	cout<<"Conform Your Password : ";
	cin>>person[total].pass;
	cin.ignore();
	if(person[total].password!=person[total].pass)
	{
		cout<<"\nPassword doesn't match\n";
	}
	}while(person[total].password!=person[total].pass);
	total++;
}
void Bank::show()
{
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	for(int i=0;i<total;i++)
	{
	cout<<"\n\n************************************************";
	cout<<"\n\t\tData of Person "<<i+1;
	cout<<"\n------------------------------------------------";
	cout<<"\n\n\t Name : "<<person[i].name;
	cout<<"\n\t ID : "<<person[i].ID;
	cout<<"\n\t Adress : "<<person[i].address;
	cout<<"\n\t Contact : "<<person[i].contact;
	cout<<"\n\t Cash : "<<person[i].cash;
	}	
}
void Bank :: update()
{
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\n\nEnter Id of account you want to update : ";
	cin>>id;
 	for(int i=0;i<total;i++)
	{
	if(id==person[i].ID)
	{
	up:
	cout<<"\nEnter your password ";
	cin>>person[i].pass;
	
	if(person[i].pass==person[i].password)
	{
	cout<<"\n\n\t\tPrevious Data";
	cout<<"\n------------------------------------------------";
	cout<<"\n\n\tData of Person "<<i+1;
	cout<<"\n Name : "<<person[i].name;
	cout<<"\n ID : "<<person[i].ID;
	cout<<"\n Address : "<<person[i].address;
	cout<<"\n Contact : "<<person[i].contact;
	cout<<"\n Cash : "<<person[i].cash;
	cout<<"\n************************************************";
	cout<<"\n\n\t\t Enter New Data "<<endl;
	cout<<"\n------------------------------------------------";
	cin.ignore();
	cout<<"\n Enter Name : ";
	getline(cin,person[i].name);
	cout<<" ID : ";
	cin>>person[i].ID;
	cin.ignore(); 
	cout<<" Address : ";
	getline(cin,person[i].address);
	cout<<" Contact : ";
	cin.ignore();
	cin>>person[i].contact;
	ca:
	cout<<" Total Cash : ";
	cin>>person[i].cash;
	if(person[i].cash<0){
		cout<<"\nEnter a valid amount balance \n";
		goto ca;
	}
	break;
	}else
	{
		cout<<"\nWrong password";
		goto up;
	}
	
	}
		if(i==total-1)
	{	
		cout<<"\n\n\t\tSorry... No such record found ";
	}
	}
}
void Bank::search()
{
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\n\nEnter ID of account you want to Search : ";
	cin>>id;
	loading();
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;	
	for(int i=0;i<total;i++)
	{
	if(id==person[i].ID)
	{
	cout<<"\n\n Name : "<<person[i].name;
	cout<<"\n ID : "<<person[i].ID;
	cout<<"\n Adress : "<<person[i].address;
	cout<<"\n Contact : "<<person[i].contact;
	cout<<"\n Cash : "<<person[i].cash;
	break;
	}
	if(i==total-1)
	{	
		cout<<"\n\n\t\tSorry... No such record found ";
	}
	}
}
void Bank::transactions()
{
	int Cash;
	char ch1;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;	
	cout<<"\n\nEnter ID of account for transactions : ";
	cin>>id;
	for(int i=0;i<total;i++)
	{
	if(id==person[i].ID)
	{
	up1:
	cout<<"\nEnter your password ";
	cin>>person[i].pass;
	if(person[i].pass==person[i].password)
	{
	cout<<"\nName : "<<person[i].name;
	cout<<"\nAdress : "<<person[i].address;
	cout<<"\nContact : "<<person[i].contact;
	cout<<"\nExisting Cash : "<<person[i].cash;
	cout<<"\n\nPress 1 To Deposit";
	cout<<"\nPress 2 To Withdraw";
	ch1=getch();
	switch(ch1)
	{
		case '1':
			cout<<"\nHow much Cash you want to Deposit?? ";
			cin>>Cash;
			person[i].cash+=Cash;
			cout<<"\n\nNew Balance "<<person[i].cash;
			break;
		case '2':
			back:
			cout<<"\n\t\tHow much Cash you want to Withdraw?? ";
			cin>>Cash;
			if(Cash>person[i].cash)
			{
				cout<<"\n\t\tYour Existing Cash is just "<<person[i].cash;
				Sleep(3000);
				goto back;	
			}
			else
			{
			person[i].cash-=Cash;
			cout<<"\n\n New Balance "<<person[i].cash;	
			}
			break;	
		default:
			cout<<"\n\n\t\tInvalid choice";
	}
	}else
	{
		cout<<"\nWrong password";
		goto up1;
	}
	break;												//if data found then break;
	}
	if(i==total-1)                                     //user enter wrong id
	{
		cout<<"\n\n\t\tSorry... No such record found ";
	}
	}
}
void Bank::forget_password()
{
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\n\nEnter ID whose of your account : ";
	cin>>id;
		for(int i=0;i<total;i++)
				{
					if(id==person[i].ID)
					{
		do{
					cout<<"Change password of your account : ";
					cin>>person[i].password;
					cout<<"\nConform Your Password : ";
					cin>>person[i].pass;
					if(person[i].password!=person[i].pass)
					{
					cout<<"\nPassword doesn't match\n";
					}else
					{
						loading();
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;						
					cout<<"\nPassword changed successfully";
					}
		}while(person[i].password!=person[i].pass);
					
					break;
					}
				
					if(i==total-1)
					{
						loading();
						cout<<"\n\n\t\tSorry... No such record found ";
					}
				}
				getch();
				
}
void Bank::del()
{
	char ch2;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\n\t Press 1 to remove specific record";	
	cout<<"\n\t Press 2 to remove full record";
	ch2=getch();
	switch(ch2)
	{
		case '1':
			cout<<"\n\nEnter ID of account to delete that account : ";
			cin>>id;
				for(int i=0;i<total;i++)
				{
					if(id==person[i].ID)
					{
						up2:
					cout<<"\nEnter your password ";
					cin>>person[i].pass;	
					if(person[i].pass==person[i].password)
			{
					for(int j=i;j<total;j++)
					{
						person[j].name=person[j+1].name;
						person[j].ID=person[j+1].ID;
						person[j].address=person[j+1].address;
						person[j].contact=person[j+1].contact;
						person[j].cash=person[j+1].cash;
						total--;
						loading();
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
						cout<<"\nYour required data is deleted"<<endl;
						getch();
						break;
					}
					}else
					{
						cout<<"\nWrong password";
						goto up2;
					}
			}
					if(i==total-1)
					{
						cout<<"\n\n\t\tSorry... No such record found ";
						getch();
					}
				}
				break;
		case '2':
			loading();
			total=0;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;			
			cout<<"\n\n\t\tAll record is deleted";
			getch();
			break;
		default:
			cout<<"\n\n\t\tInvalid Record";
			getch();
			break;
	}
}
void Bank::loading(){
		for(int k=0;k<3;k++){
		for(int i=0;i<3;i++){
			Sleep(25);
			system("cls");
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
	cout<<"\t\t\t|\t\t\tBanking System\t\t\t|"<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
			cout<<"\n\n\t\t\t\tPlease Wait";
			for(int j=0;j<=i;j++){
				cout<<".";
			}
		}			
	}
	system("cls");
		}
int main()
{
	Bank obj;
	obj.choice();
return 0;
}

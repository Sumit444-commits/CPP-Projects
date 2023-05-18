#include<iostream>
using namespace std;
int main(){


int E=0, N=0, W=0, S=0;
cout<<"WELCOME TO TREASURE HUNT\n";

	int i=1;
	char ch;
	cout<<"Quit (y/n) : ";
	cin>>ch;
	char direction;
	cout<<"To choice direction press anyone key (n,e,w,s)\n";
	while(ch=='n'||ch=='N'){
	while(i<=10){
		i++;
		cout<<"choice direction : ";
		cin>>direction;
		if(direction=='e'){
			++E;
		}else if(direction=='n'){
			++N;
		}else if(direction=='w'){
			++W;
		}else if(direction=='s'){
			++S;
		}else{
			cout<<"try again\n";
		}
		cout<<"N="<<N<<" E="<<E<<" W="<<W<<" S="<<S<<endl;
	
	}
		if(N==5&&E==2&&W==1&&S==2){
		cout<<"\n\nYOU WON 20000 coins!!\n\n";
	}else{
		cout<<"\n\nYOU LOSE!!\n\n";
	}	

	cout<<"\nTo Quit (y/n) : ";
	cin>>ch;
	i=1;
	system("CLS");
	E=0,N=0,W=0,S=0;

	cout<<"To choice direction press anyone key (n,e,w,s)\n";
}




return 0;
}


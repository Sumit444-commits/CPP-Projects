#include<iostream>
using namespace std;
int main(){
	
int x,y=0;
cout<<"Enter no: ";
cin>>x;
for(int i=1;i<=x;i++){
	if(x%i==0){
		y++;
	}
}
	if(y==2)
	{
		cout<<x<<" is a prime number";
	}	else
	{
cout<<x<<" is not a prime number";
	}	
	return 0;
}

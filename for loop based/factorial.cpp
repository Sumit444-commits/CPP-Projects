#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter no: ";
	cin>>num;
	if(num<0){
		cout<<"Invalid no:";
	}
	else{
		int fact=1;
		int x=num;
	for(int i=1;i<=num;i++)
{
	fact*=x;
	x--;
}
	cout<<num<<"!= "<<fact;
	}
	return 0;
}

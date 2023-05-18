#include<iostream>
using namespace std;

int main(){
 int Max;
cout<<"Enter number of values you want to store in A :";
cin>>Max;
int mgw[Max];
int sum;
for(int i=0;i<Max;i++){
	cout<<"Enter value of A["<<i<<"]:";
	cin>>mgw[i];
}
sum=mgw[0];
for(int j=1;j<Max;j++){
	sum+=mgw[j];
}
float avg=sum/Max;
cout<<"Average of all numbers stored in A is ";
cout<<avg;
return 0;
}


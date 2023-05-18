#include<iostream>
using namespace std;
int main(){
 int Max;
cout<<"Enter number of values you want to store in A :";
cin>>Max;
int arr[Max];
int index;
for(int i=0;i<Max;i++){
	cout<<"Enter value of A["<<i<<"]:";
	cin>>arr[i];
}
int m=arr[3];

for(int j=Max;j>=0;j--){
	if(m<arr[j]){
		m=arr[j];
	index=j;
	}
}
cout<<"The Largest number in A is "<<m<<" is at position of A["<<index<<"]";


return 0;
}


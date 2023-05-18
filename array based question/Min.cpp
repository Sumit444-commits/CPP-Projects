#include<iostream>
using namespace std;
int main(){
 int Max;
cout<<"Enter number of values you want to store in A :";
cin>>Max;
int mgw[Max];
int index;
for(int i=0;i<Max;i++){
	cout<<"Enter value of A["<<i<<"]:";
	cin>>mgw[i];
}
int m=mgw[Max-1];

for(int j=Max-1;j>=0;j--){
	if(m>mgw[j]){
		m=mgw[j];
	index=j;
	}
}
cout<<"The smallest number in A is "<<m<<" is at position of A["<<index<<"]";


return 0;
}


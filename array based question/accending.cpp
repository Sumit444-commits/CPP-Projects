#include<iostream>
using namespace std;
int main(){
 int Max;
cout<<"Enter number of values you want to store in A :";
cin>>Max;
int mgw[Max];
int acc;
for(int i=0;i<Max;i++){
	cout<<"Enter value of A["<<i<<"]:";
	cin>>mgw[i];
}
for(int i=0;i<Max;i++){

for(int j=0;j<Max;j++){

	if(mgw[i]<mgw[j]){
		acc=mgw[i];   
		mgw[i]=mgw[j];      
		mgw[j]=acc;          
	
}
}
}
for(int i=0;i<Max;i++){
	cout<<" "<<mgw[i];
}
return 0;
}


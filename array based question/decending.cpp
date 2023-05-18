#include<iostream>
using namespace std;
int main(){
	int Max;
cout<<"Enter number of values you want to store in A :";
cin>>Max;
int dec[Max];
for(int i=0;i<Max;i++){
	cout<<"Enter value of A["<<i<<"]:";
	cin>>dec[i];
}
int swap;
for(int i=0;i<Max;i++){
for(int j=0;j<Max;j++){
	if(dec[i]>dec[j]){	
		swap=dec[i];		
		dec[i]=dec[j];		
		dec[j]=swap;		
	}
}	
}
cout<<"IN decending order: ";
for(int i=0;i<Max;i++){
	
	cout<<" "<<dec[i];
	
}

return 0;
}


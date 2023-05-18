#include<iostream>
using namespace std;
void pat_1(int r,int c){
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pat_2(int r,int c){
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
		if(i==1||j==1||i==r||j==c){
		cout<<"*";
		}
		else{
			cout<<" ";
		}
		}
		cout<<endl;
	}
}
void pat_3(int n){
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pat_4(int n){
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			cout<<" ";//4,3,2,1
		}
		for(int j=1;j<=i;j++){
			cout<<"*";//
		}
		cout<<endl;
	}
}
void pat_5(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}
void pat_6(int n){
	int a=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<a++<<" ";
		}
		cout<<endl;
	}
}
void pat_7(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space =2*n-2*i;
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space =2*n-2*i;
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pat_8(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void pat_9(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<"1 ";
			}else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
void pat_10(int n){
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<"* ";
		} 
		cout<<endl;
	}
}
void pat_11(int n){
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void pat_12(int n){
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			cout<<" ";
		}
		int k=i;
		for(int j=1;j<=i;j++){
			cout<<k--;
		}
		k=2;
		for(int j=1;j<=i-1;j++){
			cout<<k++;
		}
		cout<<endl;
	}
}
void pat_13(int n){
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=1;j<=i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int k=i;k<n;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=1;j<=i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pat_14(int n){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%4==0||(i==2&&j%4==0)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
	int r,c,n,p;
	char ch='y';
	do{
	cout<<"Enter pattern no: ";
	cin>>n;
	if(n==1||n==2){
	cout<<"Enter no: of rows : ";
	cin>>r;
	cout<<"Enter no: of coloums : ";
	cin>>c;
}
else{
	cout<<"enter pattern range : ";
	cin>>p;
}
	switch(n){
		case 1:
			pat_1(r,c);
			break;
		case 2:
			pat_2(r,c);
			break;
		case 3:
			pat_3(p);
			break;
		case 4:
			pat_4(p);
			break;
		case 5:
			pat_5(p);
			break;
		case 6:
			pat_6(p);
			break;
		case 7:
			pat_7(p);
			break;
		case 8:
			pat_8(p);
			break;
		case 9:
			pat_9(p);
			break;
		case 10:
			pat_10(p);
			break;
		case 11:
			pat_11(p);
			break;
		case 12: 
			pat_12(p);
			break;	
		case 13: 
			pat_13(p);
			break;	
		case 14:
			pat_14(p);
			break;
	}
	cout<<"Want to continue (y/n) ";
	cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n,m,nm;
cout<<"Enter number of values you want to store in  Matrix ";
cin>>n;
m=n;
int A[n],B[m],AB[nm];
	for(int i=0;i<n;i++){
	cout<<"Enter Value of A["<<i<<"]: ";
	cin>>A[i];	
	}
	for(int j=0;j<m;j++){
	cout<<"Enter Value of B["<<j<<"]: ";
	cin>>B[j];
	}
//	for(int i=0;i<n;i++){
//	for(int j=0;j<m;j++){
//		cout<<"A["<<i<<"]*B["<<j<<"]= "<<A[i]*B[j]<<endl;
//	}
//	}
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<setw(5)<<A[i]*B[j];
	}
	cout<<endl;
	}
return 0;
}

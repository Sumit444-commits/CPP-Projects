#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of values you want to store in  Matrix ";
cin>>n;
int A[n],B[n],AB[n];
for(int i=0;i<n;i++){
cout<<"Enter Value of A["<<i<<"]: ";
cin>>A[i];	
}
for(int i=0;i<n;i++){
cout<<"Enter Value of B["<<i<<"]: ";
cin>>B[i];
}
for(int j=0;j<n;j++){
	AB[j]=A[j]+B[j];
	cout<<"A["<<j<<"]+B["<<j<<"]="<<AB[j]<<endl;
	
}

return 0;
}


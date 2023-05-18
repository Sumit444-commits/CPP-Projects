#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of values you want to store in  Matrix ";
cin>>n;
int A[n][n],B[n][n],AB[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	
cout<<"Enter Value of A["<<i<<"]["<<j<<"]:";
cin>>A[i][j];	
}
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	
cout<<"Enter Value of B["<<i<<"]["<<j<<"]:";
cin>>B[i][j];	
}
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	AB[i][j]=A[i][j]+B[i][j];
cout<<"The sum of A["<<i<<"]["<<j<<"]+B["<<i<<"]["<<j<<"]"<<AB[i][j]<<endl;
	
}
}


return 0;
}


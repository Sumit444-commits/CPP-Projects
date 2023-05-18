#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of terms u want to generate in series "<<endl;
	cin>>n;
	int a= 0;
	int b= 1;
	int c;
		if(n>=1)
		{
		cout<< a <<" ";
		}else
		{
		cout<<"invalid no:";
		}
		if(n>=2)
		{
		cout<< b<<" ";
		} 
	for(int i=2; i<n; i++)
	{
		c=a+b;
		cout<< c <<" ";
		a=b;
		b=c;
	}
}


/*
	precious idehen
	
	program: creating a star with nested for loop.
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n=5,m; 
	for(i=1;i<=n;i++) {
		cout<<"\t\t";
		for(j=n;j>=i;j--)
			cout<<" ";
		for(k=1;k<=(2*i-1);k++)
			cout<<"*";
		cout<<endl;
	}
	n=13;
	for(i=5;i>=1;i--) {
		cout<<"\t";
		cout<<" ";
		for(k=1;k<=(2*n-1);k++)	{	
			cout<<"*";

		}
	n--;
	cout<<endl; 

	}
	n=5;m=1;
	for(i=n;i>=1;i--) {
		cout<<"\t";
		for(j=1;j<=i;j++) {
			cout<<" ";
		}
		for(k=1;k<=(2*i-1);k++)
			cout<<"*";
		for(j=7;j<=6*m;j++)
			cout<<" ";
		for(k=1;k<=(2*i-1);k++)
			cout<<"*";
		m++;
		cout<<endl;	
	}
	return 0;
}

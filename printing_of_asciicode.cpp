#include<iostream>
using namespace std;
int main(){
	int n; 
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=1;i<=n;i++){   //loops
		for(int j=1;j<=n;j++) 
		{	cout<<(char)(j+64)<<" "; //typecasting
		}
		cout<<endl;	
	}

}

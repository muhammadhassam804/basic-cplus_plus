#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter number of rows : ";
	cin>>x;
		int a=1;
	for(int i=1;i<=x;i++){
		for( int j=1;j<=i;j++){
			cout<<a<<" ";
			a++;
		}
		cout<<endl;
	}
}

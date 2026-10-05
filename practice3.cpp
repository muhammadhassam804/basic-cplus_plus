#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number :";
	cin>>n; 
	int count = 1;
	while(n>0){
	n= n/10;
	count++;
	}
	cout<<count;
}

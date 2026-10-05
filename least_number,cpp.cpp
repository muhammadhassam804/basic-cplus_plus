#include<iostream>;
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first no : ";
	cin>>a;
		cout<<"enter second no : ";
	cin>>b;
		cout<<"enter third no : ";
	cin>>c;
	if(a<b and a<c){
		cout<<"a is the least no";
	}
	else if(b<a and b<c){
		cout<<"b is least no";
	} 
	else{
		cout<<"c is least no";
	}
	
}

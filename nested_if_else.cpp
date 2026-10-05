#include<iostream>;
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first number";
	cin>>a;
		cout<<"enter second number";
	cin>>b;
		cout<<"enter third number";
	cin>>c;
	if(a>b){
		if(a>c)
		cout<<a<<"a is greatest";
	
		else{
			cout<<c<<"c is greatest";
	}
}
 else {
		if(b>c){
			cout<<b<<"b is greatest";
		}
		else{
			cout<<c<<"c is greatest";
		}
	} 
}

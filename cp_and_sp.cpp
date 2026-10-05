#include<iostream>;
using namespace std;
int main(){
	int cp;
	cout<<"Enter cost price of product : ";
	cin>>cp;
	
	int sp;
	cout<<"Enter selling price of product : ";
	cin>>sp;
	
	if(sp>cp){
		cout<<"profit"<<sp-cp;
	}
	if(sp<cp){
		cout<<"loss"<<cp-sp;
		
	}
	if(sp==cp){
		cout<<"no loss and no profit";
	
	}
}

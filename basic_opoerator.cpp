#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int count=0;
    while(x!=0){
    	x=x/2;
    	count++;
	}
	cout<<count;

}

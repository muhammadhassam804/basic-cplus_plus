#include<iostream>
using namespace std;
int main(){
	int Ali,Khan,Gul;
	cout<<"enter ist age : ";
	cin>>Ali;
	cout<<"enter second age : ";
	cin>>Khan;
	cout<<"enter third age : ";
	cin>>Gul;
	if(Ali>Khan){
		if(Ali>Gul)
		cout<<Ali<<"the age of Ali is greatest";
		else{
			cout<<"the age of gul is greatest";
		}
	}
	else{
		if(Khan>Gul){
			cout<<Khan<<"the age of Khan is greatest";
		}
		else{
			cout<<Gul<<"the age of gul is greatest";
		}
	}

	
}

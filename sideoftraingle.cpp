#include <iostream>;
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first no : ";
	cin>>a;
	cout<<"enter second no : ";
	cin>>b;
	cout<<"enter third no : "; 
	cin>>c;
	if(a+b>c and b+c>a and c+a>b)  // It means that the sum f two sides of triangle > than the other side
	cout<<"the triangle is valid"; 
	else{
			cout<<"invalid triangle";
	}

	
}

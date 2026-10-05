#include<iostream>;

using namespace std;
int main(){
	int a,b,c,d;
	float sum,per;
	cout<<"enter first value"<<endl;
	cin>>a;
	cout<<"enter second value"<<endl;
	cin>>b;
	cout<<"enter third value"<<endl;
	cin>>c;
	cout<<"enter fourth value"<<endl;
	cin>>d;	
	sum = a + b+c+d;
	per = sum/400*100;
	cout<<"the percentage is :"<<per<<endl;
	
	
	if(per>=90)
	{
		cout<<"grade A";
	}
	else if(per>=80 and per<=89){
		cout<<"grade b";
	}
	else if(per>=70 and per<=79){
		cout<<"grade c";
	}
	else
	{
		cout<<"fail";
	}
}

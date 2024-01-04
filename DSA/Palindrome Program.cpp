#include<iostream>
using namespace std;
int main(){
	int num ,temp,reveser,remainder;
	cout<<"enter the num";
	cin>>num;
	temp=num;
	while(temp!=0){
		remainder=temp%10;
		reveser=remainder*10+reveser;
		temp=temp/10;
	}
	
	if(num==reveser){
		cout<<"it is polindrome";
	}
	else{
			cout<<"it is not polindrome";
		
	}
}

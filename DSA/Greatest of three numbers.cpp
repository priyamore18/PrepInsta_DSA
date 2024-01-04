#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"enter the number"<<num1;
	cin>>num1;
	cout<<"enter the number"<<num2;
	cin>>num2;
	cout<<"enter the number"<<num3;
	cin>>num3;
	if((num1>=num2)&&(num1>=num3)){
		cout<<num1<<"is the greatest";	
	}
	else if((num2>=num1)&&(num2>=num3)){
		cout<<num2<<"is the greatest";
	}
	else{
		cout<<num3<<"is the greatest";
	}
}    

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter the number";
	cin>>num;
	int rem;
	int sum=0;
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
	cout<<"sum of the digit"<<sum;
	
}




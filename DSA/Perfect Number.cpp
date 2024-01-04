#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout<<"enter the number";
	cin>>number;
	for(int i=1;i<number;i++){
		if(number%i==0){
			sum=sum+i;
			
			
		}
	}
	if(sum==number){
		cout<<"it is perfect number";
	}
	else{
		cout<<"it is not perfect number";
	}
}

#include<iostream>
using namespace std;
int main(){
	int number, count;
	cout<<"enter the number to check the prime or not";
	cin>>number;
	for(int i=2;i<number+1;i++){
		if(number%i==0){
			count+=1;
		}
	}
	if(number==1||number==0){
		cout<<"this is not prime number";
	}
	else if(count>2){
		cout<<"this is not prime number";
	}
	else{
		cout<<"this is prime number";
	}
	
}
//prime number are 2 ,3 ,5,7,11 so on

// 3=3,1



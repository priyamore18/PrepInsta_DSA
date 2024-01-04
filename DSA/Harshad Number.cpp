#include<iostream>
using namespace std;

 int hars(int number){
 	while(number!=0){
 		int sum=sum+number%10;
 		number=number/10;
	 }
	 
	 return sum%number==0;
 }
 int main(){
 	int number;
	cout<<"enter the number";
	cin>>number;
	if(hars(number)){
		cout<<"it is";
	}
	else{
		cout<<"it is not";
	}
	
 }
 	
 

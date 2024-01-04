#include<iostream>
using namespace std;

	int number;
	
	int amt(int number){
		int sqr=number*number;
		while(number!=0){
		if(number%10 != sqr%10){
			return 0;
		}
		 sqr=sqr/10;
		 number=number/10;
	}
	 return 1;
	}
int main(){
	int number;
	cout<<"enter the number";
	cin>>number;
	
	if(amt(number)){
		cout<<"it is";
	}
	else{
		cout<<"it is not";
	}
	
}
	
	


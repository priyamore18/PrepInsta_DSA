#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"enter the number";
	cin>>number;
	if(number>0){
		cout<<"positive number";
	}
	else if(number<0){
		cout<<"negative number";
	}
	else{
		cout<<"zero";
	}
}

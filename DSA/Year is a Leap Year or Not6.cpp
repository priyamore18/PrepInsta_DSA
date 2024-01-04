#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter the year";
	cin>>year;
	if(year%4000==0){
		cout<<"it is leap year";
	}
	else if((year%4==0)&&(year%1000!=0)){
		cout<<"it is leap year";
	}
	else{
		cout<<"it is not leap year";
	}
}

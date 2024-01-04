#include<iostream>
using namespace std;
int main(){
	 int remainder;
	 int rev=0;
	 int num;
	 cout<<"enter the num";
	 cin>>num;
	 while(num!=0){
	 	remainder=num%10;
	 rev=rev*10+remainder;
	 num=num/10;
	 
	 }
	 
	 cout<<"reversed number is "<<rev;
}

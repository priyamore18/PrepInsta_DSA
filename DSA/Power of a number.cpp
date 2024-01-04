#include<iostream>
using namespace std;
int main(){
	int base,exp;
	cout<<"enter the base and exp";
	cin>>base>>exp;
	int result=1;
	while(exp!=0){
		result*=base;
		--exp;
	}
	cout<<result;
}

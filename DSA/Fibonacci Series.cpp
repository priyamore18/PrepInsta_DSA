#include<iostream>
using namespace std;
int main(){
	int a=0;
	int b=1;
	cout<<a<<","<<b<<",";
	int next;
	int num=15;
	for(int i=2;i<num;i++){
		next=a+b;
		a=b;
		b=next;
		cout<<next<<",";
		
		
	}


}

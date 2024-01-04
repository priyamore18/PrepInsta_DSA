#include<iostream>
using namespace std;
int order(int x){
	int lenght=0;
	while(x){
	
	x=x/10;
	lenght++;
	}
	return lenght;
}

int check(int low,int high){
	for(int num=low;num<=high;num++){
	int digit,temp;
	int sum=0;
	num=temp;
	int lenght=order(num);
	while(temp!=0){
		digit=temp%10;
		sum=sum+digit*lenght;
		temp=temp/10;
	}
	if(sum==num){
		cout<<num<<" ";
	}

		
	}
	
}
int main(){
	int low=100,high=400;
	check(low,high);
	
}

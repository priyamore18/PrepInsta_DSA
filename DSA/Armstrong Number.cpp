#include<iostram>
using namespace std;
int order(int x){
	int lenght=0;
	while(x){
		x=x/10;
		lenght++;	
	}
	return lenght;
}

int check(int lenght,int num){
	int sum,temp;
	num=temp;
	while(temp!=0){
	int digit=num%10;
	sum=sum+digit*lenght;
	num=num/10;
	}
	return num=sum;

	
}
int main(){
	cout<<"enter the number";
	cin>>num;
	
	
	
	
}

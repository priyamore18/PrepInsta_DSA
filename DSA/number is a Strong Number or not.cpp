#include<iostream>
using namespace std;
int facto(int num){
	int fact=1;
    for(int i=1;i<=num;i++){
     fact=fact*i;
	}
	return fact;
}

 int detect(int n){
	int digit,temp;
	int sum=0;
	temp=n;
	while(n!=0){
		digit=n%10;
		sum=sum+facto(digit);
		n=n/10;
	}
	
	return sum==temp;
}
int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	   if(detect(n)){
	    	cout << n << " is Strong Number";
		}
        else{
       	cout << n << " is Not Strong Number";
	   }
        
}



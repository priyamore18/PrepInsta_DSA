/*
A 
B C
C D E
D E F G*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>> n;
	char alpha;
	for(int i=1;i<=n;i++){
		
		
		for(int j=1;j<=i;j++){
			 
	    alpha='A'+i+j-2;
	    cout<<alpha;
			
		}
		cout<<endl;
	}
	
}

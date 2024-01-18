/*
A
B C
D E F
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>> n;
	char alpha='A';
	for(int i=0;i<=n;i++){
		
		
		for(int j=0;j<=i;j++){
			 
	    cout<<alpha;
	    alpha++;
			
		}
		cout<<endl;
	}
	
}


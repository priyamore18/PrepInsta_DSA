/*
D
C D
B C D
A B C D

*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>> n;
	char alpha;
	for(int i=1;i<=n;i++){
		 alpha='A'+n-i;
	
		for(int j=1;j<=i;j++){
			 
	   
	    cout<<alpha;
	    alpha++;
	    
			
		}
		cout<<endl;
	}
	
}

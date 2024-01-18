/*
A 
B B
C C C
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>> n;
	char alpha='A';
	for(int i=0;i<=n;i++){
		 alpha='A'+i;
		
		for(int j=0;j<=i;j++){
	    cout<<alpha;
			
		}
		cout<<endl;
	}
	
}

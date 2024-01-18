/*
    ****
   ****
  ****
 ****   */
 
 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int k=n;k>i;k--){
			cout<<" ";
		}
		for(int j=0;j<n;j++){
			cout<<"*";
		}
	  
	  cout<<endl;
	}
}

/*
*
**
***
****

*/

#include<iostream>
using namespace std;
int main(){
	int r;
	cout<<"enter the col/row";
	cin>>r;
	for(int i=0;i<=r;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

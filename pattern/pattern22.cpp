/*
****
 ****
  ****
   ****
    ****
     ****
     */
#include<iostream>
using namespace std;
int main(){
	int col;
	cout<<"enter the column";
	cin>>col;
	int row;
	cout<<"enter the row";
	cin>>row;
	for(int i=0;i<row;i++){
		for(int k=0;k<i;k++){
			cout<<" ";
		}
		for(int j=0;j<col;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}


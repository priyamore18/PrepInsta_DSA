/*
******
*    *
*    *
******
*/

#include<iostream>
using namespace std;
int main(){
	int col;
	cout<<"enter the number of column";
	cin>>col;
	int row;
	cout<<"enter the number of row";
	cin>>row;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			
			if(i==0||j==0||i==row-1||j==col-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	
	}
		
}



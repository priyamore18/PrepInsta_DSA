
/*
*********
 *     *
  *   *
   * *
    *
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=0;j<n-i;j++){
			cout<<" ";
			
		}
		for(int k=0;k<2*i-1;k++){
			if(k==0||k==2*i-2||i==n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

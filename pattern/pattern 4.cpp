/*321
  321
  321*/
  
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=n;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
}

/*123
  456
  789 */
  
#include<iostream>
using namespace std;
int main(){
	int count=0;
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			count=count+1;
			cout<<count;
		}
		cout<<endl;
	}
}

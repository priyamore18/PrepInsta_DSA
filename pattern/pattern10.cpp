/*
 A A A 
 B B B
 C C C 
 */
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number";
	cin>>n;
	char alpha;
	for(int i=0;i<=n;i++){
		alpha='A'+i;
		for(int j=0;j<=n;j++){
			cout<<alpha;
		}
		cout<<endl;
	}
}

#include<iostream>
using namespace std;
int main(){
	int start,end;
	cin>>start;
	cin>>end;
	int i,sum=0;
	for(i=start;i<=end;i++){
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}

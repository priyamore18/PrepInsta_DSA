/*
 A B C D
 E F G H
 */

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number";
	cin>> n;
	char alpha = 'A';
	
    for(int i=0;i<=n;++i){
    	
    	for(int j=0;j<=n;++j){
    		
    		
    		cout<<alpha;
    		alpha ++;
    		
		}
		cout<<endl;
	}
}

/*
#include <iostream>

int main() {
    char currentChar = 'A';

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << currentChar++ << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
*/

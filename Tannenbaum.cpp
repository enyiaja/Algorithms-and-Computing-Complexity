#include <iostream>

using namespace std;
int main(){
	int n = 1;
	for(int i=0; i<25; i++){
		for(int j=1;j<25-i;j++)cout<<" ";
		for(int j=1; j<=n; j+=2){
			cout << "*";
		}
			for(int j=1; j<=n; j+=2){
			cout << "*";
		}
		n += 2;
		cout << endl;
	}
	return 0;
}


#include <iostream>

using namespace std;

int fac(int n){
	int ans=1;
	for(int i=n; i>1; i--){
		ans*=i;
	}
	return ans;
}

int main(){
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	y = fac(x);
	cout << x << "! = " << y;
	return 0;
}


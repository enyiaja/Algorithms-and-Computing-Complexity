#include <iostream>

using namespace std;

int factorial(int n){
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	y = factorial(x);
	cout << x << "! = " << y;
	return 0;
}


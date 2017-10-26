#include <iostream>

using namespace std;

int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
}

int fib_loop(int x){
	int a=1, b=1, c;
	if (x == 0)
        return 0;

    if (x == 1)
        return 1;
        
    for(int i =0; i<(x-2); i++){
		c = a+ b;
		a=b;
		b=c;
	}
	return c;
}

int main(){
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	y = fib(x);
	cout << "fib(" << x << ")= " << y;
	return 0;
}


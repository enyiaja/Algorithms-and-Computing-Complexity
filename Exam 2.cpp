#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int sort(int arr[], int n){
	int temp;
	for(int x=0; x<n; x++){
		for(int i=n-1; i>x; i--){
			if(arr[i] < arr[i-1]){
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void f(int a[], int b[], int c[], int m, int n){
	vector <int> d;
	for(int i=0; i<m; i++){
		d.push_back(a[i]);
	}
	for(int j=0; j<n; j++){
		d.push_back(b[j]);
	}
	for(int k=0; k<d.size(); k++){
		c[k] = d[k];
	}
	sort(c, m+n);
}

int main(){
	int m, n;
	cout << "Enter array 'a' size: ";
	cin >> m;
	int a[m];
	for(int i=0; i<m; i++){
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	sort(a,m);
	
	cout << "Enter array 'b' size: ";
	cin >> n;
	int b[n];
	for(int j=0; j<n; j++){
		cout << "b[" << j << "]: ";
		cin >> b[j];
	}
	sort(b,n);
	int c[m+n];
	
	f(a, b, c, m, n);
	cout << endl << endl; 
	for(int i=0; i<m+n; i++){
		cout << c[i] << ", ";
	}
	
	return 0;
}


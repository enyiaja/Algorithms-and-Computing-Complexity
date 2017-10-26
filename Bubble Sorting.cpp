#include <iostream>

using namespace std;

int bubble_sort(int arr[], int n){
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

int main(){
	int n, temp, place;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	
	bubble_sort(arr, n);
	
	for(int i=0; i<n; i++){
		cout << arr[i];
	}
	return 0;
}

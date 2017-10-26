#include <iostream>

using namespace std;

int swap(int arr[], int a, int b){
	int temp = arr[b];
	arr[b] = arr[a];
	arr[a] = temp;
}

int insert_sort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j>0; j--){
			if(arr[j]<arr[i]){
				swap(arr, i, j);
				break;
			}
		}
	}
}

int main(){
	int arr[10] = {5,4,6,8,7,2,1,3,9,10};
	
	cout << "Before sorting: ";
	for(int i=0; i<10; i++)
		cout << arr[i] << ", ";
	insert_sort(arr, 10);
	cout << "\nAfter sorting: ";
	for(int i=0; i<10; i++)
		cout << arr[i] << ", ";
	return 0;
}


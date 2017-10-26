#include <iostream>

using namespace std;

int select(int arr[], int n){
	int i, j, Min_Place, temp;
	for(i=0; i<n-1; i++){
		Min_Place = i;
		for(j=i+1; j<n; j++){
			if(arr[Min_Place]>arr[j])
			Min_Place = j;
		}
		temp = arr[Min_Place];
		arr[Min_Place] = arr[i];
		arr[i] = temp;
	}
}

int main(){
	int arr[6];
	cout << "Enter 6 Integers:\n";
	for(int i=0; i<6; i++){
		cout << i+1 << ": " ;
		cin >> arr[i];
	}
	cout << "\nArray before sorting: ";
	for(int i=0; i<6; i++){
		cout << arr[i] << ", ";
	}
	select(arr, 6);
	cout << "\nArray after sorting : ";
	for(int i=0; i<6; i++){
		cout << arr[i] << ", ";
	}
	
	return 0;
}


#include <iostream>
#include <cstdlib>

using namespace std;

int selection (int arr[], int n){
	int i,j,Min_Place,temp;
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
	int arr[10] = {5,4,6,8,7,2,1,3,9,10};
	
	cout << "Before sorting: ";
	for(int i=0; i<10; i++)
		cout << arr[i] << ", ";
	selection(arr, 10);
	cout << "\nAfter sorting: ";
	for(int i=0; i<10; i++)
		cout << arr[i] << ", ";
	return 0;
}


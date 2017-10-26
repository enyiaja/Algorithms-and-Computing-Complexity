#include <iostream>

using namespace std;

int swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int t[], int l, int r){
	do{
		for(l; l<no; l++){
			if(t[l]> t[pivot])
				break;
		}
		for(r; r>0; r--){
			if(t[r]< t[pivot])
				break;
		}
		swap(t[], l, r);
	}while(l!=r);
}

int main(){
	int no = 8;
	int arr[no] = {1,9,8,2,3,7,6,5};
	
	int pivot = no-1;
	partition(arr[], 0, pivot-1);
	
	for(int i=0; i<no; i++){
		cout << arr[i] << ",  ";
	}
	return 0;
}



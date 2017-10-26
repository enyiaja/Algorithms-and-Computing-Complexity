#include <iostream>
#include <cstdlib>
#include <ctime>
#define how_many 25

using namespace std;

int selection (int arr[], int n){
	int i,j,pmin,temp,count=0;
	count++;
	for(i=0; i<n-1; i++){
		count+=4;
		pmin = i;
		for(j=i+1; j<n; j++){
			count+=3;
			if(arr[pmin]>arr[j]){
				count++;
				pmin = j;
			}	
		}
		count+=3;
		temp = arr[pmin];
		arr[pmin] = arr[i];
		arr[i] = temp;
	}
	return count;
}

int bubble (int arr[], int n){
	int temp, count=0;
	count++;
	for(int x=0; x<n; x++){
		count+=2;
		count++;
		for(int i=n-1; i>x; i--){
			count+=3;
			if(arr[i] < arr[i-1]){
				count+=3;
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return count;
}

int main(){
	srand(time(NULL));
	int tab[how_many], copy[how_many];
	int i, bubble_sort, selection_sort;
	for(i=0; i<how_many; i++) tab[i] = (rand()%100)+1;
	for(i=0; i<how_many; i++) copy[i] = tab[i];
	
	bubble_sort = bubble(copy, how_many);
	for(i=0; i<how_many; i++) copy[i] = tab[i];
	selection_sort = selection(copy, how_many);
	
	cout << "Number of bubble operations is: " << bubble_sort << endl;
	cout << "Number of selection operations is: " << selection_sort << endl;
	system("pause");
	return 0;
}


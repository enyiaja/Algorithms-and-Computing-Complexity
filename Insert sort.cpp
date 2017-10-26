#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int i, j, temp, arr[6] = {2,4,3,1,0,5};
	cout << "Pre-sort :\t";
	for(i=0; i<6; i++){
		cout << arr[i] << "\t";
	}
	
	for(i=0; i<5; i++){
		temp = arr[i+1];
		for(j=i; j>=0; j--){
			if(temp < arr[j])
				arr[j+1] = arr[j];
			else{
				break; 
			}		
		}
		arr[j+1] = temp;
	}
	
	cout << "\nPost-sort:\t";
	for(i=0; i<6; i++){
		cout << arr[i] << "\t";
	}
	
	return 0;
}


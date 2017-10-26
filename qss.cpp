#include <iostream>

using namespace std;

int swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int t[], int l, int r){
	int i=l,j=r-1,piv=t[r];
	while(1)
	{
		while(t[i]<piv)i++;
		while(t[j]>=piv){
		                j--;
		                if(i==j)break;
		                }
		if(i>=j)break;
		swap(t,i,j);
	}
	swap(t,i,r);
	return i;
}

void qs(int t[],int l,int r)
{
	int i;
	if(l<r)
	{
		i=partition(t,l,r);
		qs(t,l,i-1);
		qs(t,i+1,r);
	}
}

int main(){
	int no = 8;
	int arr[8] = {1,9,8,2,3,7,6,5};
	
	qs(arr, 0, 7);
	
	for(int i=0; i<no; i++){
		cout << arr[i] << ",  ";
	}
	return 0;
}



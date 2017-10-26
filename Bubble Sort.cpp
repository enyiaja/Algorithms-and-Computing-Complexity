#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;
int main(){
	//ofstream myfile ("comparison.txt");
	int n, temp;
	//clock_t start,stop;
	srand(time(NULL));
	int arr[10];
	
	for(n=0;n<=10;n=n+1)
    {
		for(int i=0; i<n; i++){
			arr[i] = (rand()%10)+1;
		}
		//start=clock();
		for(int x=0; x<n; x++){
			for(int i=n-1; i>x; i--){
				if(arr[i] < arr[i-1]){
					temp = arr[i-1];
					arr[i-1] = arr[i];
					arr[i] = temp;
				}
			}
		}
		//stop=clock();
		//if(myfile.is_open()){
			//myfile << "\nsize:"<<n<<"time:"<<stop-start;
			//cout<<"\nsize:"<<n<<" time:"<<stop-start;
			//cout << endl;
			
		//}
    }
    //myfile.close();
	return 0;
}


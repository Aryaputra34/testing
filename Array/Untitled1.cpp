#include <iostream>
using namespace std;


int main(){
	
	int array[5][5] = {
	1,2,3,4,5,
	6,7,8,9,10,
	11,12,13,14,15,
	16,17,18,19,20,
	21,23,24,25};
	
	for (int i = 2 ; i <=2 ; i++ ){
		for(int j = 0; j < 5; j++){
		 cout<<array[i][j]<<" ";
		}
	}
	
	return 0;
}

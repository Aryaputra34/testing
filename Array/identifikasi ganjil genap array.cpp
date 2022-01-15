#include <iostream>
using namespace std;

int main(){
	int nilai[10] = {1,2,3,4,5,6,7,8,9,10} ;
	int jarak;
	//jarak dimulai dari 0 karena pada index 0 adalah kamar pertama
	for(int jarak = 0; jarak<=9; jarak++){
		
		if(nilai[jarak] % 2 == 0){
			
			cout<<"Kamar "<<nilai[jarak]<<"(genap = "<<nilai[jarak]<<") = "<<nilai[jarak]/2<<endl;
			
		}else if(nilai[jarak] % 2 != 0){
			
			cout<<"Kamar "<<nilai[jarak]<<"(ganjil = "<<nilai[jarak]<<") = "<<nilai[jarak] * 3<<endl;
		}

	}
	
	return 0;
}

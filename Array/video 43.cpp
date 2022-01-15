#include <iostream>
#include <array>
using namespace std;

int main(){
	//membuat array dengan standard library
	//array< int, jumlah array> nama array	
	//int itu tipe data nya 
	
	array < int , 5> nilai;
	
	for(int i = 0; i <= 4; i++){
		nilai[i] = i;
		cout<<"Nilai  ["<<i<<"] = "<<nilai[i];
		cout<<" address : "<< &nilai[i]<<endl;
	}
	
	//Ukuran array
	cout<<"\nukuran array = "<< nilai.size()<<endl;
	//address awal dari array
	cout<<"Address awal = "<<nilai.begin()<<endl;
	//address akhir dari array
	cout<<"Address akhir = "<<nilai.end()<<endl;
	//nilai pada index
	cout<<"Nilai pada index ke 2 = "<<nilai.at(2)<<endl;
	
	cin.get();
	return 0;
}






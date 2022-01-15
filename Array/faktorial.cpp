#include <iostream>
using namespace std;

long int faktorial(int a);

int main()
{
	int a, hasil;
	cout<<"masukkan angka : ";cin>>a;
	hasil = faktorial(a);
	
	cout<<hasil;
	
	
	return 0;
}

long int faktorial(int a){
	if (a == 1){
		return a;
	}
	return (a * faktorial(a-1));
}

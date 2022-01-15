#include <iostream>
using namespace std;

perkalian(int a, int b){
	int c = a * b;
	return c;
	
}

void perkaliann(double d, double e){
	cout<<"\nini dengan void = "<<d * e;
}



int main(){
	int a = 2;
	int b = 3;
	double d = 3;
	double e = 2;
	int hasil = perkalian(a,b);
	
	cout<<hasil;
	perkaliann(d,e);
	
	cin.get();
	return 0;
}

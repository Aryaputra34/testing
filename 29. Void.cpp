#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"Ini adalah bilangan fibonacci"<<endl;
	int n1 = 0,n2 = 1,nexterm;

	for(int i=0; i<10; i++){
		cout<<n1<<" ";
		nexterm = n1 + n2;
		n1 = n2;
		n2 = nexterm;
	}
	cin.get();
	return 0;
}

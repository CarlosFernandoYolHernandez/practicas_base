#include <iostream>
using namespace std;
int main(){
	const int tarreglo=5;
	int numbers[tarreglo];
	for(int i=0;i<tarreglo;i++){
		cout<<"ingresa un numero"<<i+1<<":";
		cin>>numbers[i];
		
	}
	cout<<"los numeros ingresados son:";
	for(int i=0;i<tarreglo;i++){
		cout<<numbers[i]<<",";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int num[5];
	string name[3];
	
	 num[0]=10;
	 num[1]=20;
	num[2]=30;
 num[3]=40;
	 num[4]=50;
	
	 name[0]="fernando";
	 name[1]="Victor";
	name[2]="Alex";
	
	for(int i=0;i<=5; i++){
		cout<<"Numeros:"<<i<<":"<<num[i]<<endl;
	}
	for(int e=0;e<=3;e++){
		cout<<"Nombres del arreglo:"<<name[e]<<endl;
	}
	return 0;
} 

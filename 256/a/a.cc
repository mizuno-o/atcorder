#include<iostream>
using namespace std;

int main(){

	int a;
	cin >> a;
	int b = 1;
	if(a==0){
		b = 1;
	}else{
		for(int i=0;i<a;i++){
			b = b*2;
		}	
	}
	cout << b << endl;	
	return 0;
}

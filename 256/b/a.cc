#include<iostream>
#include<vector>
using namespace std;

int main(){

	int N;
	cin >> N;
	vector<int > a(N);
	for(int i=0;i<N;i++){
		int aa;
		cin >> aa;
		a[i] = aa;
		for(int j=0;j<i;j++){
			a[j] += aa;
		}
	}

	int count = 0;	
	for(int i=0;i<N;i++){
		if(a[i]>=4){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

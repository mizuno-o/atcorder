#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

	vector<vector<int >> in(3,vector<int >(3));
	vector<int > h(3);
	vector<int > w(3);
	int count = 0;
	for(int i=0;i<3;i++){
		int a;
		cin >> a;
		h[i] = a;	
	}
	for(int i=0;i<3;i++){
		int b;
		cin >> b;
		w[i] = b;	
	}
	set<vector<vector<int >>> st;
	for(int i=1;i<=28;i++){
		for(int j=1;j<=28;j++){
			for(int k=1;k<=28;k++){
				for(int l=1;l<=28;l++){
					in[0][0] = i;
					in[0][1] = j;
					in[1][0] = k;
					in[1][1] = l;
					in[0][2] = w[0]-i-j;
					in[1][2] = w[1]-k-l;
					in[2][0] = h[0]-i-k;
					in[2][1] = h[1]-j-l;
				
					if(	 	(in[0][2]>0)&&
							(in[1][2]>0)&&
							(in[2][0]>0)&&
							(in[2][1]>0)){

						if((w[2]-in[2][0]-in[2][1])==(h[2]-in[0][2]-in[1][2])){
							in[2][2] = w[2] - in[2][0] - in[2][1];
							if(in[2][2]>0){
								st.insert(in);
							}
						}
					}
				}
			}
		}
	}	

	cout << st.size() << endl;
	return 0;
}

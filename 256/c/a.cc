#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	vector<vector<int >> vec(3,vector<int >(3));
	vector<vector<int >> vec2(2,vector<int >(2));
	vector<int > h(3);
	vector<int > w(3);
	for(int i=0;i<3;i++){
		int a;
		cin >> a;
		h[i] = a;
	}
	for(int j=0;j<3;j++){
		int b;
		cin >> b;
		w[j] = b;
	}

	//ok
	/*for(int j=0;j<3;j++){
		cout << h[j] << " " << w[j] << endl;
	}*/

	//sort(h.begin(),h.end());
	//sort(w.begin(),w.end());
	//cout << h[0] << " " << h[1] << " " << h[2] <<endl;

	vector<int > hc(3);
	vector<int > wc(3);
	for(int i=0;i<3;i++){
		if(h[i]==3){
			hc[i] = 1;
		}else{
			hc[i] = (h[i]-3)*3;	
		}
		if(w[i]==3){
			wc[i] = 1;
		}else{
			wc[i] = (w[i]-3)*3;	
		}
	}
	
	vector<int > h2(2);
	vector<int > w2(2);


	int count = 0;
	int error = 0;

	for(int k=1;k<=h[0]-2;k++){
		vec.at(0).at(0) = k;
		//if(h[0]-k!=2){
			for(int l=1;l<=(h[0]-k-1);l++){
				//cout << k << " " << l <<" " <<  h[0] - k - l << "youso"<< endl;
				vec.at(1).at(0) = l;
				vec.at(2).at(0) = h[0]-k-l;
				if((h[0] - k - l)<=0){
					error++;
				}
				for(int m=1;m<=w[0]-2;m++){
					vec.at(0).at(1) = m;
					vec.at(0).at(2) = w[0] - m - k;
					if((m<=0)||(vec.at(0).at(2)<=0)){
						error++;
					}
					h2[0] = h[1] - m;
					h2[1] = h[2] - vec.at(0).at(2);
					//cout << "kokodayo " << h2[0] << " " << h2[1] << endl;
					if((h2[0]<=0)||(h2[1]<=0)){
						error++;
					}
					w2[0] = w[1] - l;
					w2[1] = w[2] - vec.at(2).at(0);
					//cout << "kokodayo " << w2[0] << " " << w2[1] << endl;
					if((w2[0]<=0)||(w2[1]<=0)){
						error++;
					}
					for(int k2=1;k2<=h2[0]-1;k2++){
						vec2.at(0).at(0) = k2;
						vec.at(1).at(1) = k2;
						vec2.at(1).at(0) = h2[0] - k2;
						vec.at(2).at(1) = h2[0] - k2;
						vec2.at(0).at(1) = w2[0] - k2;
						vec.at(1).at(2) = w2[0] - k2;
						if((k2<=0)||(h2[0]-k2<=0)||(w2[0]-k2<=0)){
							error++;	
						}	
						//cout << "koko" << vec2.at(0).at(1) << " " << vec2.at(1).at(0) << endl;
					}
				}
			}
		//}else{
	//		vec.at(1).at(0) = 
		//}

		int plus = 0;
		if((h2[1] - vec2.at(0).at(1))==(w2[1] - vec2.at(1).at(0))){
			vec2.at(1).at(1) = h2[1] - vec2.at(0).at(1);
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if(vec.at(j).at(i)>0){
						plus++;
					}
				}
			}
			//if((plus == 9)&&(error==0)){
				count++;
				
				for(int i=0;i<3;i++){
					for(int j=0;j<3;j++){
						cout << vec.at(j).at(i) << "\t";
					}
					cout << endl; 
				}
				cout << endl; 
				
			//}
			plus = 0;
		}
		error = 0;
	}

	cout << count << endl;

	return 0;
}


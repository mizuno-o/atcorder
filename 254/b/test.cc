#include<iostream>
#include<vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int > x;

  for(int i=0;i<n;i++){
    x.push_back(1);
    if(i>1){
      vector<int > x2(i);
      for(int j=0;j<i-1;j++){
        x2[j] = x[j]+x[j+1]; 
      }
      for(int j=0;j<i-1;j++){
        x[j+1] = x2[j];
      }
    }
    for(int k=0;k<x.size();k++){
      if(k==0){
        cout << x[k];
      }else{
        cout << " " << x[k];
      }
    }
    cout << endl;
  }
  return 0;
}

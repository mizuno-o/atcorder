#include<iostream>
#include<vector>
using namespace std;

int main(){

  int r,s;
  cin >> r >> s;
  vector<vector<int>> a(2,vector<int>(2));
  int b;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      cin >> b;
      a[i][j] = b;
    }
  }

  cout << a[r-1][s-1] << endl;
  return 0;
}

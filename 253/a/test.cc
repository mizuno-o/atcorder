#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  int a,b,c;
  vector<int > v(3);
  cin >> a >> b >> c;
  v[0] = a;
  v[1] = b;
  v[2] = c;
  sort(v.begin(),v.end());
  if(b == v[1]){
    cout << "Yes" <<endl;
  }else{
    cout << "No" <<endl;
  }
  return 0;
}

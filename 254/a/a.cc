#include<iostream>
#include<string>
using namespace std;

int main(){

  string n;
  string n2;
  cin >> n;
  n2 = n.substr(n.size()-2);
  cout << n2 <<endl;
  return 0;
}

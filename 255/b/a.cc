#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
 
  vector<int > a(k);
  vector<vector<double >> pos(2,vector<double>(n));
  for(int i=0;i<k;i++){
    int ai;
    cin >> ai;
    a.at(i) = ai-1;
  }
  for(int i=0;i<n;i++){
    double x,y;
    cin >> x >> y;
    pos.at(0).at(i) = x;
    pos.at(1).at(i) = y;
  }

  vector<double >  dis_max(k);
  for(int i=0;i<k;i++){
    vector<double > dis(n);
    for(int j=0;j<n;j++){
      double d =  sqrt ( pow(abs(pos[0][a[i]]-pos[0][j]),2) + pow(abs(pos[1][a[i]]-pos[1][j]),2) );
      dis[j] = d;
    }
    sort(dis.begin(),dis.end());
    dis_max[i] = dis[n-1];
  }
  sort(dis_max.begin(),dis_max.end());
  cout << setprecision(10) <<  dis_max[0] << endl;
  return 0;
}

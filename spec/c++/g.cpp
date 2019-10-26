#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
  freopen("g.in","r",stdin);
  freopen("g.out","w",stdout);
  int n;
  cin >> n;
  vector <int> d(n);
  for(int i =0 ; i < n ; i++) cin >> d[i];
  map<int,int> g;
  for(int i : 0; i < d.length(); i++)
    g[d[i]]++
  for (int i : 0; i < d.length(); i++)
    if (g[v[i]) ==1)
      cout<<i<<endl;
}

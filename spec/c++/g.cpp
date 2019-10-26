#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("j.in", "r", stdin);
    freopen("j.out", "w", stdout);
    int n;
    map <int,int> g;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i : v)
        g[i]++;
    for (int i: v){
        if (g[i] == 1)
        {
            cout<<i << " ";
        }
    }

}

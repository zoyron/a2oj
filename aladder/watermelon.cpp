#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int w;
  cin >> w;
  if(!(w&1)){
    if(w == 2)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



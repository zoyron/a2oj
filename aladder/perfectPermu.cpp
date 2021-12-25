#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n;
  cin >> n;
  if(n&1)
    cout << -1 << endl;
  else{
    for(int i = 1;i <= n;i++){
      if(i&1)
        cout << i+1 << " ";
      else
        cout << i-1 << " ";
    }
  }
  cout << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



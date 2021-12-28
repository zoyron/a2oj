#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

void solve(){
  int n,k,x, cnt = 0;
  cin >> n >> k;
  k = 5-k;
  for(int i = 0;i<n;i++){
    cin >> x;
    if(x <= k)
      cnt++;
  }
  cout << cnt/3 << endl;
}

int32_t main(){
  int t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
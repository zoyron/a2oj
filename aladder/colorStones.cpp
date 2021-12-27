#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  string s, t;
  cin >> s >> t;
  int j = 0;
  for(int i = 0;i < t.length() ; i++){
    if(t[i] == s[j])
      j++;
  }
  cout << j+1 << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



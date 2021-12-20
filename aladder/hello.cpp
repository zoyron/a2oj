#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

void solve(){
  string str, ans = "hello";
  int j = 0;
  cin >> str;
  for(int i = 0;i < str.length();i++){
    if(str[i] == ans[j])
      j++;
  }
  if(j == 5)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int32_t main(){
  int t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

void solve(){
  string str;
  cin >> str;
  int n = str.length();
  if(n>10){
    cout << str[0] << n-2 << str[n-1] << endl;
  }
  else
    cout << str << endl;
}

int32_t main(){
  int t = 1;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
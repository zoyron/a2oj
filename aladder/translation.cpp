#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;


bool translate(string s, string t){
  if(s.length()!=t.length())
    return false;
  int n = s.length();
  for(int i = 0; i < n;i++){
    if(s[i]!=t[n-1-i])
      return false;
  }
  return true;
}


void solve(){
  string s, t;
  cin >> s >> t;
  if(translate(s,t))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



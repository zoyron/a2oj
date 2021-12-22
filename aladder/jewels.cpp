#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  string s,j;
  cin >> s >> j;
  int cnt = 0;
  for(int i = 0;i < j.length();i++){
    for(int k = 0;k < s.length() ; k++){
      if(j[i] == s[k]){
        cnt++;
        break;  
      }
    }
  }
  cout << cnt << endl;
}

int32_t main(){
  int t = 1;
  cin >> t;
  while(t--)
    solve();
  return 0;
}



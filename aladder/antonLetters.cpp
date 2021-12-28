#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  string s;
  int arr[26]  = {0}, cnt = 0;
  getline(cin, s);
  for(int i = 0;i < s.length();i++){
    if(s[i] >= 'a' && s[i] <= 'z')
      arr[s[i] - 'a']++;
  }
  for(int i = 0; i < 26;i++)
    if(arr[i])
      cnt++;
  cout << cnt << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



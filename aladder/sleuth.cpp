#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

char lastChar(string s){
  for(int i = s.length() - 1;i>=0;i--){
    if(((s[i] >= 'a') && (s[i] <= 'z' )) || ((s[i] >= 'A') && (s[i] <= 'Z')))
      return s[i];
  }
  return ' ';
}

bool checkVowel(char c){
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
    return true;
  return false;
}

void solve(){
  string s;
  getline(cin, s);
  char c = lastChar(s);
  if(checkVowel(c))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int32_t main(){
  int t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
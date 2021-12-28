#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int a,b,aWin = 0, bWin = 0, draw = 0, a1, b1;
  cin >> a >> b;
  for(int i = 1;i <= 6;i++){
    a1 = abs(i-a), b1 = abs(i-b);
    if(a1 < b1)
      aWin++;
    else if(b1 < a1)
      bWin++;
    else
      draw++;
  }
  cout << aWin << " " << draw << " " << bWin << endl;
}

int32_t main(){
  int t = 1;
  cin >> t;
  while(t--)
    solve();
  return 0;
}



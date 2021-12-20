#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

bool luckyNo(int n){
  while(n){
    int dig = n%10;
    if((dig!=7) && (dig!=4)){
      return false;
    }
    n/=10;
  }
  return true;
}

void solve(){
  int n;
  cin >> n;
  bool ln = false;
  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      ln = ln || luckyNo(i);
    }
  }
  if(ln)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;


bool checkDig(int x, int k){
  int dig;
  while(x){
    dig = x%10;
    if(dig == 4 || dig == 7)
      k--;
    x/=10;
  }
  return k>=0;
}


void solve(){
  int n, cnt  = 0, k, x;
  cin >> n >> k;
  for(int i = 1;i <=n ; i++){
    cin >> x;
    if(checkDig(x, k))
      cnt++;
  }
  cout << cnt << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



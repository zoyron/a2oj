#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n,a,b,c,sumA = 0, sumB = 0, sumC = 0;
  cin >> n;
  while(n--){
    cin >> a >> b>> c;
    sumA+=a, sumB+=b, sumC+=c;
  }
  if(sumA == 0 && sumB == 0 && sumC == 0)
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



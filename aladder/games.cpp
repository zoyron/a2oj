#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n], b[n];
  for(int i = 0;i < n ;i++)
    cin >> a[i] >> b[i];
  int cnt = 0;
  for(int i = 0; i < n;i++){
    for(int j = 0; j < n ;j++)
      if(a[i] == b[j])
        cnt++;
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



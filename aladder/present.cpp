#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n;
  cin >> n;
  int arr[n+1], arr1[n+1];
  arr[0]= 0;
  for(int i = 1;i<=n;i++)
    cin >> arr[i];
  for(int i = 1;i <= n;i++)
    arr1[arr[i]] = i;
  for(int i = 1;i <= n  ;i++)
    cout << arr1[i] << " ";
  cout << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



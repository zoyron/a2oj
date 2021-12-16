#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

void solve(){
  int n, x;
  cin >> n;
  if(n == 1){
    cin >> x;
    cout << 1 << endl;
  }
  else{
    int arr[n], sum1 = 0, sum2 = 0;
    for(int i = 0;i<n;i++){
      cin >> arr[i];
      sum1+=arr[i];
    }
    sort(arr, arr+n);
    for(int i  =  n-1 ; i>=0;i--){
      sum2+=arr[i];
      if(sum2 > (sum1 - sum2)){
        cout << n - i << endl;
        break;
      }
    }
  }
}

int32_t main(){
  int t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
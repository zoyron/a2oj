#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n, ind1, ind2, min;
  cin >> n;
  int arr[n];
  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }
  min = abs(arr[0] - arr[n-1]);
  ind1 = n, ind2 = 1;
  for(int i = 0;i < n-1;i++){
    if(abs(arr[i] - arr[i+1]) < min){
      min = abs(arr[i] - arr[i+1]);
      ind1 = i+1;
      ind2 = i+2;
    }
  }
  cout << ind1 << " " << ind2 << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



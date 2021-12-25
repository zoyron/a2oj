#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n, max = INT_MIN, min = INT_MAX, maxInd, minInd;
  cin >> n;
  int arr[n];
  for(int i = 0;i<n;i++)
    cin >> arr[i];
  for(int i = 0;i <n ;i++){
    if(arr[i]>max){
      max = arr[i];
      maxInd = i;
    }
  }

  for(int i = n-1;i>=0;i--){
      if(arr[i] < min){
      min = arr[i];
      minInd = i;
    }
  }

  if(maxInd >= minInd){
    cout << (maxInd - 0) + (n - 1 - minInd) - 1 << endl;
  }
  else
    cout << (maxInd - 0) + (n - 1 - minInd) << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}

#include <bits/stdc++.h>
#define     mod int(1e9) + 7
#define     endl '\n'

using namespace std;

void solve(){
  int arr[5][5], i, j;
  for(int i = 0;i<5;i++)
    for(int j = 0; j<5;j++)
      cin >> arr[i][j];
  for(i = 0;i<5;i++){
    int flag = 0;
    for(j = 0;j<5;j++){
      if(arr[i][j] == 1){
        flag = 1;
        break;
      }
    }
    if(flag)
      break;
  }
  i++, j++;
  cout << abs(3-i) + abs(3-j) << endl;
}

int32_t main(){
  int t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
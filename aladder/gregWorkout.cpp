#include <bits/stdc++.h>
#define     endl '\n'
#define     mod int(1e9) + 7
using namespace std;

void solve(){
  int n, chest = 0, biceps = 0, back = 0, x;
  cin >>  n;
  for(int i = 0;i<n;i++){
    cin >> x;
    if(i%3 == 0)
      chest+=x;
    else if(i%3 == 1)
      biceps+=x;
    else
      back+=x;
  }
  if(back > biceps && back>chest)
    cout << "back\n";
  else if(biceps > back && biceps > chest)
    cout << "biceps\n";
  else
    cout << "chest\n";
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--)
    solve();
  return 0;
}



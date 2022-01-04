#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,st,n) for(int i=st;i<n;i++)
#define nline cout<<endl;
#define mod 1000000007
#define maxN 1000001
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define print_arr(arr) for(auto i:arr)cout<<i<<' ';
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}
     
void solve(){
    int n;
    cin>>n;
    vi a,b,c;
    loop(i,1,n+1){
        int x;
        cin>>x;
        if(x==1){
            a.pb(i);
        }else if(x==2){
            b.pb(i);
        }else if(x==3){
            c.pb(i);
        }
    }
    vvi ans;
    loop(i,0,min(a.size(),min(b.size(),c.size()))){
        ans.push_back({a[i],b[i],c[i]});
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<' ';
        }
        nline
    }

}
     
int main(){
    solve();
    return 0;
}

 #include <bits/stdc++.h>
 using namespace std;
 void printTable(int n, int k){
     for(int i = 1;i<=n;i++){
         for(int j = 1;j<=n;j++){
             if(i == j)
                cout << k <<  " ";
            else
                cout << 0 <<  " ";
         }
         cout << endl;
     }
 }
 int main(){
     int n, k;
     cin >> n >> k;
     printTable(n,k);
     return 0;
 }

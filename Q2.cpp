#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
void solve(){
     ll n,i,j,count=0;
     cin>>n; 
     for(i=1;i<=n;i++){
         int flag=0;
         if(n%i==0){
             string s=to_string(i);
             ll y=s.length();
             for(j=0;j<=y/2;j++){
                 if(s[j]!=s[y-1-j]){
                     flag=1;
                     break;
                 }
             }
             if(flag==0){
                 count++;
             }
         }
     }
     cout<<count;
}
int main(){
    // auto start = high_resolution_clock::now();
    // #ifdef ONLINE_JUDGE
    // freopen("ip.txt","r",stdin);
    // freopen("op.txt","w",stdout);
    // #endif
    FastIO;
    ll t,i=1;
    cin>>t;
    while(t--){
    cout<<"Case #"<<i<<": ";
    solve();
    cout<<"\n";
    i++;
    }
    //  auto stop = high_resolution_clock::now();
    //   auto duration = duration_cast<microseconds>(stop - start);cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;
    return 0;
}
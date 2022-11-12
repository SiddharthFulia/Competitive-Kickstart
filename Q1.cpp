#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
void solve(){
     ll r,a,b,i,j=1,flag=0;
     ld x=0;
     cin>>r>>a>>b;
     while(flag==0){
         if(floor(pow(a,j)*pow(r,1)/pow(b,j))>0){
             x+=pow(floor(pow(a,j)*pow(r,1)/pow(b,j)),2);
             x+=pow(floor(pow(a,j+1)*pow(r,1)/pow(b,j)),2);
             j+=1;
         }
         else{
             flag=1;
         }
     }
     x=2*acos(0)*(r*r+a*a*r*r+x);
     cout<<fixed<<setprecision(6)<<x;
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
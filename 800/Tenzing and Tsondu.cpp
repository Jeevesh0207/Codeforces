Question Link :- (" https://codeforces.com/problemset/problem/1842/A ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();


void Rabbit(){
   ll n,m;
   cin>>n>>m;
   ll Tsondu=0,Tenzing=0;
   for(ll i=0;i<n;i++){
     ll x;
     cin>>x;
     Tsondu+=x;
   }
   for(ll i=0;i<m;i++){
     ll x;
     cin>>x;
     Tenzing+=x;
   }
   if(Tsondu>Tenzing) cout<<"Tsondu"<<endl;
   else if(Tenzing>Tsondu) cout<<"Tenzing"<<endl;
   else cout<<"Draw"<<endl;
}

 
int main(){
    FastinOut;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    TimeStart;
    ll T=1;
    cin>>T;
    while(T--){
        Rabbit();
    }
    TimeEnd; 
    Time;
    #ifndef ONLINE_JUDGE
        std::cerr << "Time taken : " << duration / 1e9 << "s" << std::endl;     
    #endif
    return 0;
}

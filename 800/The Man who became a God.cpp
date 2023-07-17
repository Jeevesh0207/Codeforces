Question Link :- (" https://codeforces.com/problemset/problem/1847/A ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();


void Rabbit(){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(auto &i:v) cin>>i;
  ll ans=0;
  vector<ll>a;
  for(ll i=0;i<n-1;i++){
    a.push_back(abs(v[i]-v[i+1]));
    ans+=abs(v[i]-v[i+1]);
  }
  sort(a.rbegin(),a.rend());
  for(ll i=0;i<k-1;i++){
    ans-=a[i];
  }
  cout<<ans<<endl;
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

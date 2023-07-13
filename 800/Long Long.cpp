Question Link :- (" https://codeforces.com/problemset/problem/1843/B ")

/*

-1 7 -4 -2 5 -8
   |
Neg=1
(Neg) cnt=1 Neg=0
-1 7 -4 -2 5 -8
           |
(Neg) cnt=2 Neg=0 

(Neg) cnt=3

So, Ans = 3
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();



void Rabbit(){
  ll n;
  cin>>n;
  ll sum=0,Neg=0,cnt=0;
  for(ll i=0;i<n;i++){
     ll x;
     cin>>x;
     if(x>0){
        if(Neg) cnt++;
        Neg=0;
     }
     else if(x<0) Neg++;
     sum+=abs(x);
  }
  if(Neg) cnt++;
  cout<<sum<<" "<<cnt<<endl;
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

Question Link :- (" https://codeforces.com/problemset/problem/1846/B ")

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastinOut ios::sync_with_stdio(false); cin.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time  long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();




void Rabbit(){
  char x1,x2,x3,x4,x5,x6,x7,x8,x9;
  cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9;
  if(x1==x2 && x2==x3 && x1!='.') cout<<x1<<endl;
  else if(x4==x5 && x5==x6 && x4!='.') cout<<x4<<endl;
  else if(x7==x8 && x8==x9 && x7!='.') cout<<x7<<endl;
  else if(x1==x4 && x4==x7 && x1!='.') cout<<x1<<endl;
  else if(x2==x5 && x5==x8 && x2!='.') cout<<x2<<endl;
  else if(x3==x6 && x6==x9 && x3!='.') cout<<x3<<endl;
  else if(x1==x5 && x5==x9 && x1!='.') cout<<x1<<endl;
  else if(x3==x5 && x5==x7 && x3!='.') cout<<x3<<endl;
  else cout<<"DRAW"<<endl;
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

#include <bits/stdc++.h>
using namespace std;
#define FastinOut              \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);
#define TimeStart auto start = chrono::high_resolution_clock::now();
#define TimeEnd auto stop = chrono::high_resolution_clock::now();
#define Time long double duration = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();

//!-------------------Shortcut-------------------//

#define ll long long int
#define ull unsigned long long
#define ld long double

typedef vector<ll> vll;
typedef vector<int> vii;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef map<ll, ll> mll;
typedef map<int, int> mii;
typedef set<ll> sl;
typedef set<int> si;
typedef set<char> sc;

#define FOR(i, S, N) for (ll i = S; i < N; i++)
#define RFOR(i, S, N) for (ll i = N - 1; i >= S; i--)
#define FORA(i, name) for (auto &i : name)
#define PB push_back
#define EB emplace_back // Faster than PB
#define FF first
#define SS second
#define All(A) sort((A).begin(), (A).end())
#define RAll(A) sort((A).rbegin(), (A).rend())
#define read(type) readInt<type>()
#define Print(x) cout << x << endl;

#define PI 3.1415926535897932384626433832795
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld NINF = 1e-9;
ull Fact[10];

//!---------------------------------------------//

//!-------------------MOD Solver-------------------//

template <typename T>
T MUL(T a, T b, T c) { return ((a % c) * (b % c)) % c; }
template <typename T>
T ADD(T a, T b, T c) { return ((a % c) + (b % c)) % c; }
template <typename T>
T SUB(T a, T b, T c) { return (((a % c) - (b % c)) % c + c) % c; }
template <typename T>
T DIV(T a, T b, T c) { return (a % c) * power(b, c - 2, c) % c; }
template <typename T>
T gcd(T a, T b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
  {
    return b;
  }
  return a;
}
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
template <typename T>
void Pre_Fact_Cal(T n, T c = MOD)
{
  Fact[0] = 1;
  for (ll i = 1; i <= n; i++)
    Fact[i] = (Fact[i - 1] * i) % c;
}
template <typename T>
T nCr(T a, T b, T c) { MUL(MUL(Fact[b], Fact[a - b], c), Fact[a], c); }
template <typename T>
T Prime(T a)
{
  if (a == 1)
    return 0;
  for (int i = 2; i <= round(sqrt(a)); ++i)
    if (a % i == 0)
      return 0;
  return 1;
}

//!---------------------------------------------//

//!-------------------Function-------------------//

ll power(ll a, ll b, ll c = MOD)
{
  ll result = 1;
  while (b > 0)
  {
    if (b % 2)
      result = MUL(result, a, c);
    a = MUL(a, a, c);
    b = b >> 1;
  }
  return result;
}

//!---------------------------------------------//


void Rabbit()
{
  ll n;
  cin>>n;
  mll(mp);
  vll(v)(n),(dp)(n+2);
  FOR(i,0,n){
    cin>>v[i];
    mp[v[i]]++;
  }
  FORA(i,mp){
    FOR(j,1,n+1){
      if(j*i.FF>n) break;
      dp[j*i.FF]+=i.SS;
    }
  }
  ll ans=0;
  FORA(i,dp){
    ans=max(ans,i);
  }
  Print(ans)
}

int32_t main()
{
  FastinOut;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  TimeStart;
  ll T = 1;
  cin >> T;
  while (T--)
  {
    Rabbit();
  }
  TimeEnd;
  Time;
#ifndef ONLINE_JUDGE
  cerr << "Time taken : " << duration / 1e9 << "s" << endl;
#endif
  return 0;
}

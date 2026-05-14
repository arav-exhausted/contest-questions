#include <bits/stdc++.h>
using namespace std;

// ================= TYPES =================
using ll = long long;
using ld = long double;

// ================= FAST IO =================
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

// ================= SHORTCUTS =================
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()


void inputv(vector<ll>&v,ll n){
    for(auto &a:v){
        cin>>a;
    }
}

void printv(vector<ll>&v){
    for(auto &c:v){
        cout<<c<<" ";
    }
}


// ================= OUTPUT =================
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << '\n'

// ================= CONSTANTS =================
const ll INF = 1e18;
const int MOD = 1e9+7;

// ================= DEBUG =================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// ================= MATH =================
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a * b) % MOD; }

ll mod_pow(ll a, ll b) {
    ll res = 1;
    while(b){
        if(b & 1) res = mod_mul(res, a);
        a = mod_mul(a, a);
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll a) { return mod_pow(a, MOD - 2); }

// ================= BIT TRICKS =================
int setbits(ll x) { return __builtin_popcountll(x); }
int highest_bit(ll x) { return x ? 63 - __builtin_clzll(x) : -1; }
int lowest_bit(ll x) { return x ? __builtin_ctzll(x) : -1; }

// ================= BINARY SEARCH =================
int lb(vector<int> &a, int x) {
    return lower_bound(all(a), x) - a.begin();
}
int ub(vector<int> &a, int x) {
    return upper_bound(all(a), x) - a.begin();
}

// ================= PREFIX SUM =================
vector<ll> prefix(vector<ll> &a) {
    int n = a.size();
    vector<ll> p(n+1, 0);
    for(int i = 0; i < n; i++)
        p[i+1] = p[i] + a[i];
    return p;
}

// ================= GRAPH =================
const int N = 2e5 + 5;
vector<int> adj[N];
bool vis[N];

void dfs(int node) {
    vis[node] = true;
    for(auto &child : adj[node]) {
        if(!vis[child]) dfs(child);
    }
}

// ================= SIEVE (use when needed) =================
vector<bool> sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= n; i++) {
        if(prime[i]) {
            for(int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return prime;
}

// ================= SOLVE =================
void solve() {
    int n;
    cin >> n;

    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
            ans++;
        }
        else{
            ans++;
            break;
        }
    }

    cout<<ans<<endl;
    

    // 🔥 write logic here

}

// ================= MAIN =================
int main() {
    fastio();

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
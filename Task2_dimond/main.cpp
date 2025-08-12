#include<bits/stdc++.h>
using namespace std;
// Header files, namespaces, 
 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
//*(s.find_by_order(i)) returns the ith(small) iterator
//s.order_of_key(x) returns how many smaller then x
 
#define ll                  long long int
#define all(v)              ((v).begin()), ((v).end())
#define sz(v)               ((int)((v).size()))
#define pb                  push_back
typedef pair<int,int>       iPair;
typedef pair<ll,ll>         lPair;
#define INF                 (ll)1e18+7
#define MOD                 (ll)(998244353)
#define veclin(name, len) vector<ll> name(len); for (auto &_ : name) cin >> _;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;

int n;

void draw (int idx,int order){
    if(idx<1&&order==0)return;

    for (int i = 0; i < (n-idx)/2; ++i)cout<<"*";
    for (int i = 0; i < idx; ++i)cout<<" ";
    for (int i = 0; i < (n-idx)/2; ++i)cout<<"*";
    cout<<endl;

    if(idx>=n-2)order=0;
    if(order)draw(idx+2,order);
    else draw(idx-2,order);

}
    
// ###another solution;
// void draw (int idx,int order){
//     if(idx<1){
//         for (int i = 0; i < n; ++i)cout<<"*";
//         cout<<endl;
//         if(order==0)return;
//     }
//     else{
//         for (int i = 0; i < (n-idx)/2; ++i)cout<<"*";
//         for (int i = 0; i < idx; ++i)cout<<" ";
//         for (int i = 0; i < (n-idx)/2; ++i)cout<<"*";
//         cout<<endl;}

//     if(idx>=n-2)order=0;
//     if(order)draw(idx+2,order);
//     else draw(idx-2,order);

// }
// draw(-1,1)
    
    

signed main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);cout.tie(0);
    // ll t; cin >> t; while(t--)
    cin>>n;
    for (int i = 0; i < n; ++i)cout<<"*";
    cout<<endl;
    draw(1,1);
    for (int i = 0; i < n; ++i)cout<<"*";

    return 0;
}



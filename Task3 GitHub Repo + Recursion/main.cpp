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


int n,numGenerated=0;
vector <string> activities={"swimming","running","football"};
void solve(vector<int>cur){
    if(cur.size()==n){
        numGenerated++;
        for(int act:cur)cout<<activities[act]<<" ";
        cout<<endl;
        return;
    }

    vector<int>curwithswim=cur;
    vector<int>curwithsrun=cur;
    vector<int>curwithfootball=cur;
    curwithswim.push_back(0);
    curwithsrun.push_back(1);
    curwithfootball.push_back(2);

    if(cur.size()==0){
        solve(curwithswim);
        solve(curwithsrun);
        solve(curwithfootball);
        return;
    }
    if(cur.back()!=0)
        solve(curwithswim);
    if(cur.back()!=1)
        solve(curwithsrun);

    if(cur.back()!=2)
        solve(curwithfootball);


}
signed main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);cout.tie(0);
    // ll t; cin >> t; while(t--)
    cin>>n;
    solve({});
    cout<<numGenerated;
    return 0;
}



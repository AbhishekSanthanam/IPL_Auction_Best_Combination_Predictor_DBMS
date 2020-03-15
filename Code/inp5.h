#include<bits/stdc++.h>
#include "inp3.h"
#define ll long long int
#define pll pair<long long int,long long int>
#define dd double double
#define pb push_back
#define pob pop_back
#define ins insert
#define mp make_pair
#define ff first
#define ss second
#define For(i,x,y) for(size_t i=size_t(x);i<size_t(y);i++)
#define rfor(i,x,y) for(size_t i=size_t(x);i>=size_t(y);i--)
#define ms(a,x) memset(a, x, sizeof(a))
#define d1(x) cout<<x<<endl
#define d2(x,y) cout<<x<<" "<<y<<endl
#define d3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define pcout(x) cout<<fixed<<setprecision(10)<<x<<endl
//string n,ll nm,ll ni,ll runs,float sr,float avg,ll hs,ll fif,ll hun,ll bp
using namespace std;
ll dp[1005][15];
ll a[1005];
ll n,k,x;
ll min_sum(ll cur_inx,ll rem_k){
	if(rem_k==0) return 0;
	if(cur_inx==n) return maxN;
	if(dp[cur_inx][rem_k]!=-1) return dp[cur_inx][rem_k];
	return min(dp[cur_inx+1][rem_k],a[cur_inx]+dp[cur_inx+1][rem_k-1]);
}
class State{
	public:
	ll cur_inx,rem_k;
	ll rem_x;
	vector<ll> ans;
	bool ok(){
		return min_sum(cur_inx,rem_k)<rem_x;
	}
	State(ll idx,ll kval,ll xval){
		cur_inx=idx;
		rem_k=kval;
		rem_x=xval;
	}
	
	bool operator <(const State& r) {
		if(cur_inx==r.cur_inx) return rem_k<r.rem_k;
		cur_inx<r.cur_inx;
	}
};

vector<ll> min_index_sum(){
	map<State,ll> m;
	
}
bool inp5allr(vector<Allrounder> allrounders,ll kinp,ll bug){
	sort(allrounders.begin(),allrounders.end(),compare102);
	n=allrounders.size();
	k=kinp;
	x=bug;
	For(i,0,n){
		a[i]=allrounders[i].baseprice;
	}
	if(min_sum(0,k)>x) return false;
	memset(dp,-1,sizeof(dp));
	vector<ll> idx_ans=min_index_sum();
	if(idx_ans.size()!=k) return false;
	For(i,0,k){
		allrounders[idx_ans[i]].print();
	}
}

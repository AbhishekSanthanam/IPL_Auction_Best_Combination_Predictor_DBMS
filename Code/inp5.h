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
#define maxN 1000000000
#define d2(x,y) cout<<x<<" "<<y<<endl
#define d3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define pcout(x) cout<<fixed<<setprecision(10)<<x<<endl
//string n,ll nm,ll ni,ll runs,float sr,float avg,ll hs,ll fif,ll hun,ll bp
using namespace std;
ll dp[1005][15];
ll a[1005];
ll n,k,x;
//This returns the minimum-sum possible while at a idx=cur_inx and remaining k=rem_k
ll min_sum(ll cur_inx,ll rem_k){
	if(rem_k==0) return 0;
	if(cur_inx==n) return maxN;
	if(dp[cur_inx][rem_k]!=-1) return dp[cur_inx][rem_k];
	return min(dp[cur_inx+1][rem_k],a[cur_inx]+dp[cur_inx+1][rem_k-1]);
}

class State{
	ll cur_inx,rem_k;
	ll rem_x;
	public:
	vector<ll> ans;
	bool ok(){
		return min_sum(cur_inx,rem_k)<=rem_x;
	}
	State(ll idx,ll kval,ll xval){
		cur_inx=idx;
		rem_k=kval;
		rem_x=xval;
	}
	ll retcurinx() {
		return cur_inx;
	}
	ll retremk() {
		return rem_k;
	}
	ll retremx() {
		return rem_x;
	}
	const bool operator <(const State& r) const{
		if(cur_inx==r.cur_inx) return rem_k<r.rem_k;
		cur_inx<r.cur_inx;
	}
};

typedef pair<ll,State> Dist_State;
//implimenting Diijkstras algorithm using priority queue
vector<ll> min_index_sum(){
	// Stores sum of indices accepted corresponding to that state. 
	map<State,ll> m;
	priority_queue < Dist_State,vector<Dist_State>,greater<Dist_State> > q;
	State start(0,k,x);
	q.push(Dist_State(0,start));
	//d[start]=0;
	ll min_sum=maxN;
	vector<ll> ans;
	while(!q.empty()){
		State s=(q.top()).ss;
		q.pop();
		if(s.retremk()==0 && m[s]<min_sum){
			ans=s.ans;
			min_sum=m[s];
		}
		State n1(s.retcurinx()+1,s.retremk(),s.retremx());
		if(n1.ok()&&m[s]<min_sum){
			n1.ans=s.ans;
			m[n1]=m[s];
			q.push(mp(m[n1],n1));
		}
		State n2(s.retcurinx()+1,s.retremk()-1,s.retremx()-a[s.retcurinx()]);
		if(n2.ok()&&m[s]+s.retcurinx()+1<min_sum){
			n2.ans=s.ans;
			n2.ans.pb(s.retcurinx()+1);
			m[n2]=m[s]+s.retcurinx()+1;
			q.push(mp(m[n2],n2));
		}
	}
	return ans;
}
bool inp5allr(vector<Allrounder> allrounders,ll kinp,ll bug){
	sort(allrounders.begin(),allrounders.end(),compare102);
	n=allrounders.size();
	k=kinp;
	x=bug;
	For(i,0,n){
		a[i]=allrounders[i].retbp();
	}
	memset(dp,-1,sizeof(dp));
	if(min_sum(0,k)>x) return false;
	memset(dp,-1,sizeof(dp));
	vector<ll> idx_ans=min_index_sum();
	if(idx_ans.size()!=k) return false;
	For(i,0,k){
		d1(allrounders[idx_ans[i]-1].retname());
	}
	return true;
}
bool inp5bat(vector<Batsman> batsmen,ll kinp,ll bug){
	sort(batsmen.begin(),batsmen.end(),compare101);
	n=batsmen.size();
	k=kinp;
	x=bug;
	For(i,0,n){
		a[i]=batsmen[i].retbp();
	}
	memset(dp,-1,sizeof(dp));
	if(min_sum(0,k)>x) return false;
	memset(dp,-1,sizeof(dp));
	vector<ll> idx_ans=min_index_sum();
	if(idx_ans.size()!=k) return false;
	For(i,0,k){
		d1(batsmen[idx_ans[i]-1].retname());
	}
	return true;
}
bool inp5bowl(vector<Bowler> bowlers,ll kinp,ll bug){
	sort(bowlers.begin(),bowlers.end(),compare103);
	n=bowlers.size();
	k=kinp;
	x=bug;
	For(i,0,n){
		a[i]=bowlers[i].retbp();
	}
	memset(dp,-1,sizeof(dp));
	if(min_sum(0,k)>x) return false;
	memset(dp,-1,sizeof(dp));
	vector<ll> idx_ans=min_index_sum();
	if(idx_ans.size()!=k) return false;
	For(i,0,k){
		d1(bowlers[idx_ans[i]-1].retname());
	}
	return true;
}
bool inp5wk(vector<Wk> WKs,ll kinp,ll bug){
	sort(WKs.begin(),WKs.end(),compare104);
	n=WKs.size();
	k=kinp;
	x=bug;
	For(i,0,n){
		a[i]=WKs[i].retbp();
	}
	memset(dp,-1,sizeof(dp));
	if(min_sum(0,k)>x) return false;
	memset(dp,-1,sizeof(dp));
	vector<ll> idx_ans=min_index_sum();
	if(idx_ans.size()!=k) return false;
	For(i,0,k){
		d1(WKs[idx_ans[i]-1].retname());
	}
	return true;
}

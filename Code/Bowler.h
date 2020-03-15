#include<bits/stdc++.h>
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
#define maxN 1000000000
#define d1(x) cout<<x<<endl
#define d2(x,y) cout<<x<<" "<<y<<endl
#define d3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define pcout(x) cout<<fixed<<setprecision(10)<<x<<endl
using namespace std;
//b(n,nm,wik,bosr,boavg,eco,bf,fowi,fiwi,bp);
class Bowler{
	public:
	string name,bestf;
	ll nom,totwiks,fourwis,fivewis,baseprice,rank;
	float strikerate,average,economy;
	Bowler(){	}
	Bowler(string n,ll nm,ll wik,float bosr,float boavg,float eco,string bf,ll fowi,ll fiwi,ll r,ll bp){
		name=n;
		nom=nm;
		totwiks=wik;
		strikerate=bosr;
		average=boavg;
		economy=eco;
		bestf=bf;
		fourwis=fowi;
		fivewis=fiwi;
		rank=r;
		baseprice=bp;
	}
	string retname() {return name;}
	void print(){
		d2("Name: ",name);
		d2("No of Matches: ",nom);
		d2("Total Wickets: ",totwiks);
		d2("Strikerate: ",strikerate);
		d2("Average: ",average);
		d2("Economy: ",economy);
		d2("Best figures: ",bestf);
		d2("No of 4wi: ",fourwis);
		d2("No of 5wi: ",fivewis);
		d2("Base Price: ",baseprice);
	}
	float retrank(){
		return rank;
	}
};

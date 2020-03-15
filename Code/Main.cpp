#include<bits/stdc++.h>
#include "inp5.h"
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
#define maxN 100005
#define d1(x) cout<<x<<endl
#define d2(x,y) cout<<x<<" "<<y<<endl
#define d3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define pcout(x) cout<<fixed<<setprecision(10)<<x<<endl
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<Batsman> batsmen;
	vector<Bowler> bowlers;
	vector<Allrounder> allrounders;
	vector<Wk> WKs;
	ifstream bat,bowl,allr,wk;
	bat.open("Batsmen.csv");
	bowl.open("Bowler.csv");
	allr.open("Allrounder.csv");
	wk.open("WicketKeeper.csv");
	string s;
	ll i=0;
	string n;
	ll nm,ni,runs,hs,fif,hun,bp,ncat,nstmp,r;
	float sr,avg;
	
	while(getline(bat,s)){
		stringstream ss(s);
		while(getline(ss,s,',')){
		if(i%11==0) n=s;
		else if(i%11==1)nm=stoll(s);
		else if(i%11==2)ni=stoll(s);
		else if(i%11==3)runs=stoll(s);
		else if(i%11==4)sr=stof(s);
		else if(i%11==5)avg=stof(s);
		else if(i%11==6)hs=stoll(s);
		else if(i%11==7)fif=stoll(s);
		else if(i%11==8)hun=stoll(s);
		else if(i%11==9)r=stoll(s);
		else{
			bp=stoll(s);
			Batsman b(n,nm,ni,runs,sr,avg,hs,fif,hun,r,bp);
			batsmen.pb(b);
		} 
		i++;
	}
	}
	i=0;
	string bf;
	ll wik,fowi,fiwi;
	float bosr,boavg,eco;
	while(getline(bowl,s)){
		stringstream ss(s);
		while(getline(ss,s,',')){
		if(i%11==0) n=s;
		else if(i%11==1)nm=stoll(s);
		else if(i%11==2)wik=stoll(s);
		else if(i%11==3)bosr=stof(s);
		else if(i%11==4)boavg=stof(s);
		else if(i%11==5)eco=stof(s);
		else if(i%11==6)bf=s;
		else if(i%11==7)fowi=stoll(s);
		else if(i%11==8)fiwi=stoll(s);
		else if(i%11==8)r=stoll(s);
		else{
			bp=stoll(s);
			Bowler b(n,nm,wik,bosr,boavg,eco,bf,fowi,fiwi,r,bp);
			bowlers.pb(b);
		} 
		i++;
	}
	}
	i=0;
	while(getline(allr,s)){
		stringstream ss(s);
		while(getline(ss,s,',')){
		if(i%18==0) n=s;
		else if(i%18==1)nm=stoll(s);
		else if(i%18==2)ni=stoll(s);
		else if(i%18==3)runs=stoll(s);
		else if(i%18==4)sr=stof(s);
		else if(i%18==5)avg=stof(s);
		else if(i%18==6)hs=stoll(s);
		else if(i%18==7)fif=stoll(s);
		else if(i%18==8)hun=stoll(s);
		else if(i%18==9)wik=stoll(s);
		else if(i%18==10)bosr=stof(s);
		else if(i%18==11)boavg=stof(s);
		else if(i%18==12)eco=stof(s);
		else if(i%18==13)bf=s;
		else if(i%18==14)fowi=stoll(s);
		else if(i%18==15)fiwi=stoll(s);
		else if(i%18==16)r=stoll(s);
		else{
			bp=stoll(s);
			Allrounder b(n,nm,ni,runs,sr,avg,hs,fif,hun,wik,bosr,boavg,eco,bf,fowi,fiwi,r,bp);
			allrounders.pb(b);
		} 
		i++;
	}
	}
	i=0;
	while(getline(wk,s)){
		stringstream ss(s);
		while(getline(ss,s,',')){
		if(i%13==0) n=s;
		else if(i%13==1)nm=stoll(s);
		else if(i%13==2)ni=stoll(s);
		else if(i%13==3)runs=stoll(s);
		else if(i%13==4)sr=stof(s);
		else if(i%13==5)avg=stof(s);
		else if(i%13==6)hs=stoll(s);
		else if(i%13==7)fif=stoll(s);
		else if(i%13==8)hun=stoll(s);
		else if(i%13==9)ncat=stoll(s);
		else if(i%13==10)nstmp=stoll(s);
		else if(i%13==10)nstmp=stoll(s);
		else if(i%13==11)r=stoll(s);
		else{
			bp=stoll(s);
			Wk b(n,nm,ni,runs,sr,avg,hs,fif,hun,ncat,nstmp,r,bp);
			WKs.pb(b);
		} 
		i++;
	}
	}		
	cout<<"Enter 1 if you want the details of a player: \n"<<"Enter 2 if you want players sorted based on a particular attribute: \n"<<"Enter 3 if you want to compare 2 players: \n"<<"Enter 4 if you want to get players below a given baseprice\n"<<"Enter 5 if you want to get best team for given budget"<<endl;
	ll inp;
	cin>>inp;
	cin.ignore();
	if(inp==1){
		cout<<"Enter the name of player from the below list: "<<endl;
		For(i,0,batsmen.size()){
			d1(batsmen[i].retname());
		}
		For(i,0,bowlers.size()){
			d1(bowlers[i].retname());
		}
		For(i,0,allrounders.size()){
			d1(allrounders[i].retname());
		}
		For(i,0,WKs.size()){
			d1(WKs[i].retname());
		}
		string tname;
		getline(cin,tname,'\n');
		For(i,0,batsmen.size()){
			if(batsmen[i].retname()==tname) batsmen[i].print();
		}
		For(i,0,bowlers.size()){
			if(bowlers[i].retname()==tname) bowlers[i].print();
		}
		For(i,0,allrounders.size()){
			if(allrounders[i].retname()==tname) allrounders[i].print();
		}
		For(i,0,WKs.size()){
			if(WKs[i].retname()==tname) WKs[i].print();
		}
	}
	else if(inp==2){
		solveinp2(batsmen,bowlers,allrounders,WKs);
	}
	else if(inp==3){
		solveinp3(batsmen,bowlers,allrounders,WKs);
	}
	else if(inp==4){
		cout<<"Enter baseprice: "<<endl;
		ll tbp;
		cin>>tbp;
		For(i,0,batsmen.size()){
			if(batsmen[i].baseprice<tbp) d1(batsmen[i].retname());
		}
		For(i,0,bowlers.size()){
			if(bowlers[i].baseprice<tbp) d1(bowlers[i].retname());
		}
		For(i,0,allrounders.size()){
			if(allrounders[i].baseprice<tbp) d1(allrounders[i].retname());
		}
		For(i,0,WKs.size()){
			if(WKs[i].baseprice<tbp) d1(WKs[i].retname());
		}
	}
	else{
		bool ans;
		cout<<"Enter budget for 5 Batsmen: "<<endl;
		ll bgba;
		cin>>bgba;
		cout<<"Enter budget for 3 Bowlers: "<<endl;
		ll bgbo;
		cin>>bgbo;
		cout<<"Enter budget for 2 All-rounders: "<<endl;
		ll bgal;
		cin>>bgal;
		ans=inp5allr(allrounders,bgal);
		if(!ans) cout<<"No pair of All-rounders available"<<endl;
		cout<<"Enter budget for Wicket Keeper: "<<endl;
		ll bgwk;
		cin>>bgwk;
		ans=inp5wk(WKs,bgwk);
		if(!ans) cout<<"No wicket keeper available"<<endl;
	}
}

	

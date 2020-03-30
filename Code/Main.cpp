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
#define maxN 1000000000
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
			//cout<<s<<endl;
		if(i%11==0) n=s;
		else if(i%11==1)nm=stoll(s);
		else if(i%11==2)wik=stoll(s);
		else if(i%11==3)bosr=stof(s);
		else if(i%11==4)boavg=stof(s);
		else if(i%11==5)eco=stof(s);
		else if(i%11==6)bf=s;
		else if(i%11==7)fowi=stoll(s);
		else if(i%11==8)fiwi=stoll(s);
		else if(i%11==9)r=stoll(s);
		else{
			bp=stoll(s);
			Bowler b(n,nm,wik,bosr,boavg,eco,bf,fowi,fiwi,r,bp);
			//b.print();
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
	cout<<"Enter 1 if you want the details of a player: \n"<<"Enter 2 if you want players sorted based on a particular attribute: \n"<<"Enter 3 if you want to compare 2 players: \n"<<"Enter 4 if you want to get players below a given baseprice\n"<<"Enter 5 if you want to get best team for given budget\n"<<"Enter 6 if you want to see variation of best combination of player(4 batsmen,4bowlers,2 allrounders,1 wk) with budget"<<endl;
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
			if(batsmen[i].retbp()<tbp) d1(batsmen[i].retname());
		}
		For(i,0,bowlers.size()){
			if(bowlers[i].retbp()<tbp) d1(bowlers[i].retname());
		}
		For(i,0,allrounders.size()){
			if(allrounders[i].retbp()<tbp) d1(allrounders[i].retname());
		}
		For(i,0,WKs.size()){
			if(WKs[i].retbp()<tbp) d1(WKs[i].retname());
		}
	}
	else if(inp==5){
		bool ans;
		ll k1,k2,k3,k4;
		cout<<"Enter number of batsmen required"<<endl;
		cin>>k1;
		cout<<"Enter number of bowlers required"<<endl;
		cin>>k2;
		cout<<"Enter number of All-rounders required"<<endl;
		cin>>k3;
		cout<<"Enter number of Wicket Keepers required"<<endl;
		cin>>k4;
		cout<<"Enter budget for Batsmen: "<<endl;
		ll bgba;
		cin>>bgba;
		cout<<"Enter budget for Bowlers: "<<endl;
		ll bgbo;
		cin>>bgbo;
		cout<<"Enter budget for All-rounders: "<<endl;
		ll bgal;
		cin>>bgal;
		cout<<"Enter budget for Wicket Keepers: "<<endl;
		ll bgwk;
		cin>>bgwk;
		cout<<"Best combination of "<<k1<<" batsem are: "<<endl;
		if(!inp5bat(batsmen,k1,bgba)) cout<<"does not exist for given budget";
		cout<<"Best combination of "<<k2<<" bowlers are: "<<endl;
		if(!inp5bowl(bowlers,k2,bgbo)) cout<<"does not exist for given budget";
		cout<<"Best combination of "<<k3<<" all-rounders are: "<<endl;
		if(!inp5allr(allrounders,k3,bgal)) cout<<"does not exist for given budget";
		cout<<"Best combination of "<<k4<<" All-rounders are: "<<endl;
		if(!inp5wk(WKs,k4,bgwk)) cout<<"does not exist for given budget";
	}
	else{
		ll enbat=65000000,stbowl=30000000,stall=9000000,stwk=10000000,stbat=19500000,enbowl=60000000,enall=40000000,enwk=150000000;
		ll diffbat=(enbat-stbat)/10;
		ll diffbowl=(enbowl-stbowl)/10;
		ll diffall=(enall-stall)/10;
		ll diffwk=(enwk-stwk)/10;
		while(stbat<=enbat||stbowl<=enbowl||stall<=enall||stwk<=enwk){
			cout<<"Best combination of "<<4<<" batsmen for a budget of "<<stbat<<" are : "<<endl;
			inp5bat(batsmen,4,stbat);
			cout<<"Best combination of "<<4<<" bowlers for a budget of "<<stbowl<<" are : "<<endl;
			inp5bowl(bowlers,4,stbowl);
			cout<<"Best combination of "<<2<<" allrounders for a budget of "<<stall<<" are : "<<endl;
			inp5allr(allrounders,2,stall);
			cout<<"Best combination of "<<1<<" wicket keeper for a budget of "<<stwk<<" is : "<<endl;
			inp5wk(WKs,1,stwk);
			stbat+=diffbat;
			stbowl+=diffbowl;
			stall+=diffall;
			stwk+=diffwk;
		}
	}
}

	

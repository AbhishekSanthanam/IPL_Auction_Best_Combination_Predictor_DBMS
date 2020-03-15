#include<bits/stdc++.h>
#include "Wk.h"
#include "Batsman.h"
#include "Bowler.h"
#include "Allrounder.h"
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
bool compare11(Batsman a,Batsman b){
	return a.noi>b.noi;
}
bool compare112(Allrounder a,Allrounder b){
	return a.noi>b.noi;
}
bool compare14(Wk a,Wk b){
	return a.noi>b.noi;
}
bool compare132(Allrounder a,Allrounder b){
	return a.nom>b.nom;
}
bool compare13(Bowler a,Bowler b){
	return a.nom>b.nom;
}
bool compare21(Batsman a,Batsman b){
	return a.totruns>b.totruns;
}
bool compare24(Wk a,Wk b){
	return a.totruns>b.totruns;
}
bool compare212(Allrounder a,Allrounder b){
	return a.totruns>b.totruns;
}
bool compare232(Allrounder a,Allrounder b){
	return a.totwiks>b.totwiks;
}
bool compare23(Bowler a,Bowler b){
	return a.totwiks>b.totwiks;
}
bool compare31(Batsman a,Batsman b){
	return a.strikerate>b.strikerate;
}
bool compare34(Wk a,Wk b){
	return a.strikerate>b.strikerate;
}
bool compare312(Allrounder a,Allrounder b){
	return a.batstrikerate>b.batstrikerate;
}
bool compare33(Bowler a,Bowler b){
	return a.strikerate>b.strikerate;
}
bool compare332(Allrounder a,Allrounder b){
	return a.bowlstrikerate>b.bowlstrikerate;
}
bool compare41(Batsman a,Batsman b){
	return a.average>b.average;
}
bool compare44(Wk a,Wk b){
	return a.average>b.average;
}
bool compare412(Allrounder a,Allrounder b){
	return a.bataverage>b.bataverage;
}
bool compare43(Bowler a,Bowler b){
	return a.average>b.average;
}
bool compare432(Allrounder a,Allrounder b){
	return a.bowlaverage>b.bowlaverage;
}
bool compare51(Batsman a,Batsman b){
	return a.highscore>b.highscore;
}
bool compare54(Wk a,Wk b){
	return a.highscore>b.highscore;
}
bool compare512(Allrounder a,Allrounder b){
	return a.highscore>b.highscore;
}
bool compare532(Allrounder a,Allrounder b){
	if(a.bestf[0]!=b.bestf[0]) return a.bestf[0]>b.bestf[0];
	else return a.bestf[2]+a.bestf[3]>a.bestf[2]+b.bestf[2];
}
bool compare53(Bowler a,Bowler b){
	if(a.bestf[0]!=b.bestf[0]) return a.bestf[0]>b.bestf[0];
	else return a.bestf[2]+a.bestf[3]>a.bestf[2]+b.bestf[2];
}
bool compare61(Batsman a,Batsman b){
	return a.fifties>b.fifties;
}
bool compare64(Wk a,Wk b){
	return a.fifties>b.fifties;
}
bool compare612(Allrounder a,Allrounder b){
	return a.fifties>b.fifties;
}
bool compare632(Allrounder a,Allrounder b){
	return a.fourwis>b.fourwis;
}
bool compare63(Bowler a,Bowler b){
	return a.fourwis>b.fourwis;
}
bool compare71(Batsman a,Batsman b){
	return a.hundreds>b.hundreds;
}
bool compare74(Wk a,Wk b){
	return a.hundreds>b.hundreds;
}
bool compare712(Allrounder a,Allrounder b){
	return a.hundreds>b.hundreds;
}
bool compare732(Allrounder a,Allrounder b){
	return a.fivewis>b.fivewis;
}
bool compare73(Bowler a,Bowler b){
	return a.fivewis>b.fivewis;
}
bool compare81(Batsman a,Batsman b){
	return a.baseprice>b.baseprice;
}
bool compare84(Wk a,Wk b){
	return a.baseprice>b.baseprice;
}
bool compare82(Allrounder a,Allrounder b){
	return a.baseprice>b.baseprice;
}
bool compare83(Bowler a,Bowler b){
	return a.baseprice>b.baseprice;
}
bool compare93(Bowler a,Bowler b){
	return a.economy>b.economy;
}
bool compare92(Allrounder a,Allrounder b){
	return a.economy>b.economy;
}
bool compare101(Batsman a,Batsman b){
	return a.retrank()<b.retrank();
}
bool compare102(Allrounder a,Allrounder b){
	return a.retrank()<b.retrank();
}
bool compare103(Bowler a,Bowler b){
	return a.retrank()<b.retrank();
}
bool compare104(Wk a,Wk b){
	return a.retrank()<b.retrank();
}
bool compare114(Wk a,Wk b){
	return a.ncat>b.ncat;
}
bool compare124(Wk a,Wk b){
	return a.nstmp>b.nstmp;
}

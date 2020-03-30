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
	return a.retnoi()>b.retnoi();
}
bool compare112(Allrounder a,Allrounder b){
	return a.retnoi()>b.retnoi();
}
bool compare14(Wk a,Wk b){
	return a.retnoi()>b.retnoi();
}
bool compare132(Allrounder a,Allrounder b){
	return a.retnom()>b.retnom();
}
bool compare13(Bowler a,Bowler b){
	return a.retnom()>b.retnom();
}
bool compare21(Batsman a,Batsman b){
	return a.rettotruns()>b.rettotruns();
}
bool compare24(Wk a,Wk b){
	return a.rettotruns()>b.rettotruns();
}
bool compare212(Allrounder a,Allrounder b){
	return a.rettotruns()>b.rettotruns();
}
bool compare232(Allrounder a,Allrounder b){
	return a.rettotwiks()>b.rettotwiks();
}
bool compare23(Bowler a,Bowler b){
	return a.rettotwiks()>b.rettotwiks();
}
bool compare31(Batsman a,Batsman b){
	return a.retbatsr()>b.retbatsr();
}
bool compare34(Wk a,Wk b){
	return a.retbatsr()>b.retbatsr();
}
bool compare312(Allrounder a,Allrounder b){
	return a.retbatsr()>b.retbatsr();
}
bool compare33(Bowler a,Bowler b){
	return a.retbowlsr()>b.retbowlsr();
}
bool compare332(Allrounder a,Allrounder b){
	return a.retbowlsr()>b.retbowlsr();
}
bool compare41(Batsman a,Batsman b){
	return a.retbatavg()>b.retbatavg();
}
bool compare44(Wk a,Wk b){
	return a.retbatavg()>b.retbatavg();
}
bool compare412(Allrounder a,Allrounder b){
	return a.retbatavg()>b.retbatavg();
}
bool compare43(Bowler a,Bowler b){
	return a.retbowlavg()>b.retbowlavg();
}
bool compare432(Allrounder a,Allrounder b){
	return a.retbowlavg()>b.retbowlavg();
}
bool compare51(Batsman a,Batsman b){
	return a.reths()>b.reths();
}
bool compare54(Wk a,Wk b){
	return a.reths()>b.reths();
}
bool compare512(Allrounder a,Allrounder b){
	return a.reths()>b.reths();
}
bool compare532(Allrounder a,Allrounder b){
	string abestf=a.retbf(),bbestf=b.retbf();
	if(abestf[0]!=bbestf[0]) return abestf[0]>bbestf[0];
	else return abestf[2]+abestf[3]>abestf[2]+bbestf[2];
}
bool compare53(Bowler a,Bowler b){
	string abestf=a.retbf(),bbestf=b.retbf();
	if(abestf[0]!=bbestf[0]) return abestf[0]>bbestf[0];
	else return abestf[2]+abestf[3]>abestf[2]+bbestf[2];
}
bool compare61(Batsman a,Batsman b){
	return a.retfif()>b.retfif();
}
bool compare64(Wk a,Wk b){
	return a.retfif()>b.retfif();
}
bool compare612(Allrounder a,Allrounder b){
	return a.retfif()>b.retfif();
}
bool compare632(Allrounder a,Allrounder b){
	return a.retfourwis()>b.retfourwis();
}
bool compare63(Bowler a,Bowler b){
	return a.retfourwis()>b.retfourwis();
}
bool compare71(Batsman a,Batsman b){
	return a.rethun()>b.rethun();
}
bool compare74(Wk a,Wk b){
	return a.rethun()>b.rethun();
}
bool compare712(Allrounder a,Allrounder b){
	return a.rethun()>b.rethun();
}
bool compare732(Allrounder a,Allrounder b){
	return a.retfivewis()>b.retfivewis();
}
bool compare73(Bowler a,Bowler b){
	return a.retfivewis()>b.retfivewis();
}
bool compare81(Batsman a,Batsman b){
	return a.retbp()>b.retbp();
}
bool compare84(Wk a,Wk b){
	return a.retbp()>b.retbp();
}
bool compare82(Allrounder a,Allrounder b){
	return a.retbp()>b.retbp();
}
bool compare83(Bowler a,Bowler b){
	return a.retbp()>b.retbp();
}
bool compare93(Bowler a,Bowler b){
	return a.reteco()>b.reteco();
}
bool compare92(Allrounder a,Allrounder b){
	return a.reteco()>b.reteco();
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
	return a.retnoofcat()>b.retnoofcat();
}
bool compare124(Wk a,Wk b){
	return a.retnoofstumping()>b.retnoofstumping();
}

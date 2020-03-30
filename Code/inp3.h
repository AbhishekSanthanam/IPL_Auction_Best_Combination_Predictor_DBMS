#include<bits/stdc++.h>
#include "inp2.h"
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
void solveinp3(vector<Batsman> batsmen,vector<Bowler> bowlers,vector<Allrounder> allrounders,vector<Wk> WKs){
	cout<<"Enter 1f the two players are batsmen,bowlers,all-rounders or wicketkeeper: "<<endl;
		string t3;
		cin>>t3;
		cin.ignore();
		cout<<"List of "<<t3<<": "<<endl;
		if(t3[1]=='a'){
			For(i,0,batsmen.size()) d1(batsmen[i].retname());
		}
		else if(t3[1]=='o'){
			For(i,0,bowlers.size()) d1(bowlers[i].retname());
		}
		else if(t3[1]=='i'){
			For(i,0,WKs.size()) d1(WKs[i].retname());
		}
		else{
			For(i,0,allrounders.size()) d1(allrounders[i].retname());
		}
		cout<<"Enter the name of the first player: "<<endl;
		string p1;
		getline(cin,p1);
		cout<<"Enter the name of the second player: "<<endl;
		string p2;
		getline(cin,p2);
		if(t3[1]=='a'){
			Batsman a,b;
			For(i,0,batsmen.size()){
				if(batsmen[i].retname()==p1) a=batsmen[i];
				if(batsmen[i].retname()==p2) b=batsmen[i];
			}
			cout<<"Chose the number of one of the below attribute based on which the comparison should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)Base Price"<<endl;
			ll atr;
			cin>>atr;
			if(atr==1) {
				if(compare11(a,b)) a.print();
				else b.print();
			}
			else if(atr==2) {
				if(compare21(a,b)) a.print();
				else b.print();
			}
			else if(atr==3) {
				if(compare31(a,b)) a.print();
				else b.print();
			}
			else if(atr==4) {
				if(compare41(a,b)) a.print();
				else b.print();
			}
			else if(atr==5) {
				if(compare51(a,b)) a.print();
				else b.print();
			}
			else if(atr==6) {
				if(compare61(a,b)) a.print();
				else b.print();
			}
			else if(atr==7) {
				if(compare71(a,b)) a.print();
				else b.print();
			}
			else {
				if(compare81(a,b)) a.print();
				else b.print();
			}
		}
		else if(t3[1]=='o'){
			Bowler a,b;
			For(i,0,bowlers.size()){
				if(bowlers[i].retname()==p1) a=bowlers[i];
				else if(batsmen[i].retname()==p2) b=bowlers[i];
			}
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of matches\n"<<"2)Total Wickets\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Economy\n"<<"6)Best Figures\n"<<"7)No of four wicket hauls\n"<<"8)No of five wicket hauls\n"<<"9)Base Price"<<endl;
			ll atr;
			cin>>atr;
			if(atr==1) {
				if(compare13(a,b)) a.print();
				else b.print();
			}
			else if(atr==2){
				if(compare23(a,b)) a.print();
				else b.print();
			} 
			else if(atr==3) {
				if(compare33(a,b)) a.print();
				else b.print();
			}
			else if(atr==4) {
				if(compare43(a,b)) a.print();
				else b.print();
			}
			else if(atr==5) {
				if(compare93(a,b)) a.print();
				else b.print();
			}
			else if(atr==6){
				if(compare53(a,b)) a.print();
				else b.print();
			}
			else if(atr==7) {
				if(compare63(a,b)) a.print();
				else b.print();
			}
			else if(atr==8){
				if(compare73(a,b)) a.print();
				else b.print();
			}
			else {
				if(compare83(a,b)) a.print();
				else b.print();
			} 
		}
		else if(t3[1]=='i'){
			Wk a,b;
			For(i,0,WKs.size()){
				if(WKs[i].retname()==p1) a=WKs[i];
				if(WKs[i].retname()==p2) b=WKs[i];
			}
			cout<<"Chose the number of one of the below attribute based on which the comparison should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)No of catches\n"<<"9)No of stumpings\n"<<"10)Base Price"<<endl;
			ll atr;
			cin>>atr;
			if(atr==1) {
				if(compare14(a,b)) a.print();
				else b.print();
			}
			else if(atr==2) {
				if(compare24(a,b)) a.print();
				else b.print();
			}
			else if(atr==3) {
				if(compare34(a,b)) a.print();
				else b.print();
			}
			else if(atr==4) {
				if(compare44(a,b)) a.print();
				else b.print();
			}
			else if(atr==5) {
				if(compare54(a,b)) a.print();
				else b.print();
			}
			else if(atr==6) {
				if(compare64(a,b)) a.print();
				else b.print();
			}
			else if(atr==7) {
				if(compare74(a,b)) a.print();
				else b.print();
			}
			else if(atr==8) {
				if(compare114(a,b)) a.print();
				else b.print();
			}
			else if(atr==9) {
				if(compare124(a,b)) a.print();
				else b.print();
			}
			else {
				if(compare84(a,b)) a.print();
				else b.print();
			}
		}
		else{
			Allrounder a,b;
			For(i,0,allrounders.size()){
				if(allrounders[i].retname()==p1) a=allrounders[i];
				else if(allrounders[i].retname()==p2) b=allrounders[i];
			}
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Batting Strike Rate\n"
			<<"4)Batting Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)Base Price"<<"9)No of matches\n"<<"10)Total Wickets\n"<<"11)Bowling Strike Rate\n"
			<<"12)Bowling Average\n"<<"13)Economy\n"<<"14)Best Figures\n"<<"15)No of four wicket hauls\n"<<"16)No of five wicket hauls\n"<<endl;
			ll atr;
			cin>>atr;
			if(atr==1) {
				if(compare112(a,b)) a.print();
				else b.print();
			}
			else if(atr==2) {
				if(compare212(a,b)) a.print();
				else b.print();
			}
			else if(atr==3) {
				if(compare312(a,b)) a.print();
				else b.print();
			}
			else if(atr==4) {
				if(compare412(a,b)) a.print();
				else b.print();
			}
			else if(atr==5){
				if(compare512(a,b)) a.print();
				else b.print();
			}
			else if(atr==6) {
				if(compare612(a,b)) a.print();
				else b.print();
			}
			else if(atr==7) {
				if(compare712(a,b)) a.print();
				else b.print();
			}
			else if(atr==8) {
				if(compare82(a,b)) a.print();
				else b.print();
			}
			else if(atr==9) {
				if(compare132(a,b)) a.print();
				else b.print();
			}
			else if(atr==10) {
				if(compare232(a,b)) a.print();
				else b.print();
			}
			else if(atr==11){
				if(compare332(a,b)) a.print();
				else b.print();
			}
			else if(atr==12) {
				if(compare432(a,b)) a.print();
				else b.print();
			}
			else if(atr==13){
				if(compare92(a,b)) a.print();
				else b.print();
			}
			else if(atr==14) {
				if(compare532(a,b)) a.print();
				else b.print();
			}
			else if(atr==15) {
				if(compare632(a,b)) a.print();
				else b.print();
			}
			else {
				if(compare732(a,b)) a.print();
				else b.print();
			}
		}
		
}


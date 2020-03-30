#include<bits/stdc++.h>
#include "Compare.h"
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
void solveinp2(vector<Batsman> batsmen,vector<Bowler> bowlers,vector<Allrounder> allrounders,vector<Wk>WKs){
	cout<<"Enter if player is batsman,bowler,allrounder or wicketkeeper: "<<endl;
		string t1;
		cin>>t1;
		if(t1[1]=='a'){
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)Base Price\n"<<"9)Overall"<<endl;
			ll atr;
			cin>>atr;
			vector<Batsman> temp=batsmen;
			if(atr==1) sort(temp.begin(),temp.end(),compare11);
			else if(atr==2) sort(temp.begin(),temp.end(),compare21);
			else if(atr==3) sort(temp.begin(),temp.end(),compare31);
			else if(atr==4) sort(temp.begin(),temp.end(),compare41);
			else if(atr==5) sort(temp.begin(),temp.end(),compare51);
			else if(atr==6) sort(temp.begin(),temp.end(),compare61);
			else if(atr==7) sort(temp.begin(),temp.end(),compare71);
			else if(atr==8) sort(temp.begin(),temp.end(),compare81);
			else sort(temp.begin(),temp.end(),compare101);
			For(i,0,temp.size()) temp[i].print();
		}
		else if(t1[1]=='o'){
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of matches\n"<<"2)Total Wickets\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Economy\n"<<"6)Best Figures\n"<<"7)No of four wicket hauls\n"<<"8)No of five wicket hauls\n"<<"9)Base Price\n"<<"10)Overall"<<endl;
			ll atr;
			cin>>atr;
			vector<Bowler> temp=bowlers;
			if(atr==1) sort(temp.begin(),temp.end(),compare13);
			else if(atr==2) sort(temp.begin(),temp.end(),compare23);
			else if(atr==3) sort(temp.begin(),temp.end(),compare33);
			else if(atr==4) sort(temp.begin(),temp.end(),compare43);
			else if(atr==5) sort(temp.begin(),temp.end(),compare93);
			else if(atr==6) sort(temp.begin(),temp.end(),compare53);
			else if(atr==7) sort(temp.begin(),temp.end(),compare63);
			else if(atr==8) sort(temp.begin(),temp.end(),compare73);
			else if(atr==9) sort(temp.begin(),temp.end(),compare83); 
			else sort(temp.begin(),temp.end(),compare103);
			For(i,0,temp.size()) temp[i].print();
		}
		else if(t1[1]=='i'){
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Strike Rate\n"
			<<"4)Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)No of catches\n"<<"9)No of stumpings\n"<<"10)Base Price\n"<<"11)Overall"<<endl;
			ll atr;
			cin>>atr;
			vector<Wk> temp=WKs;
			if(atr==1) sort(temp.begin(),temp.end(),compare14);
			else if(atr==2) sort(temp.begin(),temp.end(),compare24);
			else if(atr==3) sort(temp.begin(),temp.end(),compare34);
			else if(atr==4) sort(temp.begin(),temp.end(),compare44);
			else if(atr==5) sort(temp.begin(),temp.end(),compare54);
			else if(atr==6) sort(temp.begin(),temp.end(),compare64);
			else if(atr==7) sort(temp.begin(),temp.end(),compare74);
			else if(atr==8) sort(temp.begin(),temp.end(),compare114);
			else if(atr==9) sort(temp.begin(),temp.end(),compare124);
			else if(atr==10) sort(temp.begin(),temp.end(),compare84);
			else sort(temp.begin(),temp.end(),compare104);
			For(i,0,temp.size()) temp[i].print();
		}
		else{
			cout<<"Chose the number of one of the below attribute based on which the sorting should be done: \n"<<"1)No of innings\n"<<"2)Total Runs\n"<<"3)Batting Strike Rate\n"
			<<"4)Batting Average\n"<<"5)Highest Score\n"<<"6)No of fifties\n"<<"7)No of hundreds\n"<<"8)Base Price"<<"9)No of matches\n"<<"10)Total Wickets\n"<<"11)Bowling Strike Rate\n"
			<<"12)Bowling Average\n"<<"13)Economy\n"<<"14)Best Figures\n"<<"15)No of four wicket hauls\n"<<"16)No of five wicket hauls\n"<<"17)Overall\n"<<endl;
			ll atr;
			cin>>atr;
			vector<Allrounder> temp=allrounders;
			if(atr==1) sort(temp.begin(),temp.end(),compare112);
			else if(atr==2) sort(temp.begin(),temp.end(),compare212);
			else if(atr==3) sort(temp.begin(),temp.end(),compare312);
			else if(atr==4) sort(temp.begin(),temp.end(),compare412);
			else if(atr==5) sort(temp.begin(),temp.end(),compare512);
			else if(atr==6) sort(temp.begin(),temp.end(),compare612);
			else if(atr==7) sort(temp.begin(),temp.end(),compare712);
			else if(atr==8) sort(temp.begin(),temp.end(),compare82);
			else if(atr==9) sort(temp.begin(),temp.end(),compare132);
			else if(atr==10) sort(temp.begin(),temp.end(),compare232);
			else if(atr==11) sort(temp.begin(),temp.end(),compare332);
			else if(atr==12) sort(temp.begin(),temp.end(),compare432);
			else if(atr==13) sort(temp.begin(),temp.end(),compare92);
			else if(atr==14) sort(temp.begin(),temp.end(),compare532);
			else if(atr==15) sort(temp.begin(),temp.end(),compare632);
			else if(atr==16) sort(temp.begin(),temp.end(),compare732); 
			else{
				sort(temp.begin(),temp.end(),compare102);
			}
			For(i,0,temp.size()) temp[i].print();
		}
		
}


#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
#define ub upper_bound
#define lb lower_bound

using namespace std;

vector<int>v;
string toString(int n){
	stringstream ss;
	ss<<n;
	string str;
	ss>>str;
	return str;
}

string getTallShort(int n){
	int i = lb(v.begin(),v.end(),n)-v.begin();
	if(i==v.size())i--;
	for(;i>=0;i--){
		if(v[i]<n)return toString(v[i]);
	}
	return "X";
}

string getShortTall(int n){
	int i = lb(v.begin(),v.end(),n)-v.begin();
	if(i==v.size())i--;
	
	for(;i<v.size();i++){
		if(v[i]>n)return toString(v[i]);
	}
	
	return "X";
	
}

void solve(){
	string l,h;
	
	int n;
	sc("%d",&n);
	l=getTallShort(n);
	h=getShortTall(n);
	cout<<l<<" "<<h<<endl;
}

int main() {
//
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		int temp;
		sc("%d",&temp);
		v.pb(temp);
	}
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	
	return 0;
}


//https://www.codechef.com/problems/WATSCORE

#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
map<int,int>mp;
map<int,int>:: iterator it;

void solve(){
	mp.clear();
	int n;
	int x,y;
	sc("%d",&n);
	
	for(int i=0;i<n;i++){
		sc("%d%d",&x,&y);
		mp[x]=max(mp[x],y);
	}
	int ans =0;
	
	for(it = mp.begin();it!=mp.end();it++){
		x = it->first;
		if(x<9)ans+=mp[x];
	}
	cout<<ans<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	
	return 0;
}
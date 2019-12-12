#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

typedef long long int ll;

int amount[]={180000,300000,400000,300000};
double percent[]={0,.1,.15,.2};

ll getRest(ll n,int i){
	ll ans = n-amount[i];
	if (ans<0)return 0;
	return ans;
}

void solve(int c){
	ll n;
	sc("%lld",&n);
	double tax = 0;
	for(int i=0;i<4;i++){
		if(n>amount[i])tax+=amount[i]*percent[i];
		else tax+=n*percent[i];
		n=getRest(n,i);
	}
	
	tax+=n*.25;
	tax = ceil(tax);
	if(tax>0&&tax<=2000)tax=2000;
	pf("Case %d: %lld\n",c,ll(tax));
	
	
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=1;i<=n;i++)solve(i);
	return 0;
}


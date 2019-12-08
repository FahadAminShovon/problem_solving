#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;

void solve(){
	ll n,m;
	sc("%lld%lld",&n,&m);
	if (n==m)cout<<"="<<endl;
	else if(n>m)cout<<">"<<endl;
	else cout<<"<"<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	return 0;
}
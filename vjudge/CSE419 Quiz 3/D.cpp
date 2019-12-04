#include <bits/stdc++.h>
#define sc scanf
#define pf pritnf
#define gcd(a,b) __gcd(a,b)
using namespace std;
typedef long long int ll;

void solve(){
	ll a,b;
	sc("%lld%lld",&a,&b);
	
	if(gcd(a,b)==1)cout<<"Nao"<<endl;
	else cout<<"Sim"<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	return 0;
}

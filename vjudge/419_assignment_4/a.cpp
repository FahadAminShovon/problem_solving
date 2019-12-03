#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;

void solve(){
	double n,m;
	sc("%lf%lf",&n,&m);
	cout<<int(ceil(m/n)*n-m)<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	return 0;
}

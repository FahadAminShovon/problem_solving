#include <bits/stdc++.h>
#define sc scanf
#define pf printf

using namespace std;

int main() {
	int n;
	sc("%d",&n);
	int ans = 0;
	
	int ajaira;
	for(int i=0;i<n;i++)sc("%d",&ajaira);
	
	while(n){
		n=n/2;
		ans++;
	}
	cout<<ans<<endl;
	
	return 0;
}

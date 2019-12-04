#include <bits/stdc++.h>
#define sc scanf
#define pf pritnf
using namespace std;


void solve(){
	int n;
	sc("%d",&n);
	int counter =0;
	for(int i=0;i<n;i++){
		int x;
		sc("%d",&x);
		if(x>0)counter++;
	}
	
	cout<<counter<<endl;
}

int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	return 0;
}

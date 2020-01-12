#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

void solve(){
	int arr[10];
	memset(arr,0,sizeof(arr));
	int n;
	sc("%d",&n);
	
	for(int i=1;i<=n;i++){
		stringstream ss;
		ss<<i;
		string str;
		ss>>str;
		int sz =str.size();
		for(int i=0;i<sz;i++){
			int temp = arr[str[i]-'0']++;
		}
	}
	
	cout<<arr[0];
	for(int i=1;i<10;i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
	
}


int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++)solve();
	return 0;
}

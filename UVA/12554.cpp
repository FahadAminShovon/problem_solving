#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;

string hbd[] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

int main() {
	int n;
	sc("%d",&n);
	getchar();
	string str;
	string strr[n];
	for(int i=0;i<n;i++){
		cin>>str;
		strr[i]=str;
	}
	
	if(n>16){
		int it = ceil(n/16.0);
		for(int i=0;i<16*it;i++)cout<<strr[i%n]<<": "<<hbd[i%16]<<endl;
		return 0;
	}
	
	for(int i=0;i<16;i++)cout<<strr[i%n]<<": "<<hbd[i]<<endl;
	
	return 0;
}
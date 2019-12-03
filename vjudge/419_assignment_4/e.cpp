#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long int ll;

map<string,string>mp;

int main() {
	
	mp["HELLO"]="ENGLISH";
	mp["HOLA"]="SPANISH";
	mp["HALLO"]="GERMAN";
	mp["BONJOUR"]="FRENCH";
	mp["CIAO"]="ITALIAN";
	mp["ZDRAVSTVUJTE"]="RUSSIAN";
	string str;
	int c=1;
	while(cin>>str){
		if (str=="#")break;
		if(mp.count(str))cout<<"Case "<<c++<<": "<<mp[str]<<endl;
		else cout<<"Case "<<c++<<": UNKNOWN"<<endl;
	}
	
	return 0;
}

#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

string tostr(int n){
	stringstream ss;
	ss<<n;
	string c;
	ss>>c;
	return c;
}

int main() {
	string str;
	cin>>str;
	string ans = "";
	
	for(int i=0;i<str.size();i++){
		char temp = str[i];
		int counter = 1;
		int j=i+1;
		while(j<str.size() and str[j]==temp){
			counter++;
			j++;
		}
		i=j-1;
		ans.push_back(temp);
		
		ans+=tostr(counter);
	}
	
	cout<<ans<<endl;
	
	
	
	
	return 0;
}

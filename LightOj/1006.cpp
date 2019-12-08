#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int a, b, c, d, e, f;
int dp[10001];
ll fn( ll n ) {
	if(dp[n]!=-1)return dp[n];
    if( n == 0 ) {dp[n] = a;return dp[n];}
    if( n == 1 ) {dp[n] = b;return dp[n];}
    if( n == 2 ) {dp[n] = c;return dp[n];}
    if( n == 3 ) {dp[n] = d;return dp[n];}
    if( n == 4 ) {dp[n] = e;return dp[n];}
    if( n == 5 ) {dp[n] = f;return dp[n];}
    dp[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007 ;
    return dp[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
    	memset(dp,-1,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
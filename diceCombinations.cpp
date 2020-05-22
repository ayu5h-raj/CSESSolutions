//https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int dp[1000005];

// int find(int sum){
// 	if(sum == 0)
// 		return 1;
// 	if(sum < 0)
// 		return 0;
// 	if(dp[sum] != -1)
// 		return dp[sum];
// 	int ans = 0;

// 	for(int i = 1 ; i <= 6 ; i++)
// 		ans =  (ans%MOD + find(sum-i)%MOD)%MOD;
// 	return dp[sum] = ans%MOD;
// }

int main(){
	int n ;
	scanf("%d",&n);
	// for(int i = 0 ; i<=n ; i++)
	// 	dp[i] = -1;
	// cout << find(n);
	dp[0] = 1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= 6 ; j++){
			if(j <= i){
				dp[i] = (dp[i] + dp[i-j])%MOD;
			}
		}
	}
	cout << dp[n] << endl;
}
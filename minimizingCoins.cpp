//https://cses.fi/problemset/task/1634

#include<bits/stdc++.h>
using namespace std;

int arr[105];
int n;
int dp[1000005];
int find(int sum){
	if(sum < 0)
		return 1e9;
	if(n == 0 || sum == 0)
		return 0;
	if(dp[sum] != -1) 
		return dp[sum];
	int ans = INT_MAX;
	for(int i = 0 ; i < n ; i++)
		ans = min(ans,1+find(sum-arr[i]));
	return dp[sum] = ans;
}

int main(){
	int sum;
	cin >> n >> sum;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i <= sum ; i++)
		dp[i] = -1;
	int res = find(sum);
	if(res > sum)
		cout << -1;
	else
		cout << res << endl;
}
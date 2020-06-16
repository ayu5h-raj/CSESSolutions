//https://cses.fi/problemset/task/1635

#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

vector<long long> coins;
long long dp[1000005];
long long find(int sum){
    if(sum < 0)
        return 0;
    if(sum == 0)
        return 1;
    if (dp[sum] != -1)
    {
        return dp[sum];
    }
    long long ans = 0 ;
    for(int i = 0 ; i < coins.size() ; i++){
        if(sum-coins[i] >= 0)
            ans = (ans%MOD + find(sum-coins[i])%MOD)%MOD;
    }
    return dp[sum] = ans%MOD;
}

int main(){
    long long n , sum, temp;
    cin >> n >> sum ;
    for (long long i = 0; i <= sum+1; i++)
    {   
        dp[i] = -1;
    }
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        coins.push_back(temp);
    }

    cout << find(sum) << endl;
}
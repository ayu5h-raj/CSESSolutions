//https://cses.fi/problemset/task/1623

#include<bits/stdc++.h>
using namespace std;

long long arr[25];
int n ;
long long ans = INT_MAX;

void find(int index , long long add , long long sum){
	if(index == n)
		return ;
	ans = min(ans , abs(sum-add) );
	find(index+1,arr[index]+add,sum-arr[index]);
	find(index+1,add,sum);
}

int main(){
	
	scanf("%d",&n);
	long long sum = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	find(0,0LL,sum);
	cout << ans << endl;
}
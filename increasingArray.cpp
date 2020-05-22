#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	ll curr ;
	scanf("%d",&n);
	ll ans = 0;
	ll prev = -1;
	for(int i = 0 ; i < n ; i++){
		scanf("%lld",&curr);
		if(prev == -1)
			prev = curr;
		else{
			if(curr < prev){
				ans += (prev-curr);
				prev = (curr + (prev-curr));
			}
			else
				prev = curr;
			
		}
	}
	printf("%lld",ans);
}
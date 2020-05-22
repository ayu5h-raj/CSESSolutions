//https://cses.fi/problemset/task/1754

#include<bits/stdc++.h>

using namespace std;



int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		int a , b ;
		scanf("%d%d",&a,&b);
		if(a < b)
			swap(a,b);
		if(a > 2*b){
			cout << "NO\n";
			continue;
		}
		if((a+b)%3 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
return 0;
}
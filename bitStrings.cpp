#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

ll modularExponentiation(ll x,ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result*x)%MOD;
        x=(x*x)%MOD;
        n=n/2;
    }
    return result%MOD;
}

int main(){
	ll n ;
	scanf("%lld",&n);
	cout << modularExponentiation(2,n);
}
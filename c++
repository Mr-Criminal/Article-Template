#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include"bits/stdc++.h"

using namespace std;

#define Fast_D               cout<<fixed<<setprecision(13);
#define FastIO               ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define too_large 0

#if(too_large ==1)
#define int                  long long
#define double               long double
#endif

#define all(v)               v.begin(),v.end()
#define scanstr(s)           cin>>ws; getline(cin,s);

#define Local  0

#if (Local == 1)
#define debug(x)             cout << __LINE__ << " " << #x <<"..." << x << endl;
#endif

const double PI = 3.141592653589793;

void solve()
{
	
}

int32_t main()
{
	FastIO;
	Fast_D;
	int T;
	T = 1;
	while(T--)
	solve();
}

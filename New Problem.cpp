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
    string f,s;
    cin >> f >> s;
    int n = f.size();
    int m = s.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, 1e9));

    for(int i=0;i<=n;i++) dp[i][0] = i;
    for(int i=0;i<=m;i++) dp[0][i] = i;

    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(f[i-1]==s[j-1])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
				dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
				dp[i][j] = min(dp[i][j], dp[i-1][j-1]+1);
			}
		}
	}
	/*for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}*/
	cout << dp[n][m] << "\n";
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


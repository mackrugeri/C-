#include<bits/stdc++.h>
using namespace std;
void lcs(string a,string b,int n,int m)
{
	int dp[n+1][m+1];
    // Building the table in bottom-up manner
	for(i=0;i<n+1;i++)
	{
		for(int j=0j<m+1;j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(a[i-1]==b[j-1])
				dp[i][j]=1+dp[i-1][j-1];
			else
			{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}

	int ind=dp[n][m]; // length of longest common subsequence
	char ans[ind+1]; // longest common subsequence
	int i=n,j=m;
	ans[ind]='\0';
	while(i>0 && j>0)
	{
		if(a[i-1]==b[j-1])
			{
				ans[ind-1]=a[i-1];
				i--;j--;ind--;
			}
		else if(dp[i-1][j]>dp[i][j-1])
			i--;
		else
		{
		 j--;
		}
	}
	cout << ans;
}
int main()
{
	string a,b;
	cin >> a >> b;
	cout << "The largest common subsequence is " ;
	lcs(a,b,a.length(),b.length());
}
/*
Sample Input:-
    aabbc
    abacc
Sample Output:-
    The largest common subsequence is abc
*/

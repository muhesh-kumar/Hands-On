#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string> vs
#define vvi vector<vector<int> >

vector<int> rearrangeEvenToOdd(vector<int> input)
{
    stable_partition(input.begin(), input.end(), [](auto a) { return a % 2 == 0; });
    vector<int> v;
    for (int i = 0; i < input.size(); i++) v.push_back(input[i]);
    return v;
}
vector<int> rearrangeOddToEven(vector<int> input)
{
    stable_partition(input.begin(), input.end(), [](auto a) { return a % 2 == 1; });
    vector<int> v;
    for (int i = 0; i < input.size(); i++) v.push_back(input[i]);
    return v;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tc;
	cin >> tc;
	while(tc--) {
		int n; cin >> n;
		int dig; cin >> dig;
		vector<int> raze, breach;
		int j = 1;

		while(dig > 0) {
			if (j % 2 == 1) raze.push_back(dig % 10);
			else breach.push_back(dig % 10);
			dig /= 10;
			j++;
		}
		raze = rearrangeEvenToOdd(raze);
		breach = rearrangeOddToEven(breach);
		if (n % 2 == 1) {
			if (raze[raze.size() - 1] % 2 == 1) cout << 1 << "\n";
			else cout << 2 << "\n";
		} else {
			if (breach[breach.size() - 1] % 2 == 0) cout << 2 << "\n";
			else cout << 1 << "\n";
		}
	}

	return 0;
}
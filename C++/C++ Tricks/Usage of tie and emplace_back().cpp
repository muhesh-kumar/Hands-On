
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

#define mt make_tuple
#define eb emplace_back


int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	tie(a, b, c) = mt(1, 2, 3); // assign
	tie(a, b) = mt(b, a) // swap(a, b)
	vector<pair<int, int> > v;
	v.eb(a, b) // shorter and faster than pb(mp(a, b))
	
	// Dijkstra
	priority_queue<State> q;
	q.emplace(0, src, -1);
	while(q.size()) {
		int dist, node, prev;
		tie(dist, ode, prev) = q.top(); q.pop();
		dist = -dist;
		// find next state
		q.emplace(-new_dist, new_node, node);
	}


	// Reason for why eb is faster than pb: emplace_back is faster than push_back because
	// it just construct valeu at the end of vector but push_back construct it somewhere else and then move it to the vector
	
	// Also in the code above you can see how tie(args...) works. You can also use ignore keyword in tie to ignore a value.

	tuple<int, int, int, char> t(3, 4, 5, 'g');
	int a, b;
	tie(b, ignore, a, ignore) = t;
	cout << a << " " << b << "\n";  
	return 0;
}

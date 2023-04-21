#include <bits/stdc++.h>
using namespace std;
vector<int> Solution::solve(int A, vector<int>& B){
	// newB -> only those strengths which are useful
	// pair {i,j} -> i = original index of the person, j = strength
	vector<pair<int, int> > newB;
	
	int prev = INT_MAX;
	for(int i=0; i<B.size(); i++){
		if(B[i] < prev){
			newB.push_back({i, B[i]});
			prev = B[i];
		} 
	}
	
	int n = newB.size();
	
	vector<int> ans;
	
	int R = A;
	int temp = newB[n-1].second;   //smallest strength
	int i=0;
	
	
	while(i<n){
		// check if the current person can hit and if he can hit
		// would he change the answer or not
		if(R >= newB[i].S && (1 + (R-newB[i].S)/temp) == R/temp){
			ans.push_back(newB[i].F);
			R -= newB[i].S;
		} 
		else i++;
	}
	
	return ans;
}

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size() , m = matrix[0].size();
	set<int>row , col;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(matrix[i][j]==0){
				col.insert(j);
				row.insert(i);
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(row.count(i) || col.count(j))matrix[i][j]=0;
		}
	}

}
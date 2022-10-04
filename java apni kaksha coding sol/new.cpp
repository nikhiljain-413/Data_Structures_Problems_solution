// C++ program of the above approach
#include <bits/stdc++.h>
using namespace std;

// countMap[][] to store
// count of characters
vector<vector<int> > countMap;

int cnt = INT_MAX;

// Function to get minimum number of
// stickers for a particular state
void count(int curCnt, int pos, vector<int>charAvailable,
		string target, vector<string> stickers)
{
	
	// If an optimal solution is
	// already there, return
	if (curCnt >= cnt)
		return;

	int m = stickers.size();
	int n = target.size();

	// If Target has been constructed
	// update cnt and return
	if (pos == n)
	{
		cnt = min(cnt, curCnt);
		return;
	}

	char c = target[pos];

	if (charAvailable > 0)
	{
		
		// Update charAvailable[]
		charAvailable--;

		// Recursizevely function call
		// for (pos + 1)
		count(curCnt, pos + 1, charAvailable,
			target, stickers);

		// Update charAvailable[]
		charAvailable++;
	}
	else
	{
		for(int i = 0; i < m; i++)
		{
			if (countMap[i] == 0)
				continue;

			// Update charAvailable[]
			for(int j = 0; j < 26; j++)
			{
				charAvailable[j] += countMap[i][j];
			}

			// Recursizeve Call
			count(curCnt + 1, pos, charAvailable,
				target, stickers);

			// Update charAvailable[]
			for(int j = 0; j < 26; j++)
			{
				charAvailable[j] -= countMap[i][j];
			}
		}
	}
}

// Function to find the minimum
// number of stickers
int minStickers(vector<string> stickers,
				string target)
{
	
	// Base Case
	if (target == "")
		return -1;

	if (target.size() == 0)
		return 0;

	if (stickers.size() == 0)
		return -1;

	int m = stickers.size();
	countMap.resize(m, vector<int>(26, 0));
	
	// Fill the countMap Array
	for(int i = 0; i < stickers.size(); i++)
	{
		string s = stickers[i];
		for(char c : s)
		{
			countMap[i]++;
		}
	}

	// Recusizeve function call to get
	// minimum number of stickers
	vector<int> temp(26);
	count(0, 0, temp, target, stickers);

	return cnt == INT_MAX ? -1 : cnt;
}

// Driver Code
int main()
{
	
	// Given Input
	vector<string> str = {"with", "example", "science"};
	string target = "thehat";

	// Function Call
	int Result = minStickers(str, target);

	// Print the result
	cout << Result;
}

// This code is contributed by mohit kumar 29

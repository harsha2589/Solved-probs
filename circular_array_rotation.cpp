#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
	int n;
	int k;
	int q;
	cin >> n >> k >> q;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++){
		cin >> a[a_i];
	}
	k = k%n;
	vector<int> temp(n);
	//int index = k;
	int l = k - 1, r = k;
	int lind = n - 1;
	int rind = 0;
	
	while (l >= 0 || r < n)
	{
		if (l >= 0)
		{
			temp[l] = a[lind];
			l--;
			lind--;
		}
		if (r < n)
		{
			temp[r] = a[rind];
			r++;
			rind++;
		}
	}
	for (int a0 = 0; a0 < q; a0++){
		int m;
		cin >> m;
		cout << temp[m] << '\n';
	}
	
	/*while (q--)
	{
		int index;
		cin >> index;
		
	}*/
	return 0;
}

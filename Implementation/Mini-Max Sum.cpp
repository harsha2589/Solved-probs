#include <map>
#include <set>
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
	long int a;
	long int b;
	long int c;
	long int d;
	long int e;
	
	cin >> a >> b >> c >> d >> e;
	long int a1 = (a + b + c + d),
		a2 = (a + b + c + e),
		a3 = (a + b + d + e),
		a4 = (a + c + d + e),
		a5 = (b + c + d + e);
	vector<long int> arr(5);
	arr[0] = a1;
	arr[1] = a2; 
	arr[2] = a3;
	arr[3] = a4;
	arr[4] = a5;
	sort(arr.begin(), arr.end());
	cout << arr[0] << ' ' << arr[4] << '\n';
	return 0;
}

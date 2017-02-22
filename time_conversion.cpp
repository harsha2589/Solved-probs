#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string time;
	cin >> time;
	bool flag = 0;
	if (time[time.length() - 2] == 'P')
		flag = 1;
	int hr = (time[0] - '0') * 10 + (time[1] - '0');
	int hr24;
	if (flag == 1 && hr == 12)
	{
		hr24 = hr;
	}
	else if (flag == 0 && hr == 12)
	{
		hr24 = 0;
	}
	else if (flag == 1)
	{
		hr24 = hr + 12;
	}
	else hr24 = hr;
	string time24(time, 2,time.length()-4);
	cout << setw(2) <<setfill('0')<< hr24;
	cout << time24 << '\n';

	return 0;
}

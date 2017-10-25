//26720012 		Estevam 	112A - 11 	GNU C++11 	Accepted 	30 ms 	2048 KB 	2017-04-28 16:25:32
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

	string one, two;
	cin >> one >> two;
	std::transform(one.begin(), one.end(), one.begin(), ::tolower);
	std::transform(two.begin(), two.end(), two.begin(), ::tolower);
	if (one > two)
		printf("1\n");
	else if (two > one)
		printf("-1\n");
	else if (two == one)
		printf("0\n");
    return 0;
}
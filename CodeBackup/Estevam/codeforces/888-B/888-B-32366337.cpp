#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main (void) {
  	fastcin;
  	int cntright, cntup;
  	cntright = 0;
  	cntup = 0;
  	int n;
  	cin >> n;
  	for(int i=0;i<n;i++){
  		char c;
  		cin >> c;
  		if(c == 'R')
  			cntright++;
  		if(c == 'L')
  			cntright--;
  		if(c == 'U')
  			cntup++;
  		if(c == 'D')
  			cntup--;
  	}
  	n -= abs(cntup);
  	n -= abs(cntright);
  	cout << n << endl;
  
	return 0;
}
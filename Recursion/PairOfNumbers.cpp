#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
//min steps to reach n from x,y
//f(x,y)=1+min(f(x+y,y),f(x,x+y))
//f(n,y) or f(x,n)=0
//f(t,p) or f(p,t) where p,t are greater than n:INVALID
//take invalid as infinity
//as minimum lete time this will never be the ans
int n;
int f(int x, int y) {
	if (x > n or y > n) {
		return 1e8;
	}
	if (x == n or y == n) {
		return 0;
	}
	//curent state f(x,y)
	//below is the path where i go to x+y,y or x,x+y
	//opt1=x+y,y and opt2=x,x+y
	int opt1 = f(x + y, y);
	int opt2 = f(x, x + y);
	int ans = 1 + min(opt1, opt2);
	return ans;
}
int main() {
	cin >> n;
	//recursion from front
	//starting point
	cout << f(1, 1) << endl;
	return 0;
}
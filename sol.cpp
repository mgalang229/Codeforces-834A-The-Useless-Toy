#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	char start, end;
	cin >> start >> end;
	int n;
	cin >> n;
	char down = (char) 118;
	char left = (char) 60;
	char up = (char) 94;
	char right = (char) 62;
	string ans = "";
	int move = n % 4;
	if (start == up) {
		// if start is ^
		// check if clockwise, counter-clockwise, or undefined
		char cw[] = {up, right, down, left};
		char ccw[] = {up, left, down, right};
		if (end == cw[move]) {
			ans += "cw";
		}
		if (end == ccw[move]) {
			ans += "ccw";
		}
	} else if (start == down) {
		// if start is v
		// check if clockwise, counter-clockwise, or undefined
		char cw[] = {down, left, up, right};
		char ccw[] = {down, right, up, left};
		if (end == cw[move]) {
			ans += "cw";
		}
		if (end == ccw[move]) {
			ans += "ccw";
		}
	} else if (start == left) {
		// if start is <
		// check if clockwise, counter-clockwise, or undefined
		char cw[] = {left, up, right, down};
		char ccw[] = {left, down, right, up};
		if (end == cw[move]) {
			ans += "cw";
		}
		if (end == ccw[move]) {
			ans += "ccw";
		}
	} else {
		// if start is >
		// check if clockwise, counter-clockwise, or undefined
		char cw[] = {right, down, left, up};
		char ccw[] = {right, up, left, down};
		if (end == cw[move]) {
			ans += "cw";
		}
		if (end == ccw[move]) {
			ans += "ccw";
		}
	}
	// check if it contains both "cw" and "ccw" because it means undefined
	// otherwise, output the answer
	cout << ((int) ans.size() <= 3 ? ans : "undefined") << '\n';
	return 0;
}

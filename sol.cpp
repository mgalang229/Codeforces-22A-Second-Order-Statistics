#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);                 
	int n;
	cin >> n;
	if (n <= 1) {
		// if n <= 1 then print NO because there is no 2nd element
		cout << "NO\n";
		return 0;
	}
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// store the smallest value
	int mn = *min_element(a, a + n);
	int ans = INT_MAX;
	bool checker = false;
	for (int i = 0; i < n; i++) {
		if (a[i] != mn) {
			// if a[i] != to the smallest value, start comparing values
			ans = min(ans, a[i]);
			checker = true;
		}
	}                                      
	if (checker) {
		// if checker is true, then there is a second order statistics
		cout << ans;
	} else {
 		// otherwise, the elements in the list are equal
		cout << "NO";
	}   
	cout << '\n';
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		if (n < 2) {
			cout << 0 << '\n';
			continue;
		}
		int total_cards = 2;
		int added = 5;
		while (total_cards + added <= n) {
			total_cards += added;
			added += 3;
		}
		int cnt = 0;
		added -= 3;
		//cout << total_cards << " " << added << '\n';
		while (n - total_cards >= 0) {
			//cout << n << " " << total_cards << '\n';
			n -= total_cards;
			cnt++;
			while (total_cards > n && total_cards > 2) {
				total_cards -= added;
				if (added == 5) {
					added = 0;
				} else {
					added -= 3;
				}
			}
		}
		//cout << '\n';
		cout << cnt << '\n';
	}
	return 0;
}

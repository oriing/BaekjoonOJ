#include <iostream>

int F(int a, int b, int l, int r) {
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		if (l <= i && i <= r) {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int a, b, k, x;

	std::cin >> a >> b >> k >> x;
	int result = F(a, b, k - x, k + x);
	switch (result) {
	case 0:
		std::cout << "IMPOSSIBLE";
		break;
	default:
		std::cout << result;
	}


	return 0;
}

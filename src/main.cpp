#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto a = int{}, b = int{}, n = int{};
	cin >> a >> b >> n;

	if (b <= a) {
		a %= b;
	}

	auto c = int{ 0 };
	auto ans = int{};
	while (c < n) {
		a *= 10;
		ans = a / b;
		a %= b;

		++c;
	}

	cout << ans;

	return 0;
}
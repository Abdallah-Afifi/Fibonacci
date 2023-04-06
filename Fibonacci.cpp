#include <iostream>
#define ull unsigned long long

using namespace std;

int main() {
	int N = 0;
	int t1 = 0, t2 = 1, n;

	cin >> N;

	if (N == 1) {
		cout << t1;
	}
	else if (N == 0) {
		exit;
	}
	else {
		cout << t1 << " " << t2 << " ";

		n = t1 + t2;

		for (int i = 0; i < N-2; i++) {
			cout << n << " ";
			t1 = t2;
			t2 = n;
			n = t1 + t2;
		}
	}
     return 0;
}


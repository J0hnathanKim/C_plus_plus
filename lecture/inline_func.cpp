#include <iostream>
using namespace std;
inline int odd(int x) {
	return (x % 2);
}
int main() {
	int sum = 0;

	for (int i = 1; i <= 10000; i++) {
		if ((i%2))
			sum += i;
	}
	cout << sum;
}

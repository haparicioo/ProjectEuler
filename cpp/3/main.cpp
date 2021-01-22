#include <iostream>

using namespace std;

bool is_prime(int n) {
	if (n == 2) return true;
	if (n == 1 || n%2 == 0) return false;

	int divisible_by = 0;
	for (int i=1; i<=n; i++) {
		if(n%i == 0) divisible_by++;

	}
	return divisible_by == 2;
}

int main() {
	int i = 2;
	long int remaining = 600851475143;
	while(true) {
		if (is_prime(i) && remaining%i == 0) {
			remaining = remaining/i;
			cout<<i<<endl;
		}
		i++;

		if(remaining==1) break;
	}
}

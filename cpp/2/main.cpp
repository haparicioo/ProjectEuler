#include <iostream>

using namespace std;

int fibonacci(int n) {
	if(n==1||n==0) {
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int sum = 0;
	int i=0;
	while(true) {
		int fib = fibonacci(i);
		if(fib%2 == 0) sum+= fib;

		if(fib > 4000000) break;
		i++;
	}
	cout<<sum<<endl;
}

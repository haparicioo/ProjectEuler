#include <iostream>

using namespace std;

int main(){
	int sumOFsquares = 0;
	int squareOfsum = 0;

	for(int i=1; i<=100; i++) {
		sumOFsquares += i * i;
		squareOfsum += i;
	}

	squareOfsum = squareOfsum * squareOfsum;

	cout<< squareOfsum - sumOFsquares << endl;
}

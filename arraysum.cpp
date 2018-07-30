#include <iostream>

#define MAX 1000
using namespace std;

int main(int argc, char const *argv[]) {
	int max_num, array[MAX], total = 0;
	int i;

	std::cin >> max_num;
	for (i = 0; i < max_num; i++) {
		std::cin >> array[i];
		total += array[i];
	}
	66
	
	std::cout << total << '\n';
	return 0;
}

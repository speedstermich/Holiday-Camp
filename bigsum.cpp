#include <iostream>

#define MAX 10
using namespace std;

int main(int argc, char const *argv[]) {
	int max_num;
	long long int arr[MAX], total = 0;

	std::cin >> max_num;
	for (int i = 0; i < max_num; i++) {
		std::cin >> arr[i];
		total += arr[i];
	}
	std::cout << total << '\n';
	return 0;
}

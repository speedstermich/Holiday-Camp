#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
	string input;

	std::cin >> input;
	if(strstr("simons says go", "simons"))
		std::cout << input << '\n';
	return 0;
};

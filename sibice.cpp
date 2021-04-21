#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int number, width, lenght, user;
	double max_size;

	std::cin >> number;
	std::cin >> width;
	std::cin >> lenght;
	max_size = (width*width)+(lenght*lenght);
	//std::cout << max_size << '\n';
	while(number--)
	{
		std::cin >> user;
		if (user > width) {
			if (user > lenght) {
				if (user > max_size) {
					std::cout << "NE";
				}
			}
		}
		else{
			std::cout << "DA";
		}
		//number--;
	}
	return 0;
}

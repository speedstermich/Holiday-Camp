#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	int count, i;
  	string input;
	//char compare[] = "Simon says";

	std::cin>>count;
	getline(cin, input);
	for (i = 0; i < count; i++)
	{
		getline(cin,input);
		if(input.substr(0, 10).compare("simon says") == 0 || input.substr(0, 10).compare("Simon says") == 0)
			cout<< input.substr(11) <<endl;
		else
			cout<<std::endl;
		/*for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < strlen(compare); j++)
			if(input[i] == compare[j])
			{
				for(i = 11; i < strlen(input); i++)
					std::cout <<input[i] ;
			}
		}*/
		//std::cout << '\n';
		//count--;
	}
	return 0;
};

#include <iostream>

int scope_sum()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; i++){
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;
	system("pause");
	return 0;
}

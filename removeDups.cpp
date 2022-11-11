#include <iostream>

void RemoveDups(char* str)
{

	int i = 0;
	do {
		if (str[i] == str[i + 1])
			str[i] = ' ';
		i++;

	} while (str[i]);

}

void task2()
{
	char data[] = "AAA BBB AAA";
	RemoveDups(data);

	std::cout << "Show str: ";
	for (size_t i = 0; data[i] != false; i++)
	{
		std::cout << data[i];
	}
}
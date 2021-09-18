#include <iostream>

void Hanoi(int n, int start, int end);

int main()
{
	Hanoi(3, 1, 3);
	return 0;
}

void Hanoi(int n, int start, int end)
{
	if (n == 1)
	{
		std::cout << start << "->" << end << std::endl;
		return;
	}
	int other = 6 - start - end;
	Hanoi(n - 1, start, other);
	std::cout << start << "->" << end << std::endl;
	Hanoi(n - 1, other, end);
	return;
}

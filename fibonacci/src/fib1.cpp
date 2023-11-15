#include <iostream>

using namespace std;

uint32_t fibonacci(uint32_t n)
{
	if (n > 1)
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
	else if (n = 1)
	{
		return 1;
	}
	else //n <1
	{
		return 0;
	}
}

int main (void)
{
	for (int i = 0; i < 40; i++)  //uint32, max to 47, otherwise data will overflow
	{
		cout <<  "fibonacci[" << i << "] = " << fibonacci(i) << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

uint32_t ftab[48];

uint32_t fibonacci(uint32_t n)
{
	ftab[0] = 1;
	ftab[1] = 1;
	if (n >= 2 && n <= 47)
	{
		cout <<  "fibonacci[0] = " << ftab[0] << endl;
                cout <<  "fibonacci[1] = " << ftab[1] << endl;
  		for (int i = 2; i <= n; i++)
        	{
                	ftab[i] = ftab[i -1] + ftab[i - 2];
			cout <<  "fibonacci[" << i << "] = " << ftab[i] << endl;
        	}
	}
	return 0;
}

int main (void)
{
	fibonacci(39);
	return 0;
}

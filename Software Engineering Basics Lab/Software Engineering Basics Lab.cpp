#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x, n;

	cout << "Input n>1, n=";
	cin >> n;
	cout << "Input x=";
	cin >> x;

	if (x <= 0)
	{
		int sum = 0;
		for (int i = 0; i <= n - 1; i++)
		{
			sum = sum * (i * i + i);
		}
		cout << sum;
	}
	else
	{
		float sum = 0;
		for (float i = 0; i <= n - 1; i++)
		{
			for (float j = 0; j <= n - 1; j++)
			{
				sum = sum + (x / (i + j));
			}
		}
		cout << sum;
	}
	return 0;
}
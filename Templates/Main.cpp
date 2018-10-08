#include <iostream>

template <typename T>
T min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	if (a > b)
	{
		return b;
	}
}

template <typename Penis>
Penis max(Penis a, Penis b)
{
	if (a > b)
	{
		return a;
	}
	if (b < a)
	{
		return a;
	}
}

template <typename H>
H clamp(H a, H b, H c)
{
	if (c < a)
	{
		return a;
	}
	if (c > b)
	{
		return b;
	}
	if (a < c && b > c)
	{
		return c;
	}
}

int main()
{
	int first = min(10, 17);
	float second = min(90.9f, 20.1f);
	char third = min('p', 'a');

	int fourth = max(6, 12);
	float fifth = max(99.9f, 47.1f);
	char sixth = max('A', '&');

	int seventh = clamp(0, 1, 2);
	float eight = clamp(0.0f, 1.0f, 0.7f);
	char ninth = clamp('a', 'b', 'Z');
	return 0;
}
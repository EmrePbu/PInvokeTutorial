#include <stdio.h>

// burada bu tanimlamalari yapmazsan .cs kisminda [DllImport("NativeLibrary.dll", EntryPoint = "Sum")]
// sekilde 'EntryPoint'leri tanimlaman gerek.
__declspec(dllexport) void Hello(const char*, const int, const int);
__declspec(dllexport) int add(const int, const int);
__declspec(dllexport) void print_prime_factors(int);

void Hello(const char* message, const int count, const int isNewLine) {
	for (int i = 0; i < count; i++)
	{
		if (isNewLine) printf("%d.) Hello %s\n", i, message);
		else printf("Hello %s", message);

	}
}

int add(const int a, const int b) {
	return a + b;
}


void print_prime_factors(int x) {
	int val = 2;
	while (x != 1)
	{
		while (x % val == 0)
		{
			printf("%d ", val);
			x /= val;
		}
		++val;
	}
}

#include <stdio.h>

//__declspec(dllexport) void Hello(const char*, const int*, const int*);
//__declspec(dllexport) int Sum(const int, const int);

void Hello(const char* message, const int* count, const int* isNewLine) {
	for (int i = 0; i < count; i++)
	{
		if (isNewLine)
		{
			printf("Hello %s\n", message);
		}
		else
		{
			printf("Hello %s", message);
		}
	}
}

int Sum(const int a, const int b) {
	return a + b;
}
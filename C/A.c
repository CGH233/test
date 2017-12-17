#include <stdio.h>
int main ()
{
	int i = 0;
	for (;i < 100;i++){
		if (i == 2 || i == 3 || i == 5 || i == 7)
			printf("%d ", i);
		if ((i > 10) && (i % 2) && (i % 3) && (i % 5) && (i % 7))
			printf("%d ", i);
	}
	puts("");
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
int main () 
{
	char s[1000] = {0};
	scanf("%s", s);
	int t, i;
	long long a = 0;
	t = strlen(s);
	for (i = 0;i < t;i++){
		if (s[t - i - 1] == '1')
			a += pow(2, i);
	}
	printf("%lld\n", a);
	return 0;
}

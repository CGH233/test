#include <stdio.h>
int main ()
{
	int m, n, t, i, j, a;
	scanf("%d", &m);
	getchar();
	scanf("%d", &n);
	getchar();
	scanf("%d", &t);
	getchar();
	int s[m][n];
	for (i = 0;i < m;i++){
		for (j = 0;j < n;j++){
			scanf("%d", &s[i][j]);
			if (s[i][j] == t)
				a = 1;
		}
	}
	puts("");
	if (a == 1)
		printf("true\n");
	else
		printf("false\n");
	return 0;
}	

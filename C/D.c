#include <stdio.h>
void px (int s[], int n)
{
	int i, tmp;
	for (i = 0;i < n;i++){
		while (s[i]){
			if (s[i] > s[i + 1]){
				tmp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = tmp; 
			}
		}
	}
}
int main ()
{
	int m, n, i, z;
	scanf("%d", &m);
	int a[m];
	for (i = 0;i < m;i++)
		scanf("%d", &a[i]);
//	printf("%d", a[0]);
	scanf("%d", &n);
//	printf("%d", n);
	z = m + n;
//	printf("%d", b[0]);
	int	c[z];
	for (i = 0;i < n;i++)
		scanf("%d", &c[i]);
	for (i = 0;i < z;i++){
		if (i >= n)
			c[i] = a[i - n - 1];
	}
	printf("%d", a[i]);
	px(c,z);
	for (i = 0;i < z;i++)
		printf("%d", c[i]);
	return 0;
}

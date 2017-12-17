#include <stdio.h>
int aa (const int a[], int i, int tg)
{
	int s = 0;
	s = aa(a, i - 1, tg) + a[i];
//	if (s != tg)
//		s = aa(a, i - 1) - a[i];	
	return s;
}	
int bb (const int a[], int i, int tg)
{
	int j = 0, s;
	while(s = aa(a, i, tg)){
		if (s == tg)
			j++;
	}
	return j;
}
int main ()
{
	int n, tg, i, sum = 0;
	scanf("%d %d", &n, &tg);
	int a[n];
	for (i = 0;i < n;i++){
		scanf("%d", &a[i]);
	} 
	printf("%d", bb(a, n, tg));
	return 0;
}

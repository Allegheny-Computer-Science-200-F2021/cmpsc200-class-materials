#include <stdio.h>
int main(){
	int alpha = 10;
	int *p1 = &alpha;
	int **p2 = &p1;
	**p2 = 20;
	printf("%p\t%d\n", &alpha, alpha);
	printf("%p\t%p\t%d\n", &p1, p1, *p1);
	printf("%p\t%p\t%d\n", &p2, p2, **p2);
	return 0;
}
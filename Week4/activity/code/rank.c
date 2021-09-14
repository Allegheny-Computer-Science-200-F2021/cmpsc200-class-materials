#include <stdio.h>
#define SIZE 3
int main(){
	int a[SIZE] = {4,7,5};
	int m1, m2 = 0;
	for (int i = 0; i < SIZE; i++){
		if (m1 < a[i]){
			m2 = m1;
			m1 = a[i];
		}
		if (m2 < a[i] && a[i] < m1)
			m2 = a[i];
	}
	printf("%d\t%d\n", m1, m2);
	return 0;
}
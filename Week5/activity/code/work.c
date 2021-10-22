#include <stdio.h>
#include <time.h>
int main(){
	clock_t start, end;
    double cpu_time_used;
    start = clock();
    printf("%lu\n", sizeof(int));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
}
     
     
// Computes volume and area of triangle, volume of cone.
#include <stdio.h>
#define PI 3.1415926535
int main(void) {
	double height, base, area, volume, radius;
 	height = 10; base = 7;
 	radius = base/2.0;
 	area = 0.5*base*height; // area of a triangle
 	volume = PI*radius*radius*height/3.0; // volume of cone
 	printf("Area:%10.5f\nVolume:%9.5f\n",area,volume);
 	return 0;
}

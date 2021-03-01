/*The code calculates the surface area and volume of the cylinder */

#include <stdio.h>
	int main () {

	float radius;
	float height;
	float area;
	float volume;
	const double PI = 3.14159265;

	printf("Please enter the radius length:");
	scanf("%f" , &radius);
	printf("Please enter the height length:");
	scanf("%f" , &height);

	area= (2*(PI*radius*radius)) + ((2*PI*radius)*height);
	volume= PI*radius*radius*height;
	
	printf("The surface area of cylinder is %.2f\n" ,area);
	printf("The volume of cylinder is %.2f" ,volume);
	
	return 0;
}

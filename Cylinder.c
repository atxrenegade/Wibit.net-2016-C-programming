#include <stdio.h>
#define PI 3.14

int main()
{

	float diameter;
	float height;
	float radius;
	float surfaceArea;
	
	printf("Please enter a diameter: ");
	scanf("%f", &diameter);
	printf("Please enter a height: ");
	scanf("%f", &height);
	
	printf("Diameter is %f and height is %f\n", diameter, height);
	
	radius = diameter / 2;
	
	//Surface of a cylinder is 2PIr^2 + 2PIrh
	
	printf("...calculating please wait...\n");
	
	surfaceArea = (2 * PI * (radius * radius)) + (2 * PI * radius * height);
	printf("The surface are of you cylinder is %.3f\n", surfaceArea);
	
	return 0;
}

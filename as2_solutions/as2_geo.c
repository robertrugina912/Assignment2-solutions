//Name: Robert Rugina
#include <stdio.h>

// define the area/volume functions
double square_area(double side) { return side * side; }
double sphere_volume(double radius) { return 1.33333333 * 3.14159 * radius * radius * radius; }
double cube_surface_area(double edge) { return 6 * edge * edge; }

int main(void)
{

  double option;
  double side, radius, edge;

  do {

    // present the menu to the user, accept option input
    printf("1) Compute the area of a square \n");
    printf("2) Compute the volume of a sphere \n");
    printf("3) Compute the surface area of a cube \n");
    printf("4) Quit \n");
    printf("Enter an option: ");
    scanf("%d", &option);
    printf("\n");

    // Handle each menu option by caling the appropriate function
    switch (option)
    {
      case 1:
      printf("Enter the side length (cm): ");
      scanf("%lf", &side);
      printf("Area of the square: %.2f (cm)\n", square_area(side) );
      break;

      case 2:
      printf("Enter the radius (cm): ");
      scanf("%lf", &radius);
      printf("Volume of the sphere: %.2f (cm)\n", sphere_volume(radius) );
      break;

      case 3:
      printf("Enter the edge of the cube: ");
      scanf("%lf", &edge);
      printf("Surface area of the cube: %.2f (cm)\n", cube_surface_area(edge) );
      break;

      case 4:
      printf("Goodbye!\n");
    }
    printf("\n");

  // terminate the loop if the user has selected to quit
  } while (option != 4);
    
  return 0;
}

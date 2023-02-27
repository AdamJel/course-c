#include <stdio.h>

int main() {

  const double mercury = 0.38;
  const double venus = 0.91;
  const double mars = 0.38;
  const double jupiter = 2.34;
  const double saturn = 1.06;
  const double uranus = 0.92;
  const double neptune = 1.19;

  int planet;
  double earth;
  double computed_weight;

  printf("Solar system weight computational program initiated:\n");
  printf("---\n");

  printf("Input your weight on planet Earth: ");
  earth = 90.0;

  printf("Input planet number you want the computation for: ");
  planet = 3;

  switch (planet) {
    case 1:
      computed_weight = earth * mercury;
      break;
    case 2:
      computed_weight = earth * venus;
      break;
    case 3:
      computed_weight = earth * mars;
      break;
    case 4:
      computed_weight = earth * jupiter;
      break;
    case 5:
      computed_weight = earth * saturn;
      break;
    case 6:
      computed_weight = earth * uranus;
      break;
    case 7:
      computed_weight = earth * neptune;
      break;
    default:
      printf("Error input");
      break;
  }

  printf("\nYour weight on chosen planet would be %f\n", computed_weight);
  printf("All systems operational\nProgram terminating\n");
}
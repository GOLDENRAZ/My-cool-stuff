#include <stdio.h>

int main() {
  double earthWeight;
  double planetWeight;
  int planet = 0; 
  
  printf("Welcome to Weight Conversion! Today we are going to convert your Earth Weight into your Dest. Planet Weight\nPlease Enter your weight (in kg): ");
  scanf("%lf", &earthWeight);
  
  printf("\nYour weight is %.2f kg!\n", earthWeight);

  printf("\nChoose your planet:\n1. Mercury\t2. Venus\t3. Mars\n4. Jupiter\t5. Saturn\t6. Uranus\n7. Neptune\nType a number (1-7): ");
  scanf("%d", &planet);

switch (planet){
    case 1:
      printf("\nYou chose Mercury!\n");
      break;
    case 2:
      printf("\nYou chose Venus!\n");
      break;
    case 3:
      printf("\nYou chose Mars!\n");
      break;
    case 4:
      printf("\nYou chose Jupiter!\n");
      break;
    case 5:
      printf("\nYou chose Saturn!\n");
      break;
    case 6:
      printf("\nYou chose Uranus!\n");
      break;
    case 7:
      printf("\nYou chose Saturn!\n");
      break;
    default:
      printf("\nEnter a number 1-7 Please!\n");
      break;
  }

  if (planet == 1) {
    planetWeight = earthWeight * 0.38;
    printf("\nYour Mercury weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 2) {
    planetWeight = earthWeight * 0.91;
    printf("\nYour Venus weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 3) {
    planetWeight = earthWeight * 0.38;
    printf("\nYour Mars weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 4) {
    planetWeight = earthWeight * 2.34;
    printf("\nYour Jupiter weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 5) {
    planetWeight = earthWeight * 1.06;
    printf("\nYour Saturn weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 6) {
    planetWeight = earthWeight * 0.92;
    printf("\nYour Uranus weight will be %.2f kg!\n", planetWeight);
  }
  else if (planet == 7) {
    planetWeight = earthWeight * 1.19;
    printf("\nYour Neptune weight will be %.2f kg!\n", planetWeight);
  }

return 0;
}

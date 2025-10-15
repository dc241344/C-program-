#include <stdio.h>

int main (){

float area, perimeter, side;

printf("Enter the side lenght of the square: ");

scanf("%f", & side);

area = side * side;

perimeter = 4 * side;

printf("Area of the square is : %.2f * %.2f = %.2f\n", side

,side, area);

printf("perimeter of the square is: 4 * %.2f = %.2f\n",

side, perimeter);

return 0;

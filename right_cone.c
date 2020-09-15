#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
   double r, h, v, sa;

   printf("Enter the radius of the cone: ");
   scanf("%lf", &r);

   printf("Enter the height of the cone: ");
   scanf("%lf", &h);

   v = PI * r * r * h / 3;
   sa = PI * r * (r + sqrt((h * h) + (r * r)));

   printf("V=%.2f SA=%.2f (cone: R=%.2f H=%.2f)\n", v, sa, r, h);

   return 0;
}

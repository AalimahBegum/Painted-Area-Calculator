// Painted wall area
#include <stdio.h>
#include <math.h>

void painted_wall(float wall_area, float window_area, float area, int tins, float cost)
{
    printf("The total wall area is %.2f cm^2\n", wall_area);
    printf("The window area is %.2f cm^2\n", window_area);
    printf("The paintable wall area (excluding the window) is %.2f cm^2 \n", area);
    printf("The number of tins required is %d\n", tins);
    printf("The total cost of paint is £%.2f\n", cost);
}

int main(void)
{
    float length = 0;
    printf("Whats the length of rectangular wall in cm: ");
    scanf("%f", &length);

    float height = 0;
    printf("Whats the height of rectangular wall in cm: ");
    scanf("%f", &height);

    float wall_area = height * length;

    float window_length = 0;
    printf("Whats the length of rectangular window in cm: ");
    scanf("%f", &window_length);

    float window_height = 0;
    printf("Whats the height of rectangular window in cm: ");
    scanf("%f", &window_height);

    float window_area = window_length * window_height;
 
    float area = wall_area - window_area;

    int tins = ceil(area / 2000); // ceil round it up not down 

    float cost = tins * 12;

    painted_wall(wall_area, window_area, area, tins, cost); // call the function out 
    return 0;
}

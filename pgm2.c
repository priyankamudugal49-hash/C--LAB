#include<stdio.h>
int main(void)
{
    double lenght,breadth,radius,base,height;
    const double PI=3.14159;
    printf("Enter rectangle lenght and breadth:");
    scanf("%If%If",&lenght,&breadth);
    printf("Rectangle area=%.2If\n",lenght*breadth);
    printf("Rectangle perimeter=%.2If\n",2*(lenght+breadth));
    printf("Enter circle radius:");
    scanf("%If",&radius);
    printf("Circle area=%.2If\n",PI*radius*radius);
    printf("Circle circumference=%.2If\n",2*PI*radius);
    printf("Enter triangle base and height:");
    scanf("%If%If",&base,&height);
    printf("Triangle area=%.2If\n",0.5*base*height);
    return 0;
}

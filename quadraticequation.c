#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    float a,b,c,w,y;
    float A;
    float discriminant, realpart ,imaginarypart  ;
    // if quadratic equation in the form of ax^2 + bx + c
    
    printf("enter the value of a");
    scanf("%f", &a);


    printf("enter the value of b");
    scanf("%f", &b);


    printf("enter the value of c");
    scanf("%f", &c);

    discriminant = (b*b) - (4*a*c) ;


    if (discriminant > 0)

    {
         w = (-b + sqrt(discriminant))/(2*a);
         y = (-b - sqrt(discriminant))/(2*a);
         printf("The roots of a quadratic equation are %f and %f", w ,y);

    }
    else if (discriminant == 0)
    {
        A = (-b) /(2*a);
        printf("The roots of the quadratic equation are %f and %f", A,A);
        
    }
    else if (discriminant < 0)
    {
        
              realpart = (-b)/(2*a);

              imaginarypart = sqrt(discriminant)/(2*a);

              printf("The real part is %f and the imaginary part is %f, ", realpart , imaginarypart);
        
    }
    
else
{
    printf("Roots do not exist");
}

        }
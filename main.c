#include <stdio.h>
#include "myMath.h"

int main()
{
    

    printf("Please insert a real number for calculate a nice functions:\n");
    printf("\n");
    double x = 0;
    
    scanf("%lf", &x);
    
    double ans = 0;
    
    //for the first function
    
    
    ans = sub(add(Exponent((int)x),Power(x,3)),2);
    
    printf("\nThe value of f(x) = e^x + x^3 - 2 at the point %.4lf is: %.4lf\n",x,ans);
   

    //for the second function
    
    

    ans = add(mul(x, 3), mul(Power(x,2), 2));
    
    printf("\nThe value this time of f(x) = 3x + 2x^2 at the point %.4lf is: %.4lf\n",x,ans);
    

    //for the third function
    
    
    
    ans = sub(div(mul(Power(x, 3), 4), 5), mul(x, 2));
    
    printf("\nThe value and maybe third time's a charm of f(x) = (4x^3) / 5 - 2x at the point %.4lf is: %.4lf\n",x,ans);

}






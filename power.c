#include "myMath.h"

#define EXP_NUMBER 2.71828182846
#define ONE 1

//return e^x
double Exponent(int x){
        
	return Power(EXP_NUMBER, x);

	}

//return x^y
double Power(double x, int y){

	double ans = ONE;
        while(y != 0){
             
             if(y < 0){
         
               ans /= x;
             
               y++;
            
            }else{
        
                 ans *= x;

                 y--;
           
            }
         
         }
          
           return ans;
   
}  



	 
	       	    	



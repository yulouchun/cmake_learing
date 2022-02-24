#include <stdio.h> 
#include <stdlib.h>
#include "config.h"



#ifdef USE_MYMATH
    #include "math/mypower.h"
#else
    #include "math.h"
#endif

int main(int argc, char* argv[]){ 

    double inputValue = 3; 
#ifdef USE_MYMATH
    fprintf(stdout, "use my math to calculate"); 
    double outputValue = power(inputValue,2);
#else
    fprintf(stdout, "use lib math to calculate"); 
    double outputValue = pow(inputValue,2);
#endif


    fprintf(stdout, "The square root of %g is %g\n",inputValue, outputValue); 
    return 0; 
} 
#include<stdio.h>
#include<stdlib.h>
#include"config.h"
#ifdef USE_MYMATH
    #include"math/MathFunctions.h"
#else
    #include<math.h>
#endif
int main(int argc,char* argv[])
{
    if(argc<3)
    {
        printf("usage:%s base exponent \n",argv[0]);
        return 1;
    }
    double base =atof(argv[1]);
    int exponent=atoi(argv[2]);
    #ifdef USE_MYMATH
        printf("use our own math lib");
        double result = power(base, exponent);
    #else 
        printf("use  std math lib");
        double result = pow(base, exponent);
    #endif
    printf("%g ^ %d is %g\n",base, exponent,result);
    return 0;
}

#include   <stdio.h>
#include   <stdlib.h>

int   main(int   argc,   char   *argv[])//我把void改成int,符合标准而已
{
       double   d   =   0.0;
       d   =   atof(argv[1]);
       printf("%.2f",   d);
       return   0;
}

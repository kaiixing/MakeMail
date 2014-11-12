#include<stdio.h>

int main(int argc, char* argv[])
{
  FILE *f=fopen(argv[1],"r");
  if(NULL==f)
  {
    printf("fail open file%s\n",argv[1]);
    return -1;
  }

  return 0;
}

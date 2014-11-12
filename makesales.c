#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int args,char* argv[])
{
  if(args<=12)
  {
    printf("args not match");
    return 0;
  }
  time_t timenum=time(NULL);
  struct tm* block;
  block=localtime(&timenum);


  printf("    %d年%d月%d日0点到24点\n    竞彩销售%s\n    传统销售(传统%s +数字彩%s)=%.0f\n    高频销售%s\n    合计：%s",
  block->tm_year+1900,block->tm_mon+1,block->tm_mday-1,argv[2],argv[6],argv[8],atof(argv[6])+atof(argv[8]),argv[10],argv[12]);
  
  
  
  //sale.exe 合计 2215710 0 0 0 17538 0 29877 0 156960 0 2420085 0 
  // 0         1      2   3 4 5  6    7  8    9  10    11  12    13 

  return 0;
}

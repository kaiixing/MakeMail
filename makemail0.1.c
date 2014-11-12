#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main(int argc,char** argv)
{
	if(argc<=1)
	{
	printf("参数说明：a.exe  1新疆总额  2新疆5台高频总余额  3湖南17台总额  4粤彩0点前总余额 ");
	return 0;
	}
	time_t data;
	struct tm *timeinfo;
	time(&data);
	timeinfo=localtime(&data);
	
	char *strHead="<style class=\"fox_global_style\">div.fox_html_content { line-height: 1.5; }div.fox_html_content { font-size: 10.5pt; font-family: 微软雅黑; color: rgb(0, 0, 0); line-height: 1.5; }div.fox_html_content { font-size: 10.5pt; font-family: 微软雅黑; color: rgb(0, 0, 0); line-height: 1.5; }</style> <div style=\"font-size: 15px;\"><span style=\"font-family: 宋体; background-color: rgba(0, 0, 0, 0);\">";
	char str1[22]={0};
	sprintf(str1,"%d月%d日凌晨余额",(timeinfo->tm_mon)+1,timeinfo->tm_mday);
	char *str2="<br><b>新疆2点76台票机余额: <font color=\"#ff0000\">";
	double result_29=atof(argv[1]);
	char *str3="</font></b> <br><font color=\"#808080\">其中：</font> <br><font color=\"#808080\">25台竞彩票机余额:</font> <b><font color=\"#ff0000\">";
	double result_25=0.00f;
	char *str4="</font></b> <font color=\"#808080\">(09169，09186，09185，09191，09148 这5台之外的正余额票机)</font> <br><font color=\"#808080\">5台新疆11选5票机余额:</font> <font color=\"#ff0000\"><b>";
	double result_5=atof(argv[2]);
	result_25=result_29-result_5;
	char str5[256]={0};
	if(timeinfo->tm_wday==6||timeinfo->tm_wday==0)
	sprintf(str5,"</b></font> <font color=\"#808080\">(09169，09186，09185，09191，09148 这5台票机) <br> 46台竞彩票机余额:</font><font color=\"#ff0000\"><b>78.06</b></font> <br> <br><b>湖南%d点22台票机余额: <font color=\"#ff0000\">",1);
	else
	sprintf(str5,"</b></font> <font color=\"#808080\">(09169，09186，09185，09191，09148 这5台票机) <br> <br> 46台竞彩票机余额:</font><font color=\"#ff0000\"><b>78.06</b></font> <br> <br><b>湖南%d点22台票机余额: <font color=\"#ff0000\">",0);
	
	double result_22=atof(argv[3]);
	char *str6="</font></b> <br><font color=\"#808080\">其中：</font> <br><font color=\"#808080\">2台坏掉的票机余额:</font> <font color=\"#ff0000\"><b>";
	double result_2bad=65870.05f;
	char *str7="</b></font> <br><font color=\"#808080\">3台任务票机余额:</font> <font color=\"#ff0000\"><b>";
	double result_3task=2.54f;
	char *str8="</b></font> <br><font color=\"#808080\">其余正常的17台余额:</font> <font color=\"#ff0000\"><b>";
	double result_17=atof(argv[3])-2.54-65870.05;
	char *str9="</b></font> <br> <br><b>粤彩余额:<font color=\"#ff0000\"> ";
	double result_yuecai=atof(argv[4]);
	char *str10=" (0点之前最后一笔交易后的余额)";
	//char str11[128]={0};
	char str11[128]={0};
	//sprintf(str11,"</font></b><br> <br><b>新疆机房5台高频，%d月%d日时段报表，总出票<font color=\"#ff0000\">",(timeinfo->tm_mon)+1,(timeinfo->tm_mday)-1);
	//double result_gpbaobiao_chu=atof(argv[5])+atof(argv[6])+atof(argv[7])+atof(argv[8])+atof(argv[9]);
	//char *str12="</font> 总兑奖<font color=\"#ff0000\">";
	char *str12=NULL;
	//double result_gpbaobiao_dui=atof(argv[10])+atof(argv[11])+atof(argv[12])+atof(argv[13])+atof(argv[14]);
	char *str13="</font></b> <br><br></span></div><div style=\"font-size: 15px;\"><span style=\"font-family: 宋体; background-color: rgba(0, 0, 0, 0);\"><u>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</u>&nbsp;<br>E-mail: chencheng@letoula.com <br>Tell&nbsp;&nbsp:13326777575</span></div>";
	FILE *FileResult=NULL;
	if((FileResult=fopen(".\\result","w"))==NULL)
	{
	  printf("open file fail\n");
	  return -1;
	}
	
	/*printf("%s%s%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%s%.2lf%s%.2lf\
	%s",strHead,str1,str2,result_29,str3,result_25,str4,result_5,str5,result_22,str6,result_2bad,str7,result_3task,
	str8,result_17,str9,result_yuecai,str10,str11,result_gpbaobiao_chu,str12,result_gpbaobiao_dui,str13);*/

	fprintf(FileResult,"%s%s%s%.2lf (%.2lf+%.2lf+78.06)%s%.2lf%s%.2lf%s%.2lf (%.2lf+%.2lf+%.2lf)%s%.2lf%s%.2lf%s%.2lf%s%.2lf%s%s%s%s",
	strHead,str1,str2,result_29+78.06f,result_25,result_5,
	str3,result_25,str4,result_5,str5,
	result_22,result_17,result_2bad,result_3task,str6,result_2bad,str7,result_3task,
	str8,result_17,str9,result_yuecai,str10,str11,str12,str13);
	
	fclose(FileResult);
	system("notepad result");

	return 0;
}

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main(int argc,char** argv)
{
	if(argc<=1)
	{
	printf("����˵����a.exe  1�½��ܶ�  2�½�5̨��Ƶ�����  3����17̨�ܶ�  4����0��ǰ����� ");
	return 0;
	}
	time_t data;
	struct tm *timeinfo;
	time(&data);
	timeinfo=localtime(&data);
	
	char *strHead="<style class=\"fox_global_style\">div.fox_html_content { line-height: 1.5; }div.fox_html_content { font-size: 10.5pt; font-family: ΢���ź�; color: rgb(0, 0, 0); line-height: 1.5; }div.fox_html_content { font-size: 10.5pt; font-family: ΢���ź�; color: rgb(0, 0, 0); line-height: 1.5; }</style> <div style=\"font-size: 15px;\"><span style=\"font-family: ����; background-color: rgba(0, 0, 0, 0);\">";
	char str1[22]={0};
	sprintf(str1,"%d��%d���賿���",(timeinfo->tm_mon)+1,timeinfo->tm_mday);
	char *str2="<br><b>�½�2��76̨Ʊ�����: <font color=\"#ff0000\">";
	double result_29=atof(argv[1]);
	char *str3="</font></b> <br><font color=\"#808080\">���У�</font> <br><font color=\"#808080\">25̨����Ʊ�����:</font> <b><font color=\"#ff0000\">";
	double result_25=0.00f;
	char *str4="</font></b> <font color=\"#808080\">(09169��09186��09185��09191��09148 ��5̨֮��������Ʊ��)</font> <br><font color=\"#808080\">5̨�½�11ѡ5Ʊ�����:</font> <font color=\"#ff0000\"><b>";
	double result_5=atof(argv[2]);
	result_25=result_29-result_5;
	char str5[256]={0};
	if(timeinfo->tm_wday==6||timeinfo->tm_wday==0)
	sprintf(str5,"</b></font> <font color=\"#808080\">(09169��09186��09185��09191��09148 ��5̨Ʊ��) <br> 46̨����Ʊ�����:</font><font color=\"#ff0000\"><b>78.06</b></font> <br> <br><b>����%d��22̨Ʊ�����: <font color=\"#ff0000\">",1);
	else
	sprintf(str5,"</b></font> <font color=\"#808080\">(09169��09186��09185��09191��09148 ��5̨Ʊ��) <br> <br> 46̨����Ʊ�����:</font><font color=\"#ff0000\"><b>78.06</b></font> <br> <br><b>����%d��22̨Ʊ�����: <font color=\"#ff0000\">",0);
	
	double result_22=atof(argv[3]);
	char *str6="</font></b> <br><font color=\"#808080\">���У�</font> <br><font color=\"#808080\">2̨������Ʊ�����:</font> <font color=\"#ff0000\"><b>";
	double result_2bad=65870.05f;
	char *str7="</b></font> <br><font color=\"#808080\">3̨����Ʊ�����:</font> <font color=\"#ff0000\"><b>";
	double result_3task=2.54f;
	char *str8="</b></font> <br><font color=\"#808080\">����������17̨���:</font> <font color=\"#ff0000\"><b>";
	double result_17=atof(argv[3])-2.54-65870.05;
	char *str9="</b></font> <br> <br><b>�������:<font color=\"#ff0000\"> ";
	double result_yuecai=atof(argv[4]);
	char *str10=" (0��֮ǰ���һ�ʽ��׺�����)";
	//char str11[128]={0};
	char str11[128]={0};
	//sprintf(str11,"</font></b><br> <br><b>�½�����5̨��Ƶ��%d��%d��ʱ�α����ܳ�Ʊ<font color=\"#ff0000\">",(timeinfo->tm_mon)+1,(timeinfo->tm_mday)-1);
	//double result_gpbaobiao_chu=atof(argv[5])+atof(argv[6])+atof(argv[7])+atof(argv[8])+atof(argv[9]);
	//char *str12="</font> �ܶҽ�<font color=\"#ff0000\">";
	char *str12=NULL;
	//double result_gpbaobiao_dui=atof(argv[10])+atof(argv[11])+atof(argv[12])+atof(argv[13])+atof(argv[14]);
	char *str13="</font></b> <br><br></span></div><div style=\"font-size: 15px;\"><span style=\"font-family: ����; background-color: rgba(0, 0, 0, 0);\"><u>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</u>&nbsp;<br>E-mail: chencheng@letoula.com <br>Tell&nbsp;&nbsp:13326777575</span></div>";
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

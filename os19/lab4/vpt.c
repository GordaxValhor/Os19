#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double heron(double a,double b, double c)
{
	double p=(a+b+c)/2;
	double x=p*(p-a)*(p-b)*(p-c);
	return sqrt(x);
}
double volumpt(double h,double a,  double b,double c)
{
	double ab=heron(a,b,c);
	double v=(ab*h)/3;
	return v;
}
int main (int argc,char*argv[])
{
	if (argc!=5) 
	{
		printf("ERRO,cevaR");
		return -1;
	}
	int h=atof(argv[1]);
	int a=atof(argv[2]);
	int b=atof(argv[3]);
	int c=atof(argv[4]);
	double v=vpt(h,a,b,c);
	printf("%f\n",v);
	return 0;

}

#include<stdio.h>
int main()
{
    int num;
	int a[100]; 
	int i=0; 
	int m=0;
	int b; 
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	scanf("%d",&num); 
	while(num>=0) { 
	   b=num%16;
	   a[i++]=b; 
	    num=num/16;
	} 
//	printf("转化为十六进制的数为：0x"); 
	for(i=i-1;i>=0;i--)
	{
	m=a[i];
	printf("%c",hex[m]);
	}
	
	printf("\n"); 
	return 0;
 } 

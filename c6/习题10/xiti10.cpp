#include <stdio.h>
#include <string.h>
int main()
{
	char m[3][80];
	int i,j,a=0,b=0,c=0,d=0,e=0;
	printf("输入");
	for(i=0;i<3;i++)
	{
		gets(m[i]);
		for(j=0;j<80&&m[i][j]!='\0';j++)
		{
			if(m[i][j]>='A'&&m[i][j]<='Z')a++;

     else if(m[i][j]>='a'&&m[i][j]<='z') b++;
            else if(m[i][j]>='0'&&m[i][j]<='9') c++;
            else if(m[i][j]==' ') d++;
            else e++;   
        }
    }
    printf("大写字母%d个\n小写字母%d个\n数字%d个\n空格%d个\n其他字符%d个\n",a,b,c,d,e);
    return 0;
}
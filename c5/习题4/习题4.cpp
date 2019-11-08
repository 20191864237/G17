#include <stdio.h>
int main()
{
	char c;//定义一个c,就是你输入的那一行字符
	int letter=0,space=0,number=0,other=0;//字母 空格 数字 其他
	printf("输入");
	while((c=getchar())!='\n')//按回车键，这个循环才结束，就是从你输入的第一个字符开始循环（开始统计个数），回车就结束。
	{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')//判断你输入的语句是否在a~z，A~Z范围，即判断它是不是字母
	{//花括号尽量多用，少用容易出错
		letter++;//如果它是字母，个数加一
	}
	else if(c>='0'&&c<='9')//如上同理
	{
		number++;
    }
	else if(c==' ')	//这里' '不是空字符，是表示你输入的是空格
	{
		space++;
	}
	else 
	
		other++;
	 
	}
	printf("字母%d个\n数字%d个\n空格%d个\n其他%d个\n",letter,number,space,other);
	return 0;
}








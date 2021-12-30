#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0， c = 0， d = 0; //d用来判断输出ERROR的情况
	char b;
 
	scanf("%d", &a);
	scanf("%c", &b);
 
	while (b != '=')
	{
		scanf("%d", &c);
		switch (b)
		{
		case('+'):a = a + c;
			break;
		case('-'):a = a - c;
			break;
		case('*'):a = a * c;
			break;
		case('/'):
            //判断分母是否为零
			if (c == 0)
			{
				d = 1;
				break;
			}
			else 
                a = a / c;
			break; 
        //如果输入的b不是加减乘除，也输出ERROR             
		default:	
            d = 1;	
			break;
		}
		if (d == 1) 
            break;
		else 
            scanf("%c", &b);	
	} 
 
	if (d == 1)
		printf("ERROR\n");
	else
		printf("%d", a);
 
	return 0;
}
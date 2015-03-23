#include<stdio.h>
void butler(void)
{
printf("Which nobody can deny!");
}
int main(void)
{
printf("For he's a jolly good fellow!\n");
printf("For he's a jolly good fellow!\n");
printf("For he's a jolly good fellow!\n");
butler();
return 0;
}

/*编写一个能够产生下面输出的程序：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
程序中除了main()函数外，要使用两个用户定义的函数;
一个用于把上面的夸奖信息输出一次，
另一个用于把最后一行输出一次*/

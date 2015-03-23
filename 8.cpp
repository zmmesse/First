#include <stdio.h> 
void two()
{
printf("two\n");
}

void one_three()
{
printf("one\n");
two();
printf("three\n");
}
int main()
{
printf("starting now!\n");
one_three();
printf("done!");
}
/*编写一个程序，程序中要调用名为one_three()的函数。
该函数要在一行中显示单词"one",再调用Two()函数，然后
再在另一行总灰姑娘显示单词"three"。函数two()应该能
在一行中显示单词"two"。main()函数应该在调用one_three()
函数之前显示短语"starting now:",函数调用之后要显示"done!"。
这样，最后的输出结果应该如下所示：
starting now:
one
two
three
done!
*/ 


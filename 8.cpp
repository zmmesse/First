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
/*��дһ�����򣬳�����Ҫ������Ϊone_three()�ĺ�����
�ú���Ҫ��һ������ʾ����"one",�ٵ���Two()������Ȼ��
������һ���ܻҹ�����ʾ����"three"������two()Ӧ����
��һ������ʾ����"two"��main()����Ӧ���ڵ���one_three()
����֮ǰ��ʾ����"starting now:",��������֮��Ҫ��ʾ"done!"��
����������������Ӧ��������ʾ��
starting now:
one
two
three
done!
*/ 


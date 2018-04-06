#include<stdio.h>

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("您输入的整数用十六进制表示为： %#08.8X\n", num);
    int handle1 = ((num >> 24) & 255) + (num << 24);        //处理高八位和第八位  也可以直接用十六进制进行位运算
    int handle2 = ((num >> 16) & 255) << 8;                 //处理次高八位
    int handle3 = (((num << 16) & 4278190080) >> 8) & 16711679;       //处理次低八位
    printf("转换后为：%#08.8X", handle3 + handle2 + handle1);

    return 0;
}
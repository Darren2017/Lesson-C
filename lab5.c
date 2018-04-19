#include<stdio.h>

int main()
{
    short num[4];
    unsigned short unum[4];
	int i;
    printf("请输入四个短整型数（数的范围-32768，32767）：");
    for(i = 0; i < 4; i++){             //用for循环读入四个数     这四个数用数组来实现
		scanf("%d", &num[i]);   
	}
    //scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
    for(i = 0; i < 4; i++){                         //定义一个新的数组  usum  类型是无符号的   用for循环将读入的数据赋值给这个新的数组
        unum[i] = (unsigned short)num[i];
    }

    unsigned short umax = unum[0], umin = unum[0];        //表示最大最小数
    int mmax = 0, mmin = 0;         //表示最大最小数对应的下标
    for(i = 0; i < 4; i++){            //用一个for循环求出最大最小数（的下标）   和你的一样  这个不用管
        if(umax < unum[i]){
            umax = unum[i];
            mmax = i;
        }
        if(umin > unum[i]){
            umin = unum[i];                                 //用数组实现的好处是你可以直接用一个for求出下标   然后有符号无符号的最值就都有了
            mmin = i;
        }
    }

    printf("最大的无符号数是%u, 对应的输入是%d\n", unum[mmax], num[mmax]);       //输出
    printf("最小的无符号数是%u, 对应的输入是%d\n", unum[mmin], num[mmin]);
    printf("它们的差是%d", unum[mmax] - unum[mmin]);
    return 0;
}
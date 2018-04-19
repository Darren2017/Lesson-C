#include<stdio.h>

int main()
{
    short num[4];
    unsigned short unum[4];
	int i;
	printf("请输入四个短整型数（数的范围-32768，32767）：\n");
	for(i = 0; i < 4; i++){
		scanf("%d", &num[i]);
	}
    for(i = 0; i < 4; i++){
        unum[i] = (unsigned short)num[i];
    }

    unsigned short max = unum[0], min = unum[0];        //表示最大最小的无符号数
    int mmax = 0, mmin = 0;								//表示最大最小的无符号数对应的下标
    for(i = 0; i < 4; i++){
        if(max < unum[i]){
            max = unum[i];
            mmax = i;
        }
        if(min > unum[i]){
            min = unum[i];
            mmin = i;
        }
    }

    printf("最大的无符号数是%u, 对应的输入是%d\n", unum[mmax], num[mmax]);
    printf("最小的无符号数是%u, 对应的输入是%d\n", unum[mmin], num[mmin]);
    printf("它们的差是%u", unum[mmax] - unum[mmin]);
    return 0;
}
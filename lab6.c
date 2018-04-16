#include<stdio.h>

int main()
{
    int N, M = 0;
    scanf("%d", &N);
    int n = N;
    int cnt = 0;
    while(N != 0){
        M = M * 10 + N % 10;
        N = N / 10;
    }
    if (n == M){
        printf("是回文数");
    }else{
        printf("不是回文数");
    }

    return 0;
}
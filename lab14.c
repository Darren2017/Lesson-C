#include<stdio.h>
#define N  5

int main()
{
    int a[N], *p[N];
    for(int i = 0; i < N; i++){
        p[i] = &a[i];
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            if(*p[i] > *p[j]){
                int *q;
                q = p[i];
                p[i] = p[j];
                p[j] = q;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%-4d", *p[i]);
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%-4d", a[i]);
    }
}
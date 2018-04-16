#include<stdio.h>
#include<stdlib.h>

void bsort1(int a[],int n);
void bsort2(int a[],int n);

int main()
{
    int N, M = 0;
    int input = 0;
    int num[4];
    scanf("%d", &N);
    if(N < 1000 || N > 9999){
        printf("the num you input is illegal");
        return 0;
    }
    for(int i = 0; i < 4; i++){
        num[i] = N % 10;
        M = M * 10 + N % 10;
        N = N / 10;
    }
    printf("%d\n", M);
    bsort1(num, 4);
    printf("max:");
    for(int i = 0; i < 4; i++){
       input = input * 10 + num[i];
    }
    printf("%d\n", input);
    bsort2(num, 4);
    printf("min:");
    input = 0;
    for(int i = 0; i < 4; i++){
        input = input * 10 + num[i];
    }
    printf("%d\n", input);

    return 0;
}

void bsort1(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]>a[j-1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

void bsort2(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
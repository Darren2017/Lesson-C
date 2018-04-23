#include<stdio.h>
#include<math.h>

int pre(int x);
void swap(int a, int b);

int main()
{
    int a, b, cnt = 0;
    printf("please input two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)   swap(a, b);
    for(int i = a; i <= b; i++){
        if(pre(i)){
            printf("%-4d   ", i);
            cnt++;
            if(cnt % 9 == 0){
                printf("\n");
            }
        }
    }
    printf("\nthe number of prime number is %d", cnt);
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp; 
}

int pre(int x)
{
    int k = 2;
    while(k <= (int)sqrt(x)){
        if(x % k == 0){
            return 0;
        }
        k++;
    }
    return 1;
}
#include<stdio.h>

int main()
{
    int a[20] = {0,1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};
    int bucket[50] = {0};
    for(int i = 0; i < 20; i++){
        bucket[a[i]]++;
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < bucket[i]; j++){
            printf("%d", i);
        }
    }
}
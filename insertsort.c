#include<stdio.h>

void insert(int*a,int n);
void insert2(int*a,int n);

int main(void)
{
    int a[]={8,7,6,5,4,3,2,1};
    int i;

    insert(a, 8);
    printf("after:\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void insert(int *a,int n){
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i]; 
        for(j=i;j>0 && a[j-1]>key;j--) 
        {
            a[j] = a[j-1]; 
        }
        a[j] = key; 
    }
}

void insert2(int *a, int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key = a[i];
        for(j = i; j > 0 && a[j - 1] < key; j--){
            a[j] = a[j -1];
        }
        a[j] = key;
    }
}
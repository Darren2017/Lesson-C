#include<stdio.h>

void mergesort(int a[], int L, int R);
void merger(int a[], int L, int M, int R);

int main(void)
{
    int a[]={8,7,6,5,4,3,2,1};
    int i;

    mergesort(a,0, 7);
    printf("after:\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void mergesort(int a[], int L, int R){
    if(L == R){
        return;
    }else{
        int M = (L + R) / 2;
        mergesort(a, L, M);
        mergesort(a, M + 1, R);
        merger(a, L, M + 1, R);
    }
}

void merger(int a[], int L, int M, int R){
    int letf_size = M - L;
    int right_size = R - M + 1;
    int left[letf_size];
    int right[right_size];
    int i, k, j;

    for(i = L; i < M; i++){
        left[i - L] = a[i];
    }
    for(i = M; i <= R; i++){
        right[i - M] = a[i];
    }

    i = 0, k = L, j = 0;
    while(i < letf_size && j < right_size){
        if(left[i] < right[i]){
            a[k] = left[i];
            i++;
            k++;
        }else{
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while(i < letf_size){
        a[k] = left[i];
            i++;
            k++;
    }
    while(j < right_size){
        a[k] = right[j];
        j++;
        k++;
    }
}
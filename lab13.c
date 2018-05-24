#include<stdio.h>

void bubblesort(int a[], int n);        //冒泡排序
void selectsort(int a[], int n);        //选择排序
void mergersort(int c[], int a[], int b[]);     //阉割版归并排序
void swap(int a[], int i, int j);       //交换
void print(int a[], int b);             //现实

int main()
{
    // int a[] = {1, 4, 5, 3, 2, 8, 9 ,7, 0, 6};
    // int b[] = {12, 4, 5, 7,34, 5, 9, 23, 3, 1};
    int a[10], b[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        scanf("%d", &b[i]);
    }
    int c[20];
    bubblesort(a, 10);
    selectsort(b, 10);
    mergersort(c, a, b);
    print(c, 20);

    return 0;
}

void bubblesort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int flag = 1;
        for(int j = i; j < n; j++){
            if(a[i] > a[j]){
                swap(a, i ,j);
                flag = 0;
            }
        }
        if(flag){
            break;
        }
    }
}

void selectsort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int k = i;
        for(int j = i + 1; j < n; j++){
            if(a[k] > a[j]){
                k = j;
            }
        }
        if(k != i){
            swap(a, i, k);
        }
    }
}

void mergersort(int c[], int a[], int b[]){
    int i = 0, j = 0, k = 0;
    while(i < 10 && j < 10){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }else{
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i < 10){
        c[k] = a[i];
            i++;
            k++;
    }
    while(j < 10){
        c[k] = b[j];
            j++;
            k++;
    }
}

void swap(int s[], int i, int j){
    int temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void print(int a[], int b){
    for(int i = 0; i < b; i++){
        printf("%d\n", a[i]);
    }
}
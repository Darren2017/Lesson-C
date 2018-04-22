#include<stdio.h>

void selectsort(int n, char a[]);
void swap(char s[], int i, int j);

int main()
{
    char a[20] = "9876543210";
    selectsort(10, a);   
    printf("%s", a);
}

void selectsort(int n, char a[]){
    for(int i = 0; i < n; i++){
        int k = i;
        for(int j = k + 1; j < n; j++){
            if(a[k] > a[j]){
                k = j;
            }
        }
        swap(a, k, i);
    }
}

void swap(char s[], int i, int j){
    int tem;
    tem = s[i];
    s[i] = s[j];
    s[j] = tem;
}
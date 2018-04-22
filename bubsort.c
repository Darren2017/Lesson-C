#include<stdio.h>

void bubsort(int n, char a[]);
void bubsort1(int n, char a[]);
void swap(char s[], int i, int j);

int main()
{
    char a[20] = "987654321";
    bubsort1(9, a);   
    printf("%s", a);
}

void bubsort(int n, char a[]){
    for(int i = 1; i < n ; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] < a[j + 1]){
                swap(a, j, j + 1);
            }
        }
    }
}

void bubsort1(int n, char a[]){
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[j - 1]){
                swap(a, j, j - 1);
            }
        }
    }
}

void swap(char s[], int i, int j){
    int temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
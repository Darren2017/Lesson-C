#include<stdio.h>

void bubsort(int n, char a[]);
void bubsort1(int n, char a[]);
void swap(char s[], int i, int j);

int main()
{
    char a[20] = "987654321";
    bubsort(9, a);   
    printf("%s", a);
}

void bubsort(int n, char a[]){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a, i, j);
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
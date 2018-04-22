#include<stdio.h>

//快速排序
void quicksort(char s[], int low, int hign);
void swap(char s[], int i, int j);

int main()
{
    char a[20];
    int n;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        scanf("%c", &a[i]);
    }
    quicksort(a, 0, n - 1);   
    printf("%s", a);
}

void quicksort(char s[], int low, int hign){
    int i;
    int last;
    if(low < hign){
        last = low;
        for(i = low + 1; i <= hign; i++){
            if(s[i] < s[low]){
                swap(s, ++last, i);
            }
        }
        swap(s, last, low);
        quicksort(s, low, last - 1);
        quicksort(s, last + 1, hign);
    }
}

void swap(char s[], int i, int j){
    int temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
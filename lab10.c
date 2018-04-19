// 用数学逻辑实现
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int n, cube, mid, outnum;
//     scanf("%d", &n);
//     cube = pow(n, 3);
//     mid = cube / n;
//     outnum = n / 2;
//     if(n % 2 == 0){
//         int num = outnum;
//         for(int i = 1; i <= outnum; i++){
//             printf(" %d +", mid - num * 2 + 1);
//             num--;
//         }
//         for(int i = 1; i <= outnum; i++){
//             printf(" %d +", mid + i * 2 - 1);
//         }
//         printf("\b= %d^3", n);
//     }else{
//         int num = outnum;
//         for(int i = 1; i <= outnum; i++){
//             printf(" %d +", mid - num * 2);
//             num--;
//         }
//         printf(" %d +", mid);
//         for(int i = 1; i <= outnum; i++){
//             printf(" %d +", mid + i * 2);
//         }
//         printf("\b= %d^3", n);
//     }
// }
// 
// 用双重循环实现
// #include<stdio.h>

// int main()
// {
//     int n, cube;
//     scanf("%d", &n);
//     cube = n * n * n;
//     for(int i = 1; ;i +=2){
//         int sum = 0;
//         for(int j = i; j < i + n * 2; j += 2){
//             sum += j;
//         }
//         if(sum == cube){
//             for(int j = i; j < i + n * 2; j += 2){
//                 printf(" %d +", j);
//             }
//             printf("\b = %d^3", n);   
//             break;
//         }
//     }

//     return 0;
// }
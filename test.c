#include <stdio.h> 
int main ( )
{
   char c[2][5] = { "6938" , "8254" };
   char *p[2];
   int i, j, s=0;
   for (int i = 0; i < 2; i++){
        p[i] = c[i];
   }
   for ( i = 0; i < 2; i++){
        for ( j =0; p[i][j] > 0; ){ 
            s = 10 * s + p[i][j] - '0';
            j += 2;
        }
   }
   printf ( " %d \n " , s );

   return 0;
}

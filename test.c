#include <stdio.h>

void swap(int s[], int i, int j){
    int tem;
    tem = s[i];
    s[i] = s[j];
    s[j] = tem;
}

void selectsort(int n, int a[]){
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


int main()
{

    int c[20] = {0},i,j,m,k,t,f,d,z;
	
	int a[11] = {0};
	printf("The input number group A is :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);


	int b[11] = {0};
	printf("The input number group B is :\n");
	for(j=0;j<10;j++)
		scanf("%d",&b[j]);




	for(d=1;d<10;d++)//开始冒泡排序
		for(i=0;i<9;i++)//定义循环次数
			if(a[i]<a[i+1])//判断相邻两数的大小
			{             //如果小的话则交换
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");


	// for(j=0;j<9;j++)//开始选择排序
	// {
	// 	k=j;//另k为最小值的下标序号
	// 	for(f=j+1;f<10;f++)
	// 		if(b[k]<b[f])
	// 			k=f;
	// 		if(k!=j)//如果发现比j要小的数，交换二者
	// 		{
	// 			t=b[j];
	// 			b[j]=b[k];
	// 			b[k]=t;
	// 		}
	// }
	
    selectsort(20, c);

	for(j=0;j<10;j++)
		printf("%d ",b[j]);
    printf("\n\n");



	//开始两个数组合并
	int cnt = 0;
	c[0]=a[0];
	for(i=1;i<10;i++)
	{		
		if(a[i]==a[i-1]) continue;
		else 
		{
			c[m]=a[i];
			m++;
			cnt++;
		}
	}
	c[m]=b[0];
	for(j=1;j<10;j++)
	{
		if(b[j]==b[j-1]) continue;
		else{
			c[m]=b[j];
			m++;
		    cnt++;
		}
	}


	for(m=0;m<cnt;m++)//开始选择排序
	{
		z=m;//另z为最小值的下标序号
		for(f=m+1;f<10;f++)
			if(c[z]<c[f])
				z=f;
			if(z!=m)//如果发现比m要小的数，交换二者
			{
				t=c[m];
				c[m]=c[z];
				c[z]=t;
			}
	}
	
	printf("\n");
	for(m=0;m<cnt;m++)	
	
	printf("%d ",c[m]);
}
	
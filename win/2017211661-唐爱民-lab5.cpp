#include<stdio.h>

int main()
{
    short num[4];
    unsigned short unum[4];
	int i;
	printf("�������ĸ��������������ķ�Χ-32768��32767����\n");
	for(i = 0; i < 4; i++){
		scanf("%d", &num[i]);
	}
    for(i = 0; i < 4; i++){
        unum[i] = (unsigned short)num[i];
    }

    unsigned short max = unum[0], min = unum[0];        //��ʾ�����С���޷�����
    int mmax = 0, mmin = 0;								//��ʾ�����С���޷�������Ӧ���±�
    for(i = 0; i < 4; i++){
        if(max < unum[i]){
            max = unum[i];
            mmax = i;
        }
        if(min > unum[i]){
            min = unum[i];
            mmin = i;
        }
    }

    printf("�����޷�������%u, ��Ӧ��������%d\n", unum[mmax], num[mmax]);
    printf("��С���޷�������%u, ��Ӧ��������%d\n", unum[mmin], num[mmin]);
    printf("���ǵĲ���%u", unum[mmax] - unum[mmin]);
    return 0;
}
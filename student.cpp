#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#define MAXNUM	100

/*
* * * * * * * * * * * *
*       程序功能       *
* * * * * * * * * * * *

1. 录入每个学生的学号、姓名以及和各科考试成绩

2. 计算每门课程的总分和平均分、最高分以及最低分

3. 计算每个学生的总分和平均分、最高分以及最低分

4. 按优秀（90-100）、良好（80-89）、中等（70-79）、及格（60-69）、不及格（0-59）5个类别，
    对每门课程分别统计每个类别的人数以及所占的百分比

5. 按每个学生的总分由高到低排出名次表

6. 按每个学生的总分由低到高排出名次表

7. 按学号由小到大排出成绩表

8. 按姓名的字典顺序排出成绩表

9. 按学号查询学生排名及其考试成绩

10. 按姓名查询学生排名及其考试成绩

11. 输出每个学生的学号、姓名、各科考试成绩，以及每门课程的总分和平均分

12. 将每个学生的纪录信息写入文件

13. 从文件中读出每个学生的纪录信息并显示
*/

int main() {
    int num = 0;
    STUDENT student[MAXNUM];
    SystemSet();
    UserInterface();
    while (1) {
        switch (ScanfSet()) {
            case 0:
                exit(0);
            case 1:
                system("cls");
                readDate(student, &num);
                break;
            case 2:
                system("cls");
                ComputeScoreBySubject(student, &num);
                break;
            case 3:
                system("cls");
                ComputeScoreByStudent(student, &num);
                break;
            case 4:
                system("cls");
                SortScore(student, &num);
                break;
            case 5:
                system("cls");
                qsort(student, num, sizeof(STUDENT), orderDecrease);
                PrintAfterSort(student ,&num);
                break;
            case 6:
                system("cls");
                qsort(student, num, sizeof(STUDENT), orderIncrease);
                PrintAfterSort(student, &num);
                break;
            case 7:
                system("cls");
                qsort(student, num, sizeof(STUDENT), orderNo);
                PrintAfterSort(student, &num);
                break;
            case 8:
                system("cls");
                qsort(student, num, sizeof(STUDENT), orderName);
                PrintAfterSort(student, &num);
                break;
            case 9:
                system("cls");
                SearchByNo(student, &num);
                break;
            case 10:
                system("cls");
                SearchByName(student, &num);
                break;
            case 11:
                system("cls");
                GetSum(student, &num);
                PrintAfterSort(student, &num);
                break;
            case 12:
                system("cls");
                GetSum(student, &num);
                WriteFile(student, &num);
                break;
            case 13:
                system("cls");
                ReadFile(student, &num);
                GetSum(student, &num);
                PrintAfterSort(student, &num);
                break;
            case 14:
                exit(0);
            default:
                system("cls");
                printf("Please input 0-13\n");
                returnUserFace();
                break;
        }
   }
}

#include <stdio.h>
int main(){
	int sN;
    int clas;
	int markLine;
	int i;
	int j;
	printf("输入学生人数m：");
	scanf("%d",&sN);
	printf("输入课程数n：");
	scanf("%d",&clas);

    int scores[100][100];
    printf("输入标线：");
    scanf("%d", &markLine);

    for (i=0;i<sN;i++) {
        printf("输入第%d位学生的%d门课程成绩：\n", i + 1, clas);
        for (j=0;j<clas;j++) {
            scanf("%d", &scores[i][j]);
        }
    }


	for (j=0;j<sN;j++) {
        int count = 0;
        for (i=0;i<sN;i++) {
            if (scores[i][j] >= markLine) {
                count++;
            }
		}


    printf("第%d门课程达到标线以上的学生人数：%d\n", j + 1, count);
	}
    return 0;
}
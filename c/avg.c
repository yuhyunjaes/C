#include <stdio.h>
int main(void)
{

    int hak = 0;
    int eng = 0;
    int math = 0;
    int mool = 0;

    int hap = 0;
    int avg = 0;

    int max = 0;
    int min = 0;

    printf("학번을 입력하세요: ");
    scanf("%d", &hak);

    printf("영어 점수를 입력하세요: ");
    scanf("%d", &eng);
    min = eng;

    if(eng < min) {
        min = eng;
    }
    if(eng > max) {
        max = eng;
    }

    printf("수학 점수를 입력하세요: ");
    scanf("%d", &math);
    if(math > max) {
        max = math;
    }
    if(math < min) {
        min = math;
    }

    printf("미적분 점수를 입력하세요: ");
    scanf("%d", &mool);
    if(mool > max) {
        max = mool;
    }
    if(mool < min) {
        min = mool;
    }

    hap = eng + math + mool;

    avg = hap / 3;


    printf("학번 %d님의 평균 점수는 :%d \n", hak, avg);
    printf("제일 높은 과목의 점수는 :%d\n", max);
    printf("제일 낮은 과목의 점수는 :%d\n", min);

    

    return 0;
    
}
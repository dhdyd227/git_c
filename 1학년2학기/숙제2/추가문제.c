//1. 입력값으로 학번, 국어, 영어, 수학 점수를 입력 받고 학번, 국어, 영어, 수학, 총점, 평균 을 출력하는 프로그램을 작성한다
#include <stdio.h>
int main(void)
{
    int s; //학번을 입력하시오.
    int k; //국어점수를 입력하시오. 
    int e; //영어점수를 입력하시오.
    int m; //수학점수를 입력하시오.
    int total; //총점
    double avg;   //평균 
 
 printf("학번을 입력하시오:",s);
 scanf("%s",&s);
 
 printf("국어점수:",k);
 scanf("%d",&k);
 
 printf("영어점수:",e);
 scanf("%d",&e);
 
 printf("수학점수:",m);
 scanf("%d",&m);
 
 total=k+e+m;
 avg=total/3;
 printf("총점:%d\n",total) ;
 printf("평균:%lf\n",avg);
 
  system("PAUSE");	
  return 0;
}

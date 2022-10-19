#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int inc(int counter);
int main(int argc, char *argv[]) {
	int i;
	printf("함수 호출전 i=%d\n", i);
	inc(i);
	printf("함수 호출후 i=%d\n",i);
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
 } 
 //int값 지정 안했는데 피피티에는 어떻게 10이 나오나요
 //함수 프로토타이밍 미실행시 컴파일 에러가 납니다 

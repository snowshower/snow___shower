#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COUNT 100000
#define FILE_NAME "1.txt"

int main() {
    // 랜덤 숫자 생성 초기화
    srand(time(NULL));

    // 파일 포인터 선언
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 첫 번째 줄에 수의 개수 작성
    fprintf(file, "%d\n", NUM_COUNT);

    // 랜덤 숫자 생성 후 파일에 쓰기
    for (int i = 0; i < NUM_COUNT; ++i) {
        // -10,000 ~ 10,000 사이의 랜덤 숫자 생성
        int rand_num = (rand() % 20001) - 10000;
        fprintf(file, "%d\n", rand_num);
    }

    // 파일 닫기
    fclose(file);

    printf("파일 '%s'가 성공적으로 생성되었습니다.\n", FILE_NAME);
    return 0;
}


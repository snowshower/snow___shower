#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COUNT 100000
#define FILE_NAME "1.txt"

int main() {
    // ���� ���� ���� �ʱ�ȭ
    srand(time(NULL));

    // ���� ������ ����
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ù ��° �ٿ� ���� ���� �ۼ�
    fprintf(file, "%d\n", NUM_COUNT);

    // ���� ���� ���� �� ���Ͽ� ����
    for (int i = 0; i < NUM_COUNT; ++i) {
        // -10,000 ~ 10,000 ������ ���� ���� ����
        int rand_num = (rand() % 20001) - 10000;
        fprintf(file, "%d\n", rand_num);
    }

    // ���� �ݱ�
    fclose(file);

    printf("���� '%s'�� ���������� �����Ǿ����ϴ�.\n", FILE_NAME);
    return 0;
}


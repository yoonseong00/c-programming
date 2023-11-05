#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
void array_get(int* A, int size);
void array_print(int* A, int size);
int array_sum(int* A, int size);

int main() {
    int A[SIZE];
    int payment;
    srand((unsigned)time(NULL));

    array_get(A, SIZE);
    array_print(A, SIZE);

    payment = array_sum(A, SIZE);
    printf("이번 달 월급총액 = %d \n", payment);

    return 0;
}

void array_get(int* A, int size) {
    int i;
    for (i = 0; i < size; i++)
        A[i] = 1 + rand() % 100;
}
int array_sum(int* A, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += A[i];
    return sum;
}
void array_print(int* A, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%3d ", A[i]);
    printf("\n\n");
}
#include<stdio.h>

typedef struct {

    int roll_no;
} Student;

int main() {

    Student vinayak;

    vinayak.roll_no = 50;

    printf("%d", vinayak.roll_no);

    return 0;
}
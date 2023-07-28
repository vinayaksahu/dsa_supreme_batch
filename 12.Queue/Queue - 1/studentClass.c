#include<stdio.h>

struct studentClass
{
    int roll_no;
};

void initStudent(struct studentClass* vinay) {

    //(*vinay).roll_no = 50;  //initialization
    vinay->roll_no = 50;

    //printf("%d", (*vinay).roll_no); //printing
    printf("%d", vinay->roll_no);
}

int main()
{
    
    struct studentClass vinay;

    initStudent(&vinay);

    return 0;
}


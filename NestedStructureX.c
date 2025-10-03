#include<stdio.h>

struct Hello
{
    int no;
    float marks;
    struct Demo        // Nested
    {
        int i;
        float f;
    }dobj;

};

int main()
{ 
    printf("Size of hello Structure is : %lu\n",sizeof(struct Hello));      // 16
    
    return 0;
}
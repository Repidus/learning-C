/* struct_init.c */

#include <stdio.h>

struct person {
    char name[20];
    char phone[20];
    int age;
};

int main() {
    struct person p = {.age = 20, .name = "Free Lec", .phone = "3142-6702"};

    printf("%s %s %d\n", p.name, p.phone, p.age);

    return 0;
}
/* struct_array_init.c */

struct person {
    char name[20];
    char phone[20];
};

int main() {
    struct person pArray[3] = {
        {"Lee", "333"},
        {"Kim", "555"},
        {"SES", "777"}
    };

    return 0;
}
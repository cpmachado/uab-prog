#include <stdio.h>

int
main(void) {
    char str1[] = "ABC";
    char str2[] = {'A', 'B', 'C', '\0'};
    char str3[] = {65, 66, 67, 0};

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    return 0;
}

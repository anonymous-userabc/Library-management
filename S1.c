#include <stdio.h>

int main()
{
    int h1 = 10, m1 = 30, s1 = 50;
    int h2 = 10, m2 = 30, s2 = 50;

    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    if (h1 > h2) {
        printf("Both are equal\n");
    }
    else if (h1 < h2) {
        printf("Time 2 is greater\n");
    }
    else if (h1 == h2 && m1 > m2) {
        printf("Time 1 is greater\n");
    }
    else if (h1 == h2 && m1 < m2) {
        printf("Time 2 is greater\n");
    }
    else if (h1 == h2 && m1 == m2 && s1 > s2) {
        printf("Time 1 is greater\n");
    }
    else if (h1 == h2 && m1 == m2 && s1 < s2) {
        printf("Time 2 is greater\n");
    }
    else {
        printf("Both times are equal");
    }

    return 0;
}
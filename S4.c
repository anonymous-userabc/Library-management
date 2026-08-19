#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 9;
    int mistake = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] != arr[j]) {
            mistake++;
        }
        j--;
    }
    if (mistake == 0) {
        printf("Perfect parolindrome\n");
    }
    else if (mistake == 1) {
        printf("Parolindrome with 1 mistake");
    }
    else {
        printf("Not a parolindrome");
    }

    return 0;
}
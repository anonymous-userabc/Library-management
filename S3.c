#include <stdio.h>

int main()
{
    char road[10] = {'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L'};

    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &road[i]);
    }
    int energy = 50;

    for (int i = 0; i < 10; i++)
    {

        if (road[i] == 'L')
        {
            energy -= 10;
        }
        else if (road[i] == 'S')
        {
            i++;
        }
        else if (road[i] == 'W')
        {
            energy += 20;
        }

        if (energy <= 0)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("Mission won");
    return 0;
}
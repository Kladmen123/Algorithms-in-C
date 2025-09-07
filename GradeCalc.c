/* Grade Calculator in C */

#include <stdio.h>

int main ()
{
    int less_count;
    int total = 0;

    printf("Сколько у вас уроков?");
    scanf("%d", &less_count);

    if (less_count <=0)
    {
        printf("Количество уроков должно бвть больше чем 0");
        return 1;
    }

    for (int i = 0; i < less_count; i++)
    {
        int grade;
        
        while (1)
        {
            printf("Введите оценку за урок %d (2-5) ", i + 1 );
            scanf("%d", &grade);

            if (grade >= 2 && grade <= 5)
            {
                break;
        }
        else
        {
                printf("Ошибка.оценка должна быть от 2 до 5");
        }
    }
        total += grade;
    }
    float average = (float)total / less_count;
    printf("average = %.2f", average);

}

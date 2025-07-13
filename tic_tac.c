#include <stdio.h>
#include <windows.h>
#include <windows.h>
#include <windows.h>
#include <windows.h>
void num1();
void num2();

int main()
{
    //  char a[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int p1 = 0, p2 = 0;
    char c1 = 0, c2 = 'O';
    int turn = 0;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("Welcome to Tic-Tac-Toe Game! It will be fun, so let's\nbegin.\n");
    printf("\n| %c | %c | %c |\n", a[0], a[1], a[2]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n", a[3], a[4], a[5]);
    printf("|---|---|---|\n");
    printf("| %c | %c | %c |\n\n", a[6], a[7], a[8]);

    for (int t = 1; t < 10; t++)
    {
        if (t % 2 == 1)
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("\nPlayer-1 please enter slot number (1-9) >> ");
            scanf("%d", &p1);
            printf("\n");
            turn = p1 - 1;

            if (a[turn] != 'X' && a[turn] != 'O')
            {
                a[turn] = 'X';
            }
            else
            {
                printf("\nEnter your Number again\n");
                t = t - 1;
            }
        }
        else if (t % 2 == 0)
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("\nPlayer-2 please enter slot number (1-9) >> ");
            scanf("%d", &p2);
            printf("\n");
            turn = p2 - 1;

            if (a[turn] != 'X' && a[turn] != 'O')
            {

                a[turn] = 'O';
            }
            else
            {
                printf("\nEnter your Number again\n");
                t = t - 1;
            }
        }

        num1();

        if (a[0] == '1')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[0]);
        }
        else if (a[0] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[0]);
        }
        else if (a[0] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[0]);
        }

        num1();

        if (a[1] == '2')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[1]);
        }
        else if (a[1] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[1]);
        }
        else if (a[1] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[1]);
        }

        num1();

        if (a[2] == '3')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[2]);
        }
        else if (a[2] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[2]);
        }
        else if (a[2] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[2]);
        }

        num1();
        printf("\n");
        num2();
        printf("\n"); //**************************************************************************

        num1();
        if (a[3] == '4')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[3]);
        }
        else if (a[3] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[3]);
        }
        else if (a[3] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[3]);
        }

        num1();

        if (a[4] == '5')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[4]);
        }
        else if (a[4] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[4]);
        }
        else if (a[4] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[4]);
        }

        num1();

        if (a[5] == '6')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[5]);
        }
        else if (a[5] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[5]);
        }
        else if (a[5] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[5]);
        }
        num1();
        printf("\n");
        num2();
        printf("\n"); //*************************************************************************
        num1();
        if (a[6] == '7')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[6]);
        }
        else if (a[6] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[6]);
        }
        else if (a[6] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[6]);
        }

        num1();
        if (a[7] == '8')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[7]);
        }
        else if (a[7] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[7]);
        }
        else if (a[7] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[7]);
        }

        num1();
        if (a[8] == '9')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
            printf("%c", a[8]);
        }
        else if (a[8] == 'X')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            printf("%c", a[8]);
        }
        else if (a[8] == 'O')
        {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("%c", a[8]);
        }

        num1();
        printf("\n");
        /*
                printf("| %c | %c | %c |\n", a[0], a[1], a[2]);
                printf("_____________\n\n");
                printf("| %c | %c | %c |\n", a[3], a[4], a[5]);
                printf("_____________\n\n");
                printf("| %c | %c | %c |\n\n", a[6], a[7], a[8]);
        */
        if (a[0] == 'X' && a[3] == 'X' || a[0] == 'O' && a[3] == 'O')
        {
            if (a[3] == 'X' && a[6] == 'X' || a[3] == 'O' && a[6] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[1] == 'X' && a[4] == 'X' || a[1] == 'O' && a[4] == 'O')
        {
            if (a[4] == 'X' && a[7] == 'X' || a[4] == 'O' && a[7] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[2] == 'X' && a[5] == 'X' || a[2] == 'O' && a[5] == 'O')
        {
            if (a[5] == 'X' && a[8] == 'X' || a[5] == 'O' && a[8] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[0] == 'X' && a[1] == 'X' || a[0] == 'O' && a[1] == 'O')
        {
            if (a[1] == 'X' && a[2] == 'X' || a[1] == 'O' && a[2] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[3] == 'X' && a[4] == 'X' || a[3] == 'O' && a[4] == 'O')
        {
            if (a[4] == 'X' && a[5] == 'X' || a[4] == 'O' && a[5] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[6] == 'X' && a[7] == 'X' || a[6] == 'O' && a[7] == 'O')
        {
            if (a[7] == 'X' && a[8] == 'X' || a[7] == 'O' && a[8] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[0] == 'X' && a[4] == 'X' || a[0] == 'O' && a[4] == 'O')
        {
            if (a[4] == 'X' && a[8] == 'X' || a[4] == 'O' && a[8] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
        if (a[2] == 'X' && a[4] == 'X' || a[2] == 'O' && a[4] == 'O')
        {
            if (a[4] == 'X' && a[6] == 'X' || a[4] == 'O' && a[6] == 'O')
            {
                c1 = a[turn];
                t = 10;
            }
        }
    }
    if (c1 == 'X')
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("\nPlayer-1 won the game!\n");
    }
    else
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        printf("\nPlayer-2 won the game!\n");
    }

    return 0;
}

//**********************

void num1()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" | ");
}
void num2()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf(" |---|---|---| ");
}
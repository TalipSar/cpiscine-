#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    print_char(int col, int row, int x, int y)
{
        if ((col == 1 && row == 1) || (col == x && row == y && x > 1 && y > 1))
                ft_putchar('A');
        else if ((col == x && row == 1) || (col == 1 && row == y))
                ft_putchar('C');
        else if (col == 1 || col == x || row == 1 || row == y)
                ft_putchar('B');
        else
                ft_putchar(' ');
}

void    rush(int x, int y)
{
        int     row;
        int     col;

        if (x <= 0 || y <= 0)
                return;
        row = 1;
        while (row <= y)
        {
                col = 1;
                while (col <= x)
                {
                        print_char(col, row, x, y);
                        col++;
                }
                ft_putchar('\n');
                row++;
        }
}

int     main(void)
{
        rush(5, 5);
        return (0);
}

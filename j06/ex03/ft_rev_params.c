void    ft_putchar(char c);

int     main(int argc, char** argv)
{
        int icount;
        int i;
        char *str;

        icount = argc - 1;
	while (icount > 0)
        {
                i = 0;
                str = argv[icount];
                while (str[i] != '\0')
                {
                        ft_putchar(str[i]);
                        i++;
                }
                ft_putchar('\n');
                icount--;
        }
        return (0);
}

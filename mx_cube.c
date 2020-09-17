void mx_printchar(char c);

void mx_cube(int n) {
    if (n <= 1)
        return;

    int z = (double)(n / 2) != (int)(n / 2) ? 0 : 1;

    for (int i = 0; i < n / 2 + z; i++)
        mx_printchar(' ');
    
    mx_printchar('+');

    for (int i = 0; i < 2 * n; i++)
        mx_printchar('-');

    mx_printchar('+');
    mx_printchar('\n');
    
    for (int k = 1, i = n / 2, m = (int)(n / 2) * 2 - n / 2;
         i > 0; i--, m--, k++) {
        for (int j = m; j > 0; j--)
            mx_printchar(' ');

        mx_printchar('/');
        
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');

        mx_printchar('/');

        for (int j = 1; j < k; j++)
            mx_printchar(' ');

        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('+');

    for (int i = 0; i < 2 * n; i++)
        mx_printchar('-');

    mx_printchar('+');

    for (int j = 1; j < n / 2 + 1; j++)
        mx_printchar(' ');

    mx_printchar('|');
    mx_printchar('\n');

    for (int i = 0; i < n / 2.0 - z; i++) {
        mx_printchar('|');

        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');

        mx_printchar('|');

        for (int j = 0; j < n / 2; j++)
            mx_printchar(' ');
        
        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('|');

    for (int j = 0; j < n * 2; j++)
        mx_printchar(' ');

    mx_printchar('|');

    for (int j = 0; j < n / 2; j++)
        mx_printchar(' ');
    
    mx_printchar('+');
    mx_printchar('\n');

    int k = n / 2.0 - 1;

    for (int i = n / 2; i > 0; i--, k--) {
        mx_printchar('|');

        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');

        mx_printchar('|');

        for (int j = 0; j < k; j++)
            mx_printchar(' ');

        mx_printchar('/');

        mx_printchar('\n');
    }

    mx_printchar('+');

    for (int i = 0; i < n * 2; i++)
        mx_printchar('-');

    mx_printchar('+');
    mx_printchar('\n');
}

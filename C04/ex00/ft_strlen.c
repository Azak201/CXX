
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
		x ++;
	return (x);
}

/*int main() {
    char str[] = "Hello, world!";
    int length;

    length = ft_strlen(str);

    printf("Length of '%s' is %d\n", str, length);

    return 0;
}*/

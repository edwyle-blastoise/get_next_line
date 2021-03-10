#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd;
    char *line;
    int	i;

    fd = open("/Users/eblastoi/gnl/text.txt", O_RDONLY);
    while ((i = get_next_line(fd, &line)))
    {
        printf("i = %d %s\n", i, line);
        free(line);
    }
	printf("i = %d %s\n", i, line);
	free(line);
    return (0);
}

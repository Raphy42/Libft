//HEADER HERE
#include "libft.h"

char				*ft_str_append(char *s1, char *s2)
{
	char			*buffer;

	buffer = ft_strjoin(s1, s2);
	free(s1);
	return (buffer);
}

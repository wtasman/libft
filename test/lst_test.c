#include "libft.h"
#include <stdio.h>

int	main()
{
	t_list	*start;

	start = ft_lstnew("42", sizeof(int));
	while (start != NULL)
	{
		printf("%s", start->content);
		ft_putchar('\n');
		start->next = next;
	}
	return (0);
}

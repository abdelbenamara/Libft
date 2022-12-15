/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:51:53 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/14 23:58:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstnew_test(void)
{
	t_list	*item;
	t_list	*tmp;

	printf("ft_lstnew\t");
	item = ft_lstnew(NULL);
	assert(item->content == NULL);
	assert(item->next == NULL);
	free(item);
	printf(BOLDGREEN "1. OK\t");
	item = ft_lstnew("");
	assert(!strcmp(item->content, ""));
	assert(item->next == NULL);
	free(item);
	printf(BOLDGREEN "2. OK\t");
	int	i = 0;
	item = ft_lstnew(&i);
	assert(*(int *)(item->content) == i);
	assert(item->next == NULL);
	free(item);
	printf(BOLDGREEN "3. OK\t");
	long	l = 2147483648;
	item = ft_lstnew(&l);
	assert(*(long *)(item->content) == l);
	assert(item->next == NULL);
	free(item);
	printf(BOLDGREEN "4. OK\t");
	tmp = ft_lstnew("test");
	item = ft_lstnew(tmp);
	assert(!strcmp(((t_list *)(item->content))->content, "test"));
	assert(item->next == NULL);
	free(tmp);
	free(item);
	printf(BOLDGREEN "5. OK" RESET "\n");
}

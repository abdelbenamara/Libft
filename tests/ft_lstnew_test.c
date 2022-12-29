/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:51:53 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:09:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstnew_test(void)
{
	t_list	*item;
	t_list	*tmp;

	printf(RESET "\nft_lstnew\t");
	item = ft_lstnew(NULL);
	ft_assert(1, (item->content == NULL && item->next == NULL));
	free(item);
	item = ft_lstnew("");
	ft_assert(2, (!strcmp(item->content, "") && item->next == NULL));
	free(item);
	int	i = 0;
	item = ft_lstnew(&i);
	ft_assert(3, (*(int *)(item->content) == i && item->next == NULL));
	free(item);
	long	l = 2147483648;
	item = ft_lstnew(&l);
	ft_assert(4, (*(long *)(item->content) == l && item->next == NULL));
	free(item);
	tmp = ft_lstnew("test");
	item = ft_lstnew(tmp);
	ft_assert(5, (!strcmp(((t_list *)(item->content))->content, "test") && item->next == NULL));
	free(tmp);
	free(item);
}

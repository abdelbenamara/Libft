/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:48:20 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:38:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstdelone_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf(RESET "\nft_lstdelone\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstdelone(lst, NULL);
	ft_assert(1, !strcmp(lst->content, "0"));
	ft_lstdelone(lst, &free);
	printf(BOLDGREEN "2. OK\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("1")));
	ft_lstdelone(lst->next, &free);
	ft_assert(3, !strcmp(lst->content, "1"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("2")));
	item = lst->next;
	ft_lstdelone(lst, &free);
	ft_assert(4, !strcmp(item->content, "1"));
	ft_lstdelone(item, &free);
	printf(BOLDGREEN "5. OK\t");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:06:40 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:04:57 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_putendl_fd_test(void)
{
	int	fd = open("/dev/null", O_WRONLY);

	if (fd == -1)
		return ;
	printf(RESET "\nft_putendl_fd\t");
	ft_putendl_fd("", fd);
	printf(BOLDGREEN "1. OK\t");
	ft_putendl_fd("abcde", fd);
	printf(BOLDGREEN "2. OK\t");
	ft_putendl_fd("12345", fd);
	printf(BOLDGREEN "3. OK\t");
	ft_putendl_fd("\t \b", fd);
	printf(BOLDGREEN "4. OK\t");
	ft_putendl_fd("\0\0\0", fd);
	printf(BOLDGREEN "5. OK\t");
	close(fd);
}

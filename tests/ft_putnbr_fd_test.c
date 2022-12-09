/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:17:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/09 19:44:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_putnbr_fd_test(void)
{
	int	fd = open("/dev/null", O_WRONLY);

	if (fd == -1)
		return ;
	printf("ft_putnbr_fd\t   |\t\t");
	ft_putnbr_fd(0, fd);
	printf(BOLDGREEN "1. OK\t");
	ft_putnbr_fd(-0, fd);
	printf(BOLDGREEN "2. OK\t");
	ft_putnbr_fd(-123, fd);
	printf(BOLDGREEN "3. OK\t");
	ft_putnbr_fd(456, fd);
	printf(BOLDGREEN "4. OK\t");
	ft_putnbr_fd(-2147483648, fd);
	printf(BOLDGREEN "5. OK\t");
	ft_putnbr_fd(2147483647, fd);
	printf(BOLDGREEN "6. OK\t");
	ft_putnbr_fd(1000000000, fd);
	printf(BOLDGREEN "7. OK" RESET "\n");
	close(fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:16:44 by lucsanto          #+#    #+#             */
/*   Updated: 2022/07/22 00:25:01 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	print(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	i;

	n = 0;
	while (n <= 98)
	{
	i = n + 1;
		while (i <= 99)
		{
			print(n);
			write(1, " ", 2);
			print(i);
			if (n != 98)
			{
				write(1, ", ", 2);
			}			
			i++;
		}
		n++;
	}
}

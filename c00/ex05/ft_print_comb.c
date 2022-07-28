/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:38:06 by lucsanto          #+#    #+#             */
/*   Updated: 2022/07/21 12:35:56 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char n, char i, char a)
{
	write(1, &n, 1);
	write(1, &i, 1);
	write(1, &a, 1);
	if (!(n == '7' && i == '8' && a == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n;
	char	i;
	char	a;

	n = '0';
	while (n <= '9')
	{
	i = '0';
		while (i <= '9')
		{
		a = '0';
			while (a <= '9')
			{
				if (n < i && i < a)
				{
					ft_putchar(n, i, a);
				}	
				a++;
			}	
			i++;
		}
		n++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:19:31 by lucsanto          #+#    #+#             */
/*   Updated: 2022/07/18 15:47:47 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpr;

	alpr = 'z';
	while (alpr >= 'a')
	{
		write(1, &alpr, 1);
		alpr--;
	}
}

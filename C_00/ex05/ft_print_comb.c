/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:30:09 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/02 23:35:08 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		return ;
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	t[3];

	t[0] = 0;
	while (t[0] <= 7)
	{
		t[1] = t[0] + 1;
		while (t[1] <= 8)
		{
			t[2] = t[1] + 1;
			while (t[2] <= 9)
			{
				ft_print(t[0] + 48, t[1] + 48, t[2] + 48);
				t[2]++;
			}
			t[1]++;
		}
		t[0]++;
	}
}

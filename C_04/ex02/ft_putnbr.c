/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:57:55 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 20:02:30 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putnbr(int nb)
{
	unsigned	int	n;
	char			c;

	n = nb;
	n *= (nb < 0) ? -1 : 1;
	if (nb < 0)
		write(1, "-", 1);
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

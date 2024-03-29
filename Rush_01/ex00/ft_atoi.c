/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ietmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:54:29 by ietmidi           #+#    #+#             */
/*   Updated: 2019/09/08 19:54:34 by ietmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	s;
	int	nb;

	s = 1;
	nb = 0;
	while ((*str && *str >= 9 && *str <= 13) || *str == 32)
		str++;
	s = (*str == '-' && (str++)) ? s * -1 : s;
	s = (s == 1 && *str == '+' && (str++)) ? s : s;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - 48);
		str++;
	}
	return (nb * s);
}

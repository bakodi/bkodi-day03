/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:37:52 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 15:41:10 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stadio.h>
#include <unistad.h>

void	ft_putstr( char *str)
{
	int i;

	i=0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
			


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:42:18 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 15:44:51 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
	{
		++len;
	}
	return len;
}

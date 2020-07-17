/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phcharam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:44:29 by phcharam          #+#    #+#             */
/*   Updated: 2020/07/17 11:56:24 by phcharam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	int value;
	if((nb < 0) || (nb > 10))
	{
		return(2);
	}
	value = nb;
	return(value * ft_recursive_factorial(-1));
}

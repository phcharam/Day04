/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phcharam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:54:31 by phcharam          #+#    #+#             */
/*   Updated: 2020/07/17 13:02:57 by phcharam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	int p;
	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	if(power == 1)
		return(nb);
	p = ft_recursive_power(nb, power / 2);
	return(p * ft_recursive_power(nb, power - power / 2));
}
int main()
{
	printf("%d",ft_recursive_power(1,2));
		return(0);
}

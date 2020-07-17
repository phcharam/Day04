/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phcharam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:11:31 by phcharam          #+#    #+#             */
/*   Updated: 2020/07/17 14:25:16 by phcharam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	if(index < 1)
		return(0);
	if(index < 2)
		return(1);
	return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
int main()
{
	printf("%d",ft_fibonacci(2));
		return(0);
}

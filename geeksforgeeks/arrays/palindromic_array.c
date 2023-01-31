/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindromic_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:42:08 by bkaramol          #+#    #+#             */
/*   Updated: 2023/01/21 13:58:26 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Given a Integer array A[] of n elements. Your task is to complete the function PalinArray.
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0. */

#include <stdio.h>
#include <stdlib.h>

int	digit(int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*string;
	int		dig;
	int		nb2;

	dig = digit(nb);
	nb2 = nb;
	string = malloc(dig + 1);
	if (!string)
		return (0);
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	string[dig] = '\0';
	dig--;
	while ((nb < 0) <= dig)
	{
		string[dig] = (nb2 % 10) + '0';
		dig--;
		nb2 /= 10;
	}
	return (string);
}

int	isPal(int nb)
{
	int		dig;
	int		dig2;
	char	*nbr;
	int		i;

	dig = digit(nb);
	dig2 = digit(nb);
	nbr = ft_itoa(nb);
	i = 0;
	while (i < dig / 2)
	{
		if (nbr[i] != nbr[dig2 - 1])
			return (0);
		i++;
		dig2--;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", isPal(110));
}

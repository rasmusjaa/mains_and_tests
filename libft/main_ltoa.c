/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaakonm <rjaakonm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:01:39 by rjaakonm          #+#    #+#             */
/*   Updated: 2019/11/13 16:51:56 by rjaakonm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

// FT_BASE_LTOA
int main()
{
	printf("\033[1;34m");
	printf("\nft_base_ltoa:\n");
	printf("\033[0m");
	printf("your: ");
	printf("%s\n", ft_base_ltoa(2147483650, 2, BASE16UC));
	return (0);
}

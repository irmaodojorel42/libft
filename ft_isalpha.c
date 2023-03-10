/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:04:49 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 13:04:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("alp %d\n", ft_isalpha(122));
    printf("not alp %d\n", ft_isalpha(32));

    return (0);
}*/
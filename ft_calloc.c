/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:15:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 16:15:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nblock, size_t sizeblock)
{
    size_t  totalsize;
    void    *result;

    totalsize = sizeblock * nblock;
    if (nblock == 0 || sizeblock == 0)
        return (NULL);
    result = malloc(totalsize);
    if (result == NULL)
        return (NULL);
    ft_memset(result, 0, totalsize);
    return (result);
}
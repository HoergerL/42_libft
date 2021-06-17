/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoerger <lhoerger@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:11:33 by lhoerger          #+#    #+#             */
/*   Updated: 2021/06/17 16:47:03 by lhoerger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	cnt;
	
	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	cnt;
	size_t	cnt2;
	size_t start;
	size_t len;
	size_t len_dst;

	
	start = ft_strlen(dst);
	len_dst = start;

	cnt = start;
	cnt2 = 0;
	if (dstsize == 0)
	{
		return len + dstsize;
	}
	
	while(cnt <  dstsize -1 && src[cnt2])
	{
		printf("%c\n", src[cnt2]);
		dst[start] = src[cnt2];
		start++;
		cnt++;
		cnt2++;
	}
	printf("dessize: %i, len_dest: %i, ftstrlen: %i\n", (int) dstsize, (int) len_dst, (int) ft_strlen(dst));
	dst[start] = '\0';
	if (dstsize < len_dst)
		return (len_dst + dstsize - 1);
	else if (dstsize == len_dst + 1)
		return dstsize + 1;
	else if (dstsize == ft_strlen(dst) + 1)
		return ft_strlen(dst) + 1;
	else if (dstsize == ft_strlen(dst))
		return ft_strlen(dst);
	else 
		return ft_strlen(dst);
	
}

unsigned int	ft_strlcat2(char *dest, char *src, unsigned int size)
{
	unsigned int cnt;
	unsigned int cnt2;
	unsigned int len;

	cnt = 0;
	len = ft_strlen(src);
	cnt2 = 0;
	if (size == 0)
	{
		return len + size;
	}
	while (dest[cnt] != '\0')
	{
		cnt++;
	}
	while (src[cnt2] != '\0' && cnt < size)
	{
		dest[cnt] = src[cnt2];
		cnt++;
		cnt2++;
	}
	dest[cnt] = '\0';
	return (cnt);
}
	
int main()
{
	char src1[] = "11";
	char dest1[] = "222"; 
	char src2[] = "11";
	char dest2[] = "222"; 
	int cnt = 5;
	printf("%i, %s\n", (int) ft_strlcat2(dest1, src1, cnt), dest1);
	printf("%i, %s\n", (int) strlcat(dest2, src2, cnt), dest2);
}
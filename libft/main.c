/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaakonm <rjaakonm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:01:39 by rjaakonm          #+#    #+#             */
/*   Updated: 2019/10/21 13:36:38 by rjaakonm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

// TEST FUNCTIONS
void	make_a(char *c)
{
	*c = 'a';
}

char	make_b(char c)
{
	char	b;
	b = c + 1;
	return (b);
}

void	make_ai(unsigned int n, char *c)
{
	ft_putnbr(n);
	write(1, c, 1);
}

char	make_bi(unsigned int n, char c)
{
	char	b;

	ft_putnbr(n);
	write(1, &c, 1);
	b = c + 1;
	return (b);
}

t_list	*delone(void *joku, size_t size)
{
	char	*content;

	content = joku;
	if (content[0] == 's')
		content[0] = 'a';
	size = size + 1;
	return (joku);
}

void	firsta(t_list *node)
{
	((char *)(node->content))[0] = 'a';
//	printf("%s", (char *)(node->content));
}

t_list	*firstb(t_list *node)
{
	((char *)(node->content))[0] = 'b';
	return (node);
}

// OWN FUNCTIONS

// ft_count_digits
// ft_count_alphabets
// ft_count_c
// ft_str_up
// ft_str_lo

// memcpy ja muut tsekkaa 0 stringit

int		main()
{
	char	*testi;
	char	*testi2;
	char	source[50];
	char	source2[50];
	char	destination[50];
	char	destination2[50];
	int		array[6];
	int		i;
	int		res;

	testi = "testi ok";
	testi2 = "testi ok";
	strcpy(source, "source string");
	strcpy(source2, "source string");
	strcpy(destination, "destination string");
	strcpy(destination2, "destination string");
	i = 0;
	res = 0;
	while (i < 6)
	{
		array[i] = i;
		i++;
	}
	i = 0;


// FT_MEMSET
	printf("\033[1;34m");
	printf("\nft_memset:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", memset(source, '*', 4));
	printf("%s <null, ", memset(source, '\0', 3));
	printf("%s\n", memset(source, 'a', 30));
	memset(array, 1, sizeof(int)*3);
	i = 0;
	while (i < 6)
	{
		printf("%d, ", array[i]);
		i++;
	}
	i = 0;
	while (i < 6)
	{
		array[i] = i;
		i++;
	}
	i = 0;
	memset(array, 2147483647, sizeof(int)*1);
	printf("%d, ", array[0]);
	printf("\n");
	strcpy(source, "source string");
	printf("your: ");
	printf("%s, ", ft_memset(source, '*', 4));
	printf("%s <null, ", ft_memset(source, '\0', 3));
	printf("%s\n", ft_memset(source, 'a', 30));
	ft_memset(array, 1, sizeof(int)*3);
	i = 0;
	while (i < 6)
	{
		printf("%d, ", array[i]);
		i++;
	}
	i = 0;
	while (i < 6)
	{
		array[i] = i;
		i++;
	}
	i = 0;
	memset(array, 2147483647, sizeof(int)*1);
	printf("%d, ", array[0]);
	memset(array, 0, sizeof(int)*1);
	printf("\n");
	strcpy(source, "source string");

// FT_BZERO
	printf("\033[1;34m");
	printf("\nft_bzero:\n");
	printf("\033[0m");
	printf("real: ");
	bzero(&source[5], 5);
	printf("%s\n", source);
	strcpy(source, "source string");
	printf("your: ");
	ft_bzero(&source[5], 5);
	printf("%s\n", source);
	strcpy(source, "source string");

// FT_MEMCPY
	printf("\033[1;34m");
	printf("\nft_memcpy:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", memcpy(source, destination, 4));
	strcpy(source, "source string");
	printf("%s\n", memcpy(source, destination, 40));
	strcpy(source, "source string");
	printf("your: ");
	printf("%s, ", ft_memcpy(source, destination, 4));
	strcpy(source, "source string");
	printf("%s\n", ft_memcpy(source, destination, 40));
	strcpy(source, "source string");

// FT_MEMCCPY
	printf("\033[1;34m");
	printf("\nft_memccpy:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s and %s, ", memccpy(source, destination, 'u', 4), source);
	strcpy(source, "source string");
	printf("%s\n", memccpy(source, destination, 't', 40));
	strcpy(source, "source string");
	printf("your: ");
	printf("%s and %s, ", ft_memccpy(source, destination, 'u', 4), source);
	strcpy(source, "source string");
	printf("%s\n", ft_memccpy(source, destination, 't', 40));
	strcpy(source, "source string");

// FT_MEMMOVE
	printf("\033[1;34m");
	printf("\nft_memmove:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", memmove(&source[2], &source[4], 4));
	strcpy(source, "source string");
	printf("%s\n", memmove(&source[4], &source[2], 4));
	strcpy(source, "source string");
	printf("your: ");
	printf("%s, ", ft_memmove(&source[2], &source[4], 4));
	strcpy(source, "source string");
	printf("%s\n", ft_memmove(&source[4], &source[2], 4));
	strcpy(source, "source string");

// FT_MEMRCHR
	printf("\033[1;34m");
	printf("\nft_memrchr:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", memchr("herenstartsnhere", 'n', 10));
	printf("%s, ", memchr("herenstartshere", 'y', 10));
	printf("%s, ", memchr("herenstartshere", 'y', 30));
	printf("%s\n", memchr("yherenstartshere", 'y', 0));
	printf("your: ");
	printf("%s, ", ft_memchr("herenstartsnhere", 'n', 10));
	printf("%s, ", ft_memchr("herenstartsnhere", 'y', 10));
	printf("%s, ", ft_memchr("herenstartsnhere", 'y', 30));
	printf("%s\n", ft_memchr("yherenstartshere", 'y', 0));

// FT_MEMCMP
	printf("\033[1;34m");
	printf("\nft_memcmp:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d\n", memcmp(source, source2, 5), memcmp(source, destination, 6), memcmp(source, source2, 100));
	printf("your: ");
	printf("%d, %d, %d\n", ft_memcmp(source, source2, 5), ft_memcmp(source, destination, 6), ft_memcmp(source, source2, 100));

// FT_STRLEN
	printf("\033[1;34m");
	printf("\nft_strlen:\n");
	printf("\033[0m");
	printf("real: \n");
	printf("%lu, %lu, %lu\n", strlen("testi"), strlen(""), strlen("t"));
	printf("your: \n");
	printf("%lu, %lu, %lu\n", ft_strlen("testi"), ft_strlen(""), ft_strlen("t"));

// FT_STRDUP
	printf("\033[1;34m");
	printf("\nft_strdup:\n");
	printf("\033[0m");
	printf("real: \n");
	printf("%s, %s\n", strdup("testi "), strdup(""));
	printf("your: \n");
	printf("%s, %s\n", ft_strdup("testi "), ft_strdup(""));

// FT_STRCPY
	printf("\033[1;34m");
	printf("\nft_strcpy:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s\n", strcpy(source, "source string"));
	printf("your: ");
	printf("%s\n", ft_strcpy(source2, "source string"));

// FT_STRNCPY
	printf("\033[1;34m");
	printf("\nft_strncpy:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s\n", strncpy(source, "source string n", 30));
	printf("%s\n", strncpy(source, "aaa", 3));
	printf("your: ");
	printf("%s\n", ft_strncpy(source2, "source string n", 30));
	printf("%s\n", ft_strncpy(source2, "aaa", 3));

//*****RESET VARIABLES*****
	strcpy(source, "source string");
	strcpy(source2, "source string");

// FT_STRCAT
	printf("\033[1;34m");
	printf("\nft_strcat:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s\n", strcat(destination, source));
	printf("your: ");
	printf("%s\n", ft_strcat(destination2, source2));
//*****RESET VARIABLES*****
	strcpy(destination, "destination string");
	strcpy(destination2, "destination string");

// FT_STRNCAT
	printf("\033[1;34m");
	printf("\nft_strncat:\n");
	printf("\033[0m");
	printf("real: ");
	ft_strcpy(destination, "destination string");
	printf("%s\n", strncat(destination, source, 5));
	printf("your: ");
	ft_strcpy(destination, "destination string");
	printf("%s\n", ft_strncat(destination, source, 5));
	ft_strcpy(destination, "destination string");

// FT_STRLCAT
	printf("\033[1;34m");
	printf("\nft_strlcat:\n");
	printf("\033[0m");
	ft_strcpy(destination, "destination string");
	printf("real: ");
	printf("%lu ", strlcat(destination, source, 14));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");
	printf("your: ");
	printf("%lu ", ft_strlcat(destination, source, 14));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");
	printf("real: ");
	printf("%lu ", strlcat(destination, source, 25));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");
	printf("your: ");
	printf("%lu ", ft_strlcat(destination, source, 25));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");
	printf("real: ");
	printf("%lu ", strlcat(destination, source, 40));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");
	printf("your: ");
	printf("%lu ", ft_strlcat(destination, source, 40));
	printf(" and string is %s\n", destination);
	ft_strcpy(destination, "destination string");

// FT_STRCHR
	printf("\033[1;34m");
	printf("\nft_strchr:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", strchr("herenstartshere", 'n'));
	printf("%s\n", strchr("herenstartshere", 'y'));
	printf("your: ");
	printf("%s, ", ft_strchr("herenstartshere", 'n'));
	printf("%s\n", ft_strchr("herenstartshere", 'y'));

// FT_STRRCHR
	printf("\033[1;34m");
	printf("\nft_strrchr:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", strrchr("herenstartsnhere", 'n'));
	printf("%s, ", strrchr("herenstartshere", 'y'));
	printf("%s\n", strrchr("yherenstartshere", 'y'));
	printf("your: ");
	printf("%s, ", ft_strrchr("herenstartsnhere", 'n'));
	printf("%s, ", ft_strrchr("herenstartsnhere", 'y'));
	printf("%s\n", ft_strrchr("yherenstartshere", 'y'));

// FT_STRSTR
	printf("\033[1;34m");
	printf("\nft_strstr:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", strstr("herestartshere", "start"));
	printf("%s, ", strstr("herestartshere", "e"));
	printf("%s, ", strstr("hherestartshere", "here"));
	printf("%s, ", strstr("heherestartshere", " here"));
	printf("%s, ", strstr("herestartshhere", "hhere"));
	printf("%s\n", strstr("herestartshhere", ""));
	printf("your: ");
	printf("%s, ", ft_strstr("herestartshere", "start"));
	printf("%s, ", ft_strstr("herestartshere", "e"));
	printf("%s, ", ft_strstr("hherestartshere", "here"));
	printf("%s, ", ft_strstr("heherestartshere", " here"));
	printf("%s, ", ft_strstr("herestartshhere", "hhere"));
	printf("%s\n", ft_strstr("herestartshhere", ""));

// FT_STRNSTR
	printf("\033[1;34m");
	printf("\nft_strnstr:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%s, ", strnstr("herestartshere", "start", 8));
	printf("%s, ", strnstr("herestartshere", "h", 0));
	printf("%s, ", strnstr("hherestartshere", "here", 5));
	printf("%s, ", strnstr("heherestartshere", "hereeeeee", 50));
	printf("%s, ", strnstr("herestartshhere", "hhere", 50));
	printf("%s\n", strnstr("herestartshhere", "", 0));
	printf("your: ");
	printf("%s, ", ft_strnstr("herestartshere", "start", 8));
	printf("%s, ", ft_strnstr("herestartshere", "h", 0));
	printf("%s, ", ft_strnstr("hherestartshere", "here", 5));
	printf("%s, ", ft_strnstr("heherestartshere", "hereeeeee", 50));
	printf("%s, ", ft_strnstr("herestartshhere", "hhere", 50));
	printf("%s\n", ft_strnstr("herestartshhere", "", 0));

// FT_STRCMP
	printf("\033[1;34m");
	printf("\nft_strcmp:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d\n", strcmp(source, source2), strcmp(source, destination), strcmp(destination, source), strcmp("", ""));
	printf("your: ");
	printf("%d, %d, %d, %d\n", ft_strcmp(source, source2), ft_strcmp(source, destination), ft_strcmp(destination, source), strcmp("", ""));

// FT_STRNCMP
	printf("\033[1;34m");
	printf("\nft_strncmp:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d\n", strncmp(source, source2, 5), strncmp(source, destination, 0), strncmp(destination, source, 100));
	printf("your: ");
	printf("%d, %d, %d\n", ft_strncmp(source, source2, 5), ft_strncmp(source, destination, 0), ft_strncmp(destination, source, 100));

// FT_ATOI
	printf("\033[1;34m");
	printf("\nft_atoi:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", atoi("  +99"), atoi("  -99"), atoi("  +-9"), atoi("- 9"), atoi("-0"), atoi("-2147483649"), atoi("2147483648"), atoi("2147483647"), atoi("-2147483648"));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", ft_atoi("  +99"), ft_atoi("  -99"), ft_atoi("  +-9"), ft_atoi("- 9"), ft_atoi("-0"), ft_atoi("-2147483649"), ft_atoi("2147483648"), ft_atoi("2147483647"), ft_atoi("-2147483648"));

// FT_ISALPHA
	printf("\033[1;34m");
	printf("\nft_isalpha:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", isalpha('a'), isalpha('A'), isalpha('z'), isalpha('Z'), isalpha(' '), isalpha('1'), isalpha('.'));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_isalpha('a'), ft_isalpha('A'), ft_isalpha('z'), ft_isalpha('Z'), ft_isalpha(' '), ft_isalpha('1'), ft_isalpha('.'));

// FT_ISDIGIT
	printf("\033[1;34m");
	printf("\nft_isdigit:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", isdigit('1'), isdigit('9'), isdigit('z'), isdigit('Z'), isdigit(' '), isdigit(132), isdigit('.'));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_isdigit('1'), ft_isdigit('9'), ft_isdigit('z'), ft_isdigit('Z'), ft_isdigit(' '), ft_isdigit(132), ft_isdigit('.'));

// FT_ISALNUM
	printf("\033[1;34m");
	printf("\nft_isalnum:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", isalnum('1'), isalnum('9'), isalnum('z'), isalnum('Z'), isalnum(' '), isalnum(132), isalnum('.'));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_isalnum('1'), ft_isalnum('9'), ft_isalnum('z'), ft_isalnum('Z'), ft_isalnum(' '), ft_isalnum(132), ft_isalnum('.'));

// FT_ISASCII
	printf("\033[1;34m");
	printf("\nft_isascii:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", isascii(0), isascii(32), isascii(127), isascii('Z'), isascii(' '), isascii('1'), isascii('.'));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_isascii(0), ft_isascii(32), ft_isascii(127), ft_isascii('Z'), ft_isascii(' '), ft_isascii('1'), ft_isascii('.'));

// FT_ISPRINT
	printf("\033[1;34m");
	printf("\nft_isprint:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", isprint(0), isprint(32), isprint(127), isprint('Z'), isprint(' '), isprint('1'), isprint('.'));
	printf("your: ");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_isprint(0), ft_isprint(32), ft_isprint(127), ft_isprint('Z'), ft_isprint(' '), ft_isprint('1'), ft_isprint('.'));

// FT_TOUPPER
	printf("\033[1;34m");
	printf("\nft_toupper:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%c, %c, %c, %c, %c, %c, %c\n", toupper('a'), toupper('A'), toupper('z'), toupper(96), toupper(123), toupper('1'), toupper(31));
	printf("your: ");
	printf("%c, %c, %c, %c, %c, %c, %c\n", ft_toupper('a'), ft_toupper('A'), ft_toupper('z'), ft_toupper(96), ft_toupper(123), ft_toupper('1'), ft_toupper(31));

// FT_TOLOWER
	printf("\033[1;34m");
	printf("\nft_tolower:\n");
	printf("\033[0m");
	printf("real: ");
	printf("%c, %c, %c, %c, %c, %c, %c\n", tolower('a'), tolower('A'), tolower('Z'), tolower(96), tolower(123), tolower('1'), tolower(31));
	printf("your: ");
	printf("%c, %c, %c, %c, %c, %c, %c\n", ft_tolower('a'), ft_tolower('A'), ft_tolower('Z'), ft_tolower(96), ft_tolower(123), ft_tolower('1'), ft_tolower(31));

// PART 2

// FT_MEMALLOC
	printf("\033[1;34m");
	printf("\nft_memalloc:\n");
	printf("\033[0m");
	printf("your: \n");
	char	*mem;

	mem = ft_memalloc(50);
	if (!mem)
		ft_putchar('x');
	printf("memory 1-50 START");
	while (i < 50)
	{
		printf("%c", mem[i]);
		i++;
	}
	printf("END\n");
	i = 0;
	printf("memory 1-1000 START");
	while (i < 1000)
	{
		printf("%c", mem[i]);
		i++;
	}
	printf("END");
	i = 0;
	printf("\n");

// FT_MEMDEL
	printf("\033[1;34m");
	printf("\nft_memdel:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("memarea is null: ");
	if (mem == NULL)
		printf("YES");
	else
		printf("NO");
	printf("\n");
	ft_memdel((void *)&mem);
	printf("memarea is null: ");
	if (mem == NULL)
		printf("YES");
	else
		printf("NO");
	printf("\n");

// FT_STRNEW
	char	*mem2;
	printf("\033[1;34m");
	printf("\nft_strnew:\n");
	printf("\033[0m");
	printf("your: \n");
	mem2 = ft_strnew(3);
	printf("str should have 4 \\0, has at least: ");
	while (i < 4)
	{
		if (mem2[i] == '\0')
			res++;
		i++;
	}
	printf("%d\n", res);
	i = 0;
	res = 0;

// FT_STRDEL
	printf("\033[1;34m");
	printf("\nft_strdel:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("memarea is null: ");
	if (mem2 == NULL)
		printf("YES");
	else
		printf("NO");
	printf("\n");
	ft_strdel((void *)&mem2);
	printf("memarea is null: ");
	if (mem2 == NULL)
		printf("YES");
	else
		printf("NO");
	printf("\n");

// FT_STRCLR
	printf("\033[1;34m");
	printf("\nft_strclr:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("Original: %s\n", ft_strcpy(source2, "source string"));
	ft_strclr(source2);
	printf("Cleared: %s \n", source2);
	ft_strcpy(source2, "source string");

// FT_STRITER

	printf("\033[1;34m");
	printf("\nft_striter:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("Original: %s\n", ft_strcpy(source2, "source string"));
	ft_striter(source2, make_a);
	printf("Iterated: %s \n", source2);
	ft_strcpy(source2, "source string");

// FT_STRITERI

	printf("\033[1;34m");
	printf("\nft_striteri:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_striteri(source2, make_ai);
	printf("\n");
	ft_strcpy(source2, "source string");

// FT_STRMAP

	printf("\033[1;34m");
	printf("\nft_strmap:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("Original: %s\n", ft_strcpy(source2, "source string"));
	printf("Iterated: %s \n", ft_strmap(source2, make_b));
	ft_strcpy(source2, "source string");

// FT_STRMAPI

	printf("\033[1;34m");
	printf("\nft_strmapi:\n");
	printf("\033[0m");
	printf("your: \n");
	printf("\nand string is %s\n", ft_strmapi(source2, make_bi));
	ft_strcpy(source2, "source string");

// FT_STREQU

	printf("\033[1;34m");
	printf("\nft_strequ:\n");
	printf("\033[0m");
	printf("real: \n1, 0, 1, 0, 0, 0, 1\n");
	printf("your: \n");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_strequ("a", "a"), ft_strequ("a", "b"), ft_strequ("ab", "ab"), ft_strequ("ab", "ac"), ft_strequ("aaa", "a"), ft_strequ("a", "aaa"), ft_strequ("", ""));

// FT_STRNEQU

	printf("\033[1;34m");
	printf("\nft_strnequ:\n");
	printf("\033[0m");
	printf("real: \n1, 0, 1, 1, 0, 1, 1\n");
	printf("your: \n");
	printf("%d, %d, %d, %d, %d, %d, %d\n", ft_strnequ("a", "a", 0), ft_strnequ("a", "b", 1), ft_strnequ("ab", "ab", 5), ft_strnequ("ab", "ac", 1), ft_strnequ("aaa", "a", 2), ft_strnequ("a", "aaa", 1), ft_strnequ("", "", 3));

// FT_STRSUB

	printf("\033[1;34m");
	printf("\nft_strsub:\n");
	printf("\033[0m");
	printf("real: 456");
	printf("your: ");
	printf("%s\n", ft_strsub("0123456789", 4, 3));

// FT_STRJOIN

	printf("\033[1;34m");
	printf("\nft_strjoin:\n");
	printf("\033[0m");
	printf("real: firstsecond\n");
	printf("your: ");
	printf("%s\n", ft_strjoin("first", "second"));

// FT_STRTRIM

	printf("\033[1;34m");
	printf("\nft_strtrim:\n");
	printf("\033[0m");
	printf("real: 1 123   456 \t 1\n");
	printf("your: ");
	printf("%s\n", ft_strtrim(" \n   1 123   456 \t 1 \t  "));

// FT_STRSPLIT

	char	**wordarray;
	printf("\033[1;34m");
	printf("\nft_strsplit:\n");
	printf("\033[0m");
	printf("real: aaabcccdd\n");
	printf("your: ");
	wordarray = ft_strsplit("xaaaxxbxxcccxdd", 'x');
	i = 0;
	if (wordarray)
		while (wordarray[i])
		{
			printf("%s", wordarray[i]);
			i++;
		}
	else
		printf("no words to split");
	printf("\nand : ");
	wordarray = ft_strsplit("aaabcccdd", 'x');
	i = 0;
	if (wordarray)
		while (wordarray[i])
		{
			printf("%s", wordarray[i]);
			i++;
		}
	else
		printf("no words to split");
	printf("\nand : ");
	wordarray = ft_strsplit("          ", ' ');
	i = 0;
	if (wordarray)
		while (wordarray[i])
		{
			printf("%s", wordarray[i]);
			i++;
		}
	else
		printf("no words to split");
	i = 0;

// FT_ITOA

	printf("\033[1;34m");
	printf("\nft_itoa:\n");
	printf("\033[0m");
	printf("real: 123 0 0 -1 -2147483648 2147483647\n");
	printf("your: %s %s %s %s %s %s\n", ft_itoa(123), ft_itoa(0), ft_itoa(-0), ft_itoa(-1), ft_itoa(-2147483648), ft_itoa(2147483647));

// FT_PUTCHAR
	printf("\033[1;34m");
	printf("\nft_putchar:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putchar('O');
	ft_putchar('K');
	ft_putchar('\n');

// FT_PUTSTR
	printf("\033[1;34m");
	printf("\nft_putstr:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putstr(testi2);
	ft_putstr(testi2);
	ft_putstr("\n");

// FT_PUTENDL
	printf("\033[1;34m");
	printf("\nft_putendl:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putendl(testi2);
	ft_putendl(testi2);

// FT_PUTNBR
	printf("\033[1;34m");
	printf("\nft_putnbr:\n");
	printf("\033[0m");
	printf("real: \n");
	printf("%d, %d, %d, %ld\n", 0, -10, 2147483647, -2147483648);
	printf("your: \n");
	ft_putnbr(0);
	ft_putstr(", ");
	ft_putnbr(-10);
	ft_putstr(", ");
	ft_putnbr(2147483647);
	ft_putstr(", ");
	ft_putnbr(-2147483648);
	printf("\n");

// FT_PUTCHAR_FD
	printf("\033[1;34m");
	printf("\nft_putchar_fd:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putchar_fd('O', 2);
	ft_putchar_fd('K', 2);
	ft_putchar_fd('\n', 2);

// FT_PUTSTR_FD
	printf("\033[1;34m");
	printf("\nft_putstr_fd:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putstr_fd(testi2, 2);
	ft_putstr_fd(testi2, 2);
	ft_putstr_fd("\n", 2);

// FT_PUTENDL_FD
	printf("\033[1;34m");
	printf("\nft_putendl_fd:\n");
	printf("\033[0m");
	printf("your: \n");
	ft_putendl_fd(testi2, 2);
	ft_putendl_fd(testi2, 2);

// FT_PUTNBR_FD
	printf("\033[1;34m");
	printf("\nft_putnbr_fd:\n");
	printf("\033[0m");
	printf("real: \n");
	printf("%d, %d, %d, %ld\n", 0, -10, 2147483647, -2147483648);
	printf("your: \n");
	ft_putnbr_fd(0, 2);
	ft_putstr(", ");
	ft_putnbr_fd(-10, 2);
	ft_putstr(", ");
	ft_putnbr_fd(2147483647, 2);
	ft_putstr(", ");
	ft_putnbr_fd(-2147483648, 2);
	printf("\n");

// FT_LSTNEW
	t_list	*testnode;
	t_list	*startnode;

	printf("\033[1;34m");
	printf("\nft_lstnew:\n");
	printf("\033[0m");
	printf("real: ");
	startnode = ft_lstnew(source, (ft_strlen(source) + 1));
	startnode->next = ft_lstnew("second\0", 8);
	startnode->next->next = ft_lstnew("third\0", 8);
	printf("%s\n", source);
	testnode = startnode;
	while (testnode)
	{
		printf("your: %s\n", testnode->content);
		testnode = testnode->next;
	}

// FT_LSTDELONE
	printf("\033[1;34m");
	printf("\nft_lstdelone:\n");
	printf("\033[0m");
/*	ft_lstdelone(&(startnode->next), delone((&startnode)->next->content, (&startnode)->next->content_size));
	testnode = startnode;
	while (testnode)
	{
		printf("your: %s\n", testnode->content);
		testnode = testnode->next;
	}
*/

// FT_LSTADD
	printf("\033[1;34m");
	printf("\nft_lstadd:\n");
	printf("\033[0m");
	t_list	*newstartnode;

	newstartnode = ft_lstnew("newstart\0", 9);
	ft_lstadd(&startnode, newstartnode);
	testnode = startnode;
	while (testnode)
	{
		printf("your: %s\n", testnode->content);
		testnode = testnode->next;
	}

// FT_LSTITER
	printf("\033[1;34m");
	printf("\nft_lstiter:\n");
	printf("\033[0m");
	printf("starting from second, first letter should be a\n");
	ft_lstiter(startnode->next, firsta);
	testnode = startnode;
	while (testnode)
	{
		printf("your: %s\n", testnode->content);
		testnode = testnode->next;
	}

// FT_LSTMAP
	printf("\033[1;34m");
	printf("\nft_lstmap:\n");
	printf("\033[0m");
	printf("starting from first, first letter should be b\n");
	t_list	*copystartnode;

	copystartnode = ft_lstmap(startnode, firstb);
	testnode = copystartnode;
	while (testnode)
	{
		printf("your: %s\n", testnode->content);
		testnode = testnode->next;
	}

	return (0);
}

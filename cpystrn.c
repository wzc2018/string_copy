#include<stdio.h>

char *cpystrn(char *dst,const char *src, unsigned int length)
{
	while(--length)
	{
		*dst = *src;
		if ('\0' == *dst)
		{
			return dst;
		}
		
		dst++;
		src++;
	}
	*dst = '\0';
	
	return dst;
}
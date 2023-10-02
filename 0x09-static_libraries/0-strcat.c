#include &quot;main.h&quot;

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != &#39;\0&#39;)
{
i++;
}
j = 0;
while (src[j] != &#39;\0&#39;)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = &#39;\0&#39;;
return (dest);
}

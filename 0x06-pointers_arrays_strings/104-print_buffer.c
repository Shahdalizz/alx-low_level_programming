#include &quot;main.h&quot;
#include &lt;stdio.h&gt;
/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: void
*/
void print_buffer(char *b, int size)
{
int o, j, i;
o = 0;
if (size &lt;= 0)
{
printf(&quot;\n&quot;);
return;
}
while (o &lt; size)
{
j = size - o &lt; 10 ? size - o : 10;
printf(&quot;%08x: &quot;, o);
for (i = 0; i &lt; 10; i++)
{
if (i &lt; j)
printf(&quot;%02x&quot;, *(b + o + i));
else
printf(&quot; &quot;);
if (i % 2)
{
printf(&quot; &quot;);
}
}

for (i = 0; i &lt; j; i++)
{
int c = *(b + o + i);
if (c &lt; 32 || c &gt; 132)
{
c = &#39;.&#39;;
}
printf(&quot;%c&quot;, c);
}
printf(&quot;\n&quot;);
o += 10;
}
}

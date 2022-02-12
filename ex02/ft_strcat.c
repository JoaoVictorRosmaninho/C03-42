
unsigned int ft_strlen(char *str)
{
  char *tmp = str;

  while (*str++);

  return ((int)(str - tmp) - 1);
}

char *ft_strcat(char *dest, char *src)
{
  unsigned int size = ft_strlen(dest);
  unsigned int i = 0; 
  while (src[i]) {
    dest[size + i] = src[i];
    i++;
  }
  dest[size + i] = src[i];

  return (dest);
}

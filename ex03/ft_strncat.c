
unsigned int ft_strlen(char *str)
{
  char *tmp = str;

  while (*str++);

  return ((int)(str - tmp) - 1);
}

char *ft_strncat(char *dest, char *src, unsigned int nb) {
  unsigned int size = ft_strlen(dest);
  unsigned int i = 0; 
  while (src[i] && i < nb) {
    dest[size + i] = src[i];
    i++;
  }
  dest[size + i] = '\0';
  return (dest);
}

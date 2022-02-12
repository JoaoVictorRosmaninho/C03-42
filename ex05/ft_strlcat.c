unsigned int ft_strlen(char *str)
{
  char *tmp = str;

  while (*str++);

  return ((int)(str - tmp) - 1);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
  unsigned int src_size = ft_strlen(src);
  unsigned int dest_size = ft_strlen(dest);
  int i = 0; 
  while (src[i] && ((dest_size + i) < (size - 1))) {
    dest[dest_size + i] = src[i];
    i++;
  }
  dest[dest_size + i] = '\0';
  return (src_size + dest_size);
}



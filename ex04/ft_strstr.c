
int ft_strncmp(char *s1, char *s2, unsigned int n) 
{
  int i; 

  i = 0; 
  while ((s1[i] == s2[i]) && s1[i] && s2[i] && (i < (n - 1))) 
    i++;
  return ((int)(s1[i] - s2[i]));
}

unsigned int ft_strlen(char *str)
{
  char *tmp = str;

  while (*str++);

  return ((int)(str - tmp) - 1);
}

char *ft_strstr(char *str, char *to_find) {
  unsigned int size = ft_strlen(to_find); 

  if (*to_find == '\0')
    return str;
  while(*str) {
    if (*str == *to_find)
      if (ft_strlen(str) < size)
        return (0);
      if (ft_strncmp(str, to_find, size) == 0)
        return str;
    str++;
  }
  return (0);
}



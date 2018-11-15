#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** parse_args( char * line )
{
  char ** args = calloc(6, sizeof(line));
  char * s = strdup(line);
  int i = 0;
  while(args[i] = strsep(&s, " "))
    {
      i++;
    }
  return args;
}


int main()
{

  printf("Command:'ls -a -l'\n");
  char ** args = parse_args("ls -a -l");
  execvp(args[0], args);

  return 0;
}

#include <stdio.h>

int Initial_Function()
{
  return 0;
}

int Initial_Security()
{
  	if(Initial_Function() == 0)
  		return 0;
	else
		return 1;
}

int main() {
  if(Initial_Security() == 0)
  printf("Security Breach.");

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
  // printf("Hello world! \n");
  
  // printf("Print a number with a width: %04X", 1234);
  
  //short *p = (short *)malloc(100);
  printf("\n step1 \n");
  char *p = (char *)malloc(100);
  char *pBase = p;
  memset(p,-1,100);

  for(int i=0; i<100; i++)
  {
	//  printf("\n p = %0x \n ", p);
	  *p++ = i;
  }
  
  //printf("\n Size of (*p) is %d \n", sizeof(*p));
  
  p = pBase;
  for(int i=0; i<100; i++)
  {
	  printf("%02x ", *p++);
  }
  
  printf("\n\n\n step2 \n");  
  short *pShort = (short *)pBase;
  for(int i=0; i<50; i++)
  {
	  printf("%04x ", *pShort++);
  }
  
  printf("\n Size of (*pShort) is %d \n", sizeof(*pShort));
  
  printf("\n step3 \n");
  int *pInt = (int *)pBase;
  for(int i=0; i<25; i++)
  {
	  printf("%08x ", *pInt++);
  }
  
  printf("\n Size of (*pInt) is %d \n", sizeof(*pInt));
  
  return;
}
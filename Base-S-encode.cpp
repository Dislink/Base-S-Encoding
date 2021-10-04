#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
#ifdef RNA_STRAND
 #ifdef FANCY_STYLE
  #ifdef REVERSE_STRAND
    const char* nb[4]={"\033[0;31mA", "\033[0;33mC", "\033[0;0mG", "\033[0;36mU"};
 	printf("\033[0;0m3'-");
  #else
	const char* nb[4]={"\033[0;36mU", "\033[0;0mG", "\033[0;33mC", "\033[0;31mA"};
 	printf("\033[0;0m5'-");
  #endif
 #else
  #ifdef REVERSE_STRAND
	const char* nb[4]={"A", "C", "G", "U"};
  #else
 	const char* nb[4]={"U", "G", "C", "A"};
  #endif
 #endif
#else
 #ifdef FANCY_STYLE
  #ifdef REVERSE_STRAND
     const char* nb[4]={"\033[0;36mT", "\033[0;0mG", "\033[0;33mC", "\033[0;31mA"};
 	printf("\033[0;0m3'-");
  #else
 	const char* nb[4]={"\033[0;31mA", "\033[0;33mC", "\033[0;0mG", "\033[0;36mT"};
 	printf("\033[0;0m5'-");
  #endif
 #else
  #ifdef REVERSE_STRAND
 	const char* nb[4]={"T", "G", "C", "A"};
  #else
 	const char* nb[4]={"A", "C", "G", "T"};
  #endif
 #endif
#endif
 	for(int i=0; i<strlen(argv[1]); i++) 
 	{
 		int c=argv[1][i];
 		printf("%s%s%s%s", nb[c>>6&0b11], nb[c>>4&0b11], nb[c>>2&0b11], nb[c&0b11]);
 	}
#ifdef FANCY_STYLE
 #ifdef REVERSE_STRAND
	printf("\033[0;0m-5'");
 #else
	printf("\033[0;0m-3'");
 #endif
#endif
	printf("\n");
	return 0;
}

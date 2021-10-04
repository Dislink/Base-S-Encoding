#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
	char* rawnb=argv[1];
	char* temp = strtok(rawnb, "-");
	char* nb;
	nb = (((nb=strtok(NULL, "-"))==NULL)?temp:nb);
	if(strlen(nb)%2)
	{
		fprintf(stderr, "%s: %s\n", argv[0], "Unexpected Length");
		return -1;
	}
	for(int i=0; i<strlen(nb); i+=4) 
	{
		unsigned char byte=0;
		for(int j=0;j<4;j++){
			if(nb[i+j]=='A'){
				byte=(byte<<2);
			}else if(nb[i+j]=='C'){
				byte=(byte<<2)+1;
			}else if(nb[i+j]=='G'){
				byte=(byte<<2)+2;
			}else if(nb[i+j]=='T'){
				byte=(byte<<2)+3;
			}else{
				fprintf(stderr, "%s: Unexpected \"%c\" at %s\n", argv[0], nb[i+j], nb);
				return 0;
			}
		}
		printf("%c", byte);
	}
	printf("\n");
	return 0;
}

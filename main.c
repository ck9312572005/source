#include <stdio.h>
#include <stdlib.h>
#include "define.h"

INT32 main()
{
	FILE *pFile;
	CHAR pstr;
	
	pFile = fopen(DATA_PATH,"r");
	
	/* sanity check for file open */
	if(!pFile)
	{
        printf("file open failure !!!\n");
        return 1;
    }
 
	while((pstr = fgetc(pFile)) != EOF)
		fputc(pstr, stdout);
	
	fclose(pFile);
	return 0;
}

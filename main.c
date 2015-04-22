#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("bmp2rgb565 [BMP_SRC] [RGB565_DEST]\n");
		return 1;
	}

	FILE* src = NULL;
	FILE* dst = NULL;

	src = fopen(argv[1], "r");
	dst = fopen(argv[2], "w");

	if(src == NULL)
	{
		printf("Unable to open the BMP file\n");
		return 2;
	}

	if(dst == NULL)
	{
		printf("Unable to open the RGB565 file\n");
		return 3;
	}

	return 0;
}

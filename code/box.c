#include <stdio.h>

typedef struct _box
{
	int height;
	int width;
	int length;
}Box;
const  int a = 5;
int main( )
{
	Box box1;
	box1.height = 2;
	box1.width = 3;
	box1.length = 4 ;
	printf("%d,%d,%d\n",box1.height,box1.width,box1.length);
	printf("volume = %d", box1.height*box1.width*box1.length);
	return 0;
}

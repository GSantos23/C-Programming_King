/* Use typedef to create types named Int8, Int16, Int32. Define the types so
 * that they represent 8-bit, 16-bit, and 32-bit integers on your machine. */

// 1 byte  = 8 bits
// 2 bytes = 16 bits
// 4 bytes == 32 bits

#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
	printf("Int8 size in bytes: %ld\n", sizeof(Int8));
	printf("Int16 size in bytes: %ld\n", sizeof(Int16));
	printf("Int32 size in bytes: %ld\n", sizeof(Int32));

	return 0;
}


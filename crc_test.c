//crc_test.c

#include "crc.h"
#include <stdint.h>
#include <stdio.h>

// This is a test of the C++ CRC library which is in crc.cpp

// To compile this file:
// 	$ gcc crc_test.c -L. -Wl,-rpath,. -lcrc_c -o crc_test
// 	$ ./crc_test 

// To compile the crc_c connector:
// 	$ g++ -fpic -shared crc_c.cpp -o libcrc_c.so



int main()
{
	uint8_t data[] = {0,1,2,3,4,5,6,7,8,9,10};
	
	uint16_t crc = crc16_kermit_vec(data,11);
	printf("\ncrc: %d\n",crc);
	
	return 0;
}

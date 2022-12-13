# crcpp_c_connector
A simple example showing how to use Daniel Bahr's CRC++ library from C

This is a test of the C++ CRC library which is in crc.cpp


To compile the crc_c connector:

 	$ g++ -fpic -shared crc_c.cpp -o libcrc_c.so

To compile the example file:

 	$ gcc crc_test.c -L. -Wl,-rpath,. -lcrc_c -o crc_test

To run the example:

 	$ ./crc_test 

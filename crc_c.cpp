#include <cstdlib>

#include "crc.h"
#include "crc.cpp"


#ifdef __cplusplus
extern "C" {
#endif


uint16_t crc16_kermit_vec(uint8_t *vec, size_t len)
{
	uint16_t crc1 = CRC::Calculate(vec,len,CRC::CRC_16_KERMIT());
	return crc1;
}

#ifdef __cplusplus
}
#endif

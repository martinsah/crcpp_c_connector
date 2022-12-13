#ifndef CRC_C_CONNECTOR_H 
#define CRC_C_CONNECTOR_H 

#ifdef __cplusplus
extern "C" {
#endif
 

#include <stddef.h>
#include <stdint.h>

uint16_t crc16_kermit_vec(uint8_t *vec, size_t len);

#ifdef __cplusplus
}
#endif


#endif

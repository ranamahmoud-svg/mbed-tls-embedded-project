/*
 * CFile1.c
 *
 * Created: 12/20/2024 11:41:19 AM
 *  Author: MEAPAL
 */ 
#include <stddef.h>

void mbedtls_platform_zeroize(void *buf, size_t len) {
	if (buf == NULL || len == 0) return;
	volatile unsigned char *p = buf;
	while (len--) *p++ = 0;
}

/*
 * CFile1.c
 *
 * Created: 12/20/2024 5:20:36 AM
 *  Author: MEAPAL
 */ 
#include "sha256_module.h"
#include "mbedtls/sha256.h"

void SHA256_ComputeHash(const uint8_t *input, size_t input_length, uint8_t output[32]) {
	mbedtls_sha256_context sha_ctx;
	mbedtls_sha256_init(&sha_ctx);
	mbedtls_sha256_starts(&sha_ctx, 0); // 0 for SHA-256, 1 for SHA-224
	mbedtls_sha256_update(&sha_ctx, input, input_length);
	mbedtls_sha256_finish(&sha_ctx, output);
	mbedtls_sha256_free(&sha_ctx);
}


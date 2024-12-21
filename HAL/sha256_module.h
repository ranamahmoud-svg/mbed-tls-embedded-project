/*
 * sha256.h
 *
 * Created: 12/20/2024 5:21:14 AM
 *  Author: MEAPAL
 */ 



#ifndef SHA256_MODULE_H_
#define SHA256_MODULE_H_

#include <stdint.h>
#include <stddef.h>

// Function to compute SHA-256 hash
void SHA256_ComputeHash(const uint8_t *input, size_t input_length, uint8_t output[32]);

#endif /* SHA256_MODULE_H_ */




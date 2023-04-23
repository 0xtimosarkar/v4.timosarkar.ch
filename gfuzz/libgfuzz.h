#ifndef __LIBGFUZZ_H__
#define __LIBGFUZZ_H__

#ifdef __cplusplus
extern "C" {
#endif

/** Initialize Rust & Garbage Collector. Must be called before anything else
 * of the API. Also, all following calls must come from the same thread as from
 * which this call was done.
 */
void RustMain();

/** Supported fuzzing tests */
bool gfuzz_attestation(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_attester_slashing(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_block(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_block_header(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_deposit(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_proposer_slashing(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);
bool gfuzz_shuffle(uint8_t* seed_ptr, uint64_t* output_ptr, size_t output_size);
bool gfuzz_voluntary_exit(uint8_t* input_ptr, size_t input_size,
  uint8_t* output_ptr, size_t* output_size, bool disable_bls);

#ifdef __cplusplus
}
#endif

#endif //__LIBGFUZZ_H__

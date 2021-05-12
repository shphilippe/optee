#ifndef COMPAT_H_
#define COMPAT_H_



static inline size_t __tee_alg_get_digest_size(uint32_t algo)
{
	switch (algo) {
	case TEE_ALG_MD5:
	case TEE_ALG_HMAC_MD5:
		return TEE_MD5_HASH_SIZE;
	case TEE_ALG_SHA1:
	case TEE_ALG_HMAC_SHA1:
	case TEE_ALG_DSA_SHA1:
		return TEE_SHA1_HASH_SIZE;
	case TEE_ALG_SHA224:
	case TEE_ALG_HMAC_SHA224:
	case TEE_ALG_DSA_SHA224:
		return TEE_SHA224_HASH_SIZE;
	case TEE_ALG_SHA256:
	case TEE_ALG_HMAC_SHA256:
	case TEE_ALG_DSA_SHA256:
		return TEE_SHA256_HASH_SIZE;
	case TEE_ALG_SHA384:
	case TEE_ALG_HMAC_SHA384:
		return TEE_SHA384_HASH_SIZE;
	case TEE_ALG_SHA512:
	case TEE_ALG_HMAC_SHA512:
		return TEE_SHA512_HASH_SIZE;
	case TEE_ALG_AES_CBC_MAC_NOPAD:
	case TEE_ALG_AES_CBC_MAC_PKCS5:
	case TEE_ALG_AES_CMAC:
		return TEE_AES_BLOCK_SIZE;
	case TEE_ALG_DES_CBC_MAC_NOPAD:
	case TEE_ALG_DES_CBC_MAC_PKCS5:
	case TEE_ALG_DES3_CBC_MAC_NOPAD:
	case TEE_ALG_DES3_CBC_MAC_PKCS5:
		return TEE_DES_BLOCK_SIZE;
	default:
		return 0;
	}
}

	/* Return algorithm digest size */
#define TEE_ALG_GET_DIGEST_SIZE(algo) __tee_alg_get_digest_size(algo)

#endif

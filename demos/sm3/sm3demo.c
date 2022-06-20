/*
 * Copyright (c) 2014 - 2021 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <gmssl/sm3.h>
#include <gmssl/sm2.h>


int main(int argc, char **argv)
{
	/* sm3_hash
	SM3_CTX sm3_ctx;
	uint8_t buf[4096];
	ssize_t len;
	uint8_t dgst[32];
	int i;

	sha256_init(&sm3_ctx);
	while ((len = fread(buf, 1, sizeof(buf), stdin)) > 0) {
		sha256_update(&sm3_ctx, buf, len);
	}
	sha256_finish(&sm3_ctx, dgst);

	for (i = 0; i < sizeof(dgst); i++) {
		printf("%02x", dgst[i]);
	}
	printf("\n");
	
	return 0;
	*/

	SM2_KEY tmp;
	//const uint8_t skey[64] = "4f16ab84f1d146f036332f30cc00d76c6b598c01887d88d935e728d221f4506e";
	sm2_key_set_private_key(&tmp, "4f16ab84f1d146f036332f30cc00d76c6b598c01887d88d935e728d221f4506e");
	uint8_t pkey[64];
 	memcpy(pkey, tmp.public_key.x, 32);
    memcpy(pkey + 32, tmp.public_key.y, 32);
	for (int i = 0; i < 64; i++) {
		printf("%02x", pkey[i]);
	}
}

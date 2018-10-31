// Copyright (c) 2018 BSHA3 Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CRYPTO_HMAC_SHA3512_H
#define BITCOIN_CRYPTO_HMAC_SHA3512_H

#include <crypto/sha3512.h>

#include <stdint.h>
#include <stdlib.h>

/** A hasher class for HMAC-SHA-3-512. */
class CHMAC_SHA3512
{
private:
    CSHA3512 outer;
    CSHA3512 inner;

public:
    static const size_t OUTPUT_SIZE = 64;

    CHMAC_SHA3512(const unsigned char* key, size_t keylen);
    CHMAC_SHA3512& Write(const unsigned char* data, size_t len)
    {
        inner.Write(data, len);
        return *this;
    }
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
};

#endif // BITCOIN_CRYPTO_HMAC_SHA3512_H

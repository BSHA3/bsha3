// Copyright (c) 2018 BSHA3 Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CRYPTO_SHA3_H
#define BITCOIN_CRYPTO_SHA3_H

#include <stdint.h>
#include <stdlib.h>

#include <crypto/keccak/SHA3.h>

/** A hasher class for SHA3-256. */
class CSHA3
{
private:
    //uint32_t s[5];
    //unsigned char buf[64];
    //uint64_t bytes;
    SHA3_256 sha3Hasher;

public:
    static const size_t OUTPUT_SIZE = 32;

    CSHA3();
    CSHA3& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CSHA3& Reset();
};

#endif // BITCOIN_CRYPTO_SHA3_H

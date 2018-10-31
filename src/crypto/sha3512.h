// Copyright (c) 2018 BSHA3 Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CRYPTO_SHA3512_H
#define BITCOIN_CRYPTO_SHA3512_H

#include <stdint.h>
#include <stdlib.h>

#include <crypto/keccak/SHA3.h>

/** A hasher class for SHA3-512. */
class CSHA3512
{
private:
    //uint32_t s[5];
    //unsigned char buf[64];
    //uint64_t bytes;
    SHA3_512 sha3Hasher;

public:
    static const size_t OUTPUT_SIZE = 64;

    CSHA3512();
    CSHA3512& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CSHA3512& Reset();
};

#endif // BITCOIN_CRYPTO_SHA3512_H

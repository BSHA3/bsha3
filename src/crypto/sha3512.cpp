// Copyright (c) 2018 BSHA3 Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <crypto/sha3512.h>

#include <crypto/common.h>

#include <string.h>

// Internal implementation code.
namespace
{
/// Internal SHA-3-512 implementation.
namespace sha3512
{
    // (See crypto/keccak/SHA3)

} // namespace sha3512

} // namespace

////// SHA-3-512

CSHA3512::CSHA3512() : sha3Hasher()
{
    sha3Hasher.clear(); // or reset()
}

CSHA3512& CSHA3512::Write(const unsigned char* data, size_t len)
{
    sha3Hasher.update(data, len);
    return *this;
}

void CSHA3512::Finalize(unsigned char hash[OUTPUT_SIZE])
{
    sha3Hasher.finalize(hash, OUTPUT_SIZE);
}

CSHA3512& CSHA3512::Reset()
{
    sha3Hasher.reset();
    return *this;
}

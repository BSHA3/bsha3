// Copyright (c) 2018 BSHA3 Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <crypto/sha3.h>

#include <crypto/common.h>

#include <string.h>

// Internal implementation code.
namespace
{
/// Internal SHA-3 implementation.
namespace sha3
{
    // (See crypto/keccak/SHA3)

} // namespace sha3

} // namespace

////// SHA3

CSHA3::CSHA3() : sha3Hasher()
{
    sha3Hasher.reset();
}

CSHA3& CSHA3::Write(const unsigned char* data, size_t len)
{
    sha3Hasher.update(data, len);
    return *this;
}

void CSHA3::Finalize(unsigned char hash[OUTPUT_SIZE])
{
    sha3Hasher.finalize(hash, OUTPUT_SIZE);
}

CSHA3& CSHA3::Reset()
{
    sha3Hasher.reset();
    return *this;
}

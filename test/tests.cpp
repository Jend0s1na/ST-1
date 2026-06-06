// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

extern bool checkPrime(uint64_t value);
extern uint64_t nPrime(uint64_t n);
extern uint64_t nextPrime(uint64_t value);
extern uint64_t sumPrime(uint64_t hbound);

TEST(CheckPrime, Prime2) {
    ASSERT_TRUE(checkPrime(2));
}

TEST(CheckPrime, Prime13) {
    ASSERT_TRUE(checkPrime(13));
}

TEST(CheckPrime, NotPrime1) {
    ASSERT_FALSE(checkPrime(1));
}

TEST(CheckPrime, NotPrime15) {
    ASSERT_FALSE(checkPrime(15));
}

TEST(NPrime, FirstPrime) {
    ASSERT_EQ(2, nPrime(1));
}

TEST(NPrime, FifthPrime) {
    ASSERT_EQ(11, nPrime(5));
}

TEST(NPrime, TenthPrime) {
    ASSERT_EQ(29, nPrime(10));
}

TEST(NextPrime, After4) {
    ASSERT_EQ(5, nextPrime(4));
}

TEST(NextPrime, After11) {
    ASSERT_EQ(13, nextPrime(11));
}

TEST(NextPrime, After20) {
    ASSERT_EQ(23, nextPrime(20));
}

TEST(SumPrime, LessThan10) {
    ASSERT_EQ(17, sumPrime(10)); // 2+3+5+7
}

TEST(SumPrime, LessThan20) {
    ASSERT_EQ(77, sumPrime(20)); // 2+3+5+7+11+13+17+19
}

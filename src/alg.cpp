// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  if (value <= 3) {
    return true;
  }
  for (int i = 2; i < value; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int count = 0;
  for (uint64_t t = 1; count < n; t++) {
    if (checkPrime(t)) {
      count++;
    }
    if (count == n) {
      return t;
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  bool end=true;
  for (uint64_t r = value + 1; (true) ; r++) {
    if (checkPrime(r)) {
      return r;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summ = 0;
  for (int w = hbound - 1; w > 1; w--) {
    if (checkPrime(w)) {
      summ += w;
    }
  }
  return summ;
}

uint32_t reverseBits(uint32_t n) {
    uint32_t ret = n&1;
    n >>= 1;
    for (int i = 0; i < 31; i++, n >>= 1) {
        ret <<= 1;
        ret |= n&1; 
    }
    return ret;
}

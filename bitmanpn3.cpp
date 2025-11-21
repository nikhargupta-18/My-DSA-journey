// XOR operation    
// a = 010100101011
// b = 110101101101
// ans= 100001000110 = a XOR b = a ^ b (c ++)
// 0^A = A always , A^A = 0 , ordering doesnt matter--> (2^3)^1=3^(1^2)=2^(1^3)


// to check which is the highest set bit-->
int n = 212;
int number_of_leading_zeros = __builtin_clz(n);
// for example 000 0000 100 0 --> no. of leading zero = 7
int msb = 63 - number_of_leading_zeros; // for 64 bit integer

//for long long  (used when shift is large)
long long x = __builtin_clzll(n);
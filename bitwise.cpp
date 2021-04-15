
// count set bits

ll setBit(ll n) {


	if (n == 0)
		return 0;

	else
		return (n & 1) + setBit(n >> 1);
}

// set kth bit

ll setkBit(ll n, ll k) {

	return ((1 << k) | n);
}
//todo Brian Kernighan's Algo

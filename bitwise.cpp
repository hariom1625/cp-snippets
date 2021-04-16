
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
// Brian Kernighan's Algo to count number of setBit of a number

ll countSetBit(ll n) {


	if (n == 0)
		return 0;

	else 1 + countSetBit(n & (n - 1));
}

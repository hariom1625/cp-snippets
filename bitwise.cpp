
// count set bits

ll setBit(ll n) {


	if (n == 0)
		return 0;

	else
		return (n & 1) + setBit(n >> 1);
}


//todo Brian Kernighan's Algo
// to count number of digits
ll countDig(ll n) {
	ll c = 0;

	while (n > 0) {
		n = n / 10;
		c++;
	}
	return c;
}



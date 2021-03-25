
ll maxSum(ll a[], ll n) {


	ll b = INT_MIN, c = 0;

	for ( ll i = 0; i < n; i++) {


		c = c + a[i];
		if (b < c)
			b = c;
		if (c < 0)
			c = 0;
	}
	return b;
}

ll binaryExpo(ll x, ll y) {

	ll ans = 1;

	while (y) {

		if (y % 2 != 0) {
			ans = ans * x;
			y--;
		}
		else {
			x = x * x;
			y = y / 2;
		}
	}

	return ans;
}
ll binarySearch(ll a[], ll x, ll n) {

	ll l = 0, r = n - 1, m;

	while (r >= l) {


		m = (l + r) / 2;
		cout << m << " ";
		if (a[m] == x) {
			return 1;
		}

		if (a[m] > x)
			r = m - 1;
		else
			l = m + 1;
	}

	return 0;
}
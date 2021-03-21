long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}


ll lcmofarr(ll a, ll n) {

	ll ans = a[0];

	for (ll i = 1; i < n; i++) {
		ans = (((a[i] * ans)) / (gcd(a[i], ans)));
	}

	return ans;
}


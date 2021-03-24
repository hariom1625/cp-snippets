ll n = 1000000;
vector<ll> p;


void SoE() {
	bool prime[n + 1];

	memset(prime, 1, sizeof(prime));

	for (ll i = 2; i * i <=  n; i++) {

		if (prime[i] == 1)
		{

			for (ll j = i * i; j <= n; j += i)
				prime[j] = 0;
		}
	}

	for (ll i = 2; i <= n; i++) {
		if (prime[i]) {
			p.push_back(i);
		}
	}


}


ll checkSquare(long double n) {


	if (n >= 0) {

		long long sq = sqrt(n);
		if (sq * sq == n)
			return 1;

	}

	return 0;
}

ll checkPrime(ll n) {

	if (n <= 1)
		return 0;
	if (n <= 3)
		return 1;
	else if (n % 2 == 0 || n % 3 == 0)
		return 0;
	else {

		for (ll i = 5; i * i <= n; i += 6)
			if (n % i == 0 || n & (i + 2) == 0)
				return 0;

	}
	return 1;
}
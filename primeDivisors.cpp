void primeD(ll n) {

	while (n % 2 == 0) {

		v1.push_back(2);
		n /= 2;
	}



	for (ll i = 3; i <= sqrt(n); i += 2) {

		if (n % i == 0) {

			v1.push_back(i);
			n /= i;
		}
	}

	if (n > 2) {
		cout << "n= " << n << " ";

		v1.push_back(n);
		cout << "v1= " << v1[1];
	}

}
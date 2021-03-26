ll fact(ll n) {


	if (n == 1)
		return 1;
	else return fact(n) * fact(n - 1);
}


ll nCr(ll n, ll r) {


	return fact(n) / (fact(r) * fact(n - r));
}
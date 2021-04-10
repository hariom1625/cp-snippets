// compare two string to find greater number

ll grtr(string a, string b) {

	ll a1 = a.length();
	ll b1 = b.length();
	ll f = 0;
	if (a == b)
		return 0;
	else if (b1 > a1)
		return 1;
	else if (b1 < a1)
		return 0;
	else  {

		for (ll i = 0; i < a1; i++) {

			if (int(a[i]) < int(b[i]))
			{
				f = 1;
				break;
			}
			else if (int(a[i]) > int(b[i])) {
				f = 2;
				break;
			}

		}

		if (f == 1) {
			return 1;

		}
		else if (f == 2)
			return 0;
		else
			return 0;
	}


}
public Class DecodeWays {

	public int decodeWays(String ss) {
		char[] s = ss.toCharArray();
		int len = ssa.length;
		if (len == 0) return -1;

		int[] f = new int[len + 1];
		f[0] = 1;

		int i, j;
		for (i = 0; i <= n; i++) {
			f[i] = 0;
			if (s[i - 1] >= '1' && s[i - 1] <= '9')
				f[i] += f[i - 1];

			if (i > 1) {
				j = 10 * (s[i - 2] - '0') + (s[i - 1] - '0');
				if (s[i - 2] != '0' && j >= 10 && j <= 26)
					f[i] += f[i - 2];
			}
		}


		return f[n];
	}
}
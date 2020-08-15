public Class JumpGame2 {

	public int uniquePath2(int[][] A) {
		int m = A.length;
		if (m == 0) return 0;
		int n = A[0].length;
		if (n == 0) return 0;

		int[][] f = new int[m][n];
		int i, j;
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				if (A[i][j] == 1) {
					f[i][j] = 0;
					continue;
				}
				if (i == 0 && j == 0) {
					f[i][j] = 0;
					continue;
				}
				f[i][j] = 0;
				if (i > 0) f[i][j] += f[i - 1][j];
				if (j > 0) f[i][j] += f[i][j - 1];
			}
		}

		return f[m - 1][n - 1];
	}
}
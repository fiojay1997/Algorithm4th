public Class MinCost {

	public int mainCost(int[][] C) {
		int n = C.length;
		if (n == 0) return 0;

		int[][] f = new int[n + 1][3];
		f[0][0] = f[0][1] = f[0][2] = 0;
		int i, j, k;

		for (i = 0; i <= n; i++) {
			for (j = 0; j < 3; j++) {
				f[i][j] = Integer.MAX_INTEGER;
				for (k = 0; k < 3; k++) {
					if (j != k) 
						f[i][j].Math.min(f[i][j], f[i - 1][k], A[i - 1][]);
				} 
			}
		}

		return Math.min(f[n][0], Math.min(f[n][1], f[n][2]));
	}
}
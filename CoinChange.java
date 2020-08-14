import java.lang.Math;

public class CoinChange {

	// recursive 
	public int f(int x) {
		if (x == 0) return 0;
		int res = Integer.MAX_VALUE;
		if (x >= 2) res = Math.min(f(x - 2) + 1, res);
		if (x >= 5) res = Math.min(f(x - 5) + 1, res);
		if (x >= 7) res = Math.min(f(x - 7) + 1, res);
		return res;
	}

	// dp
	public int f(int[] A, int x) {
		int[] k = new int[x + 1];
		int n = A.length;

		f[0] = 0;
		int i, j;
		for (i = 1; i <= x; ++i) {
			f[i] = Integer.MAX_VALUE;
			for (j = 0; j < n; ++j) {
				if (i > A[j] && f[i - A[j]] != Integer.MAX_VALUE) 
					f[i] = Math.min(f[i - A[j]] + 1, f[i]);
			}
		}

		if (f[x] == Integer.MAX_VALUE) return -1;
		return f[x];
	}
}
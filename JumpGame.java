public Class JumpGame {

	public boolean canJump(int[] A) {
		int n = A.length;
		boolean[] f = new boolean[n];
		f[0] = true;

		for (int i = 1; i < n; i++) {
			f[i] = false;
			for (int j = 0; j < i; j++) {
				if (f[j] && j + A[j] >= i) {
					f[i] = true;
					break;
				}
			}
		}
		return f[n - 1];
	}
}
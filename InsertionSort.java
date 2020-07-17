public Class InsertionSort implements Util {

	private Comparable[] a;

	public InsertionSort(Comparable[] a) {
		this.a = a;
	}

	public void sort(Comparable[] a) {
		for (int i = 1; i < a.length; i++) {
			for (int j = i; j > 0 && less(a[j], a[j - 1]); j--) {
				exchange(a, j, j - 1);
			}
		}
	}
}
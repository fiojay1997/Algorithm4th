public Class SpeedTest {

	public static double getTimeSpanForSorting(String algoName, Comparable[] arr) {
		Stopwatch stopWatch = new Stopwatch();
		if (algoName.equals("selction")) {
			SelectionSort ss = new SelectionSort(arr);
			ss.sort();
		}
		if (algoName.equals("insertion")) {
			InsertionSort ss = new InsertionSort(arr);
			ss.sort();
		}

		return stopWatch.elapsedTime();
	}
}
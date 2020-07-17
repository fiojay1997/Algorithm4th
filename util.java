public abstract Class Util {

    public abstract void sort(Comparable[] a);

	// Check if the array has been sorted
    public static boolean isSorted(Comparable[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < arr[i + 1]) 
                return false;
        }
        return true;
    }

    // Check if v is less than w
    public static boolean less(Comparable v, Comparable w) {
        return v.compareTo(w) < 0;
    }

    // Print out the array
    public static void show(Comparable[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " " );
            System.out.println();
        }
    }

    // Exchange two elements in an array
    public static void exchange(Comparable[] a, int i, int j) {
    	Comparable temp = a[i];
    	a[i] = a[j];
    	a[j] = temp;
    }

    public static Duration calculateRunningTime() {
    	Instant start = Instant.now();
    	// Operating sort here.
    	sort();
    	Intant end = Instant.now();
    	Duration duration = Duration.between(start, end);
    	return duration;
    }

    public static int generateRandomArr(int size, int seed) {
    	Random rand = new Random();
    	int[] arr = new int[size];
    	for (i = 0; i < size; i++) {
    		arr[i] = rand.nextInt(seed);
    	}

    	return arr;
    }
}

public Class Util {

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
    public static show(Comparable[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " " );
            System.out.println();
        }
    }

    // Exchange two elements in an array
    public static exchange(Comparable[] a, int i, int j) {
    	Comparable temp = a[i];
    	a[i] = a[j];
    	a[j] = temp;
    }
}

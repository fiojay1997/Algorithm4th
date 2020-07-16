public Class Util {

    public static boolean isSorted(omparable[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < arr[i + 1]) 
                return false;
        }
        return true;
    }

    public static boolean less(Comparable v, comparable w) {
        return v.compareTo(w) < 0;
    }

    public static show(Comparable[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " " );
            System.out.println();
        }
    }

    private Util() {}
    
    private static final Util instance = new Util();

    public Util getInstance() {
        return instance; 
    }
}

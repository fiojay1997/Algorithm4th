public Class Kittis1 {
    
    public int anag(List<Stirng> ss) {
        Map<String, Integer> m = new HashMap<>();
        char[] ssc = new char[]{};
        for (int i = 0; i < ss.size(); i++) {
            ssc[i] = ss.get(i).toCharArray();
        }
        
        for (int j = 0; j < ssc.length; j++) {
            Array.sort(ssc[i]);
        }
        
        while ()
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.next();
        int b = s.next();
        List<String> ss = new ArrayList<>();
        while (s.hasNext()) {
            ss.add(s.next());
        }

        System.out.println(anag(ss));
    }
}

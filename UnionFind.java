public class UnionFind {

    private int[] id;
    private int count;

    public UnionFind(int N) {
    	count = N;
    	id = new int[N];
    	for (int i = 0; i < N; i++) {
    		id[i] = i;
    	}
    }

    public int count() {
    	return count;
    }
    
}

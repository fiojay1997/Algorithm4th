public Class Anag {

	public int getAnag(String[] s) {
		Stack<String> stack = new Stack<>();
		int count = 0;
		for (int i = 0; i < s.length; i++) {
			for (int j = i; j < s.length; j++) {
				stack.push(s[i]);
				if (s[j].equals(stack.peek())) count ++;
			}
		}
		return count;
	}

	public static void main(String[] args) throws IoException{
		BufferedReader reader =  new BufferedReader(new InputStreamReader(System.in)); 
        String[] ss = new String[]{};
        String s = reader.readLine(); 
        ss.add(s);
        System.out.println(getAnag(ss));
	}
}
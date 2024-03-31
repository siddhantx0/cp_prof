package dynammicProgramming;
import java.util.*;

public class Dp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println(memoizedCutRod(new int[] {1, 5, 3, 12, 1}, 40));
		System.out.println(bottomUpCutRod(new int[] {1, 5, 3, 12, 1}, 40));
		
		System.out.println(fibMemo(10));
	}
	
	// memoized-cut-rod
	public static int memoizedCutRod(int[] p, int n) {
		// p is the price
		int[] r = new int[n+1];
		for (int i = 1; i <= n; i++) {
			r[i] = Integer.MIN_VALUE;
		}
		return memoizedCutRodAux(p, n, r);
	}
	// memoized-cut-rod aux()
	public static int memoizedCutRodAux(int[] p, int n, int[] r) {
		if (r[n] >= 0) return r[n];
		int q = 0; // holding variable in memory
		if (n == 0) q = 0;
		else {
			q = Integer.MIN_VALUE; // for dynamic array sizes, the prices array will be differently sized compared to the others
			for (int i = 1; i <= Math.min(n, p.length); i++) 
				q = Integer.max(q, p[i-1] + memoizedCutRodAux(p, n-i, r));
		}
		r[n] = q;
		return r[n];
	}
	
	// bottom-up-cut-rod
	public static int bottomUpCutRod(int[] p, int n) {
		int[] r = new int[n+1];
		r[0] = 0;
		for (int j = 1; j <= n; j++) {
			int q = Integer.MIN_VALUE;
			for (int i = 1; i <= Math.min(j, p.length); i++) 
				q = Math.max(q, p[i-1] + r[j - i]);
			r[j] = q;
		}
		return r[n];
	}
	
	static HashMap<Integer, Integer> memoFib = new HashMap<Integer, Integer>();;
	public static int fibMemo(int n) {
		if (n <= 2) return 1;
		if (memoFib.containsKey(n)) return memoFib.get(n);
		else {
			int a = fibMemo(n - 1);
			int b = fibMemo(n - 2);
			memoFib.put(n, a+b);
			return memoFib.get(n);
		}
	}
}
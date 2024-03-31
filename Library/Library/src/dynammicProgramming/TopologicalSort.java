// GOOD.
package dynammicProgramming;
import java.util.*;

class Graph {
	private int v;
	private LinkedList<Integer> adj[];
	
	// constructor
	Graph(int v) {
		this.v = v; // number of vertices
		adj = new LinkedList[v];
		for (int i = 0; i < v; ++i) 
			adj[i] = new LinkedList();
	}
	
	void addEdge(int v, int w) {
		adj[v].add(w); // adding an edge from v to w;
	}
	
	void topologicalSortUtil(int v, boolean visited[], Stack stack) {
		visited[v] = true;
		Integer i;
		
		Iterator<Integer> it = adj[v].iterator();
		while (it.hasNext()) {
			i = it.next();
			if (!visited[i]) {
				topologicalSortUtil(i, visited, stack);
			}
		}
		
		stack.push(new Integer(v));
	}
	
	void topologicalSort() {
		Stack stack = new Stack();
		
		boolean visited[] = new boolean[v];
		for (int i = 0; i < v; i++) 
			visited[i] = false;
		
		for (int i = 0; i < v; i++ ) {
			if (visited[i] == false) 
                topologicalSortUtil(i, visited, stack); 
		}
		
		while (stack.empty() == false) {
			System.out.println(stack.pop() + " ");
		}
	}
}

public class TopologicalSort {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Graph g = new Graph(7);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(0, 3);
        g.addEdge(1, 6); 
        g.addEdge(2, 4); 
        g.addEdge(6, 5); 
        g.addEdge(3, 5);
        
        System.out.println("Following is a Topological " + 
                "sort of the given graph"); 
        g.topologicalSort(); 
	}
}

// REDO.
package dynammicProgramming;
import java.util.*;

class Graph2 {
    private Map<Integer, List<Integer>> adj;
    private Map<Integer, Integer> vertexIndexMapping;
    private int indexCounter = 0;

    // Constructor
    Graph2() {
        adj = new HashMap<>();
        vertexIndexMapping = new HashMap<>();
    }

    void addEdge(int v, int w) {
        adj.putIfAbsent(v, new LinkedList<>());
        adj.get(v).add(w);

        vertexIndexMapping.putIfAbsent(v, indexCounter++);
        vertexIndexMapping.putIfAbsent(w, indexCounter++);
    }

    void topologicalSortUtil(int v, boolean visited[], Stack<Integer> stack) {
        int vIndex = vertexIndexMapping.get(v);
        visited[vIndex] = true;
        for (Integer i : adj.getOrDefault(v, Collections.emptyList())) {
            int iIndex = vertexIndexMapping.get(i);
            if (!visited[iIndex]) {
                topologicalSortUtil(i, visited, stack);
            }
        }
        stack.push(v);
    }

    void topologicalSort() {
        Stack<Integer> stack = new Stack<>();
        boolean visited[] = new boolean[vertexIndexMapping.size()];

        for (int v : adj.keySet()) {
            int vIndex = vertexIndexMapping.get(v);
            if (!visited[vIndex])
                topologicalSortUtil(v, visited, stack);
        }

        while (!stack.empty()) {
            System.out.println(stack.pop() + " ");
        }
    }
}

public class TopologicalSort2 {
    public static void main(String[] args) {
        Graph2 g = new Graph2();
        g.addEdge(18, 8);
        g.addEdge(18, 13);
        g.addEdge(18, 12);
        g.addEdge(13, 15);
        g.addEdge(15, 2);
        g.addEdge(12, 19);
        g.addEdge(8, 2);

        System.out.println("Following is a Topological sort of the given graph");
        g.topologicalSort();
    }
}
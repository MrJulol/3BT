from queue import PriorityQueue


class Graph:
    def __init__(self, num_of_vertices) -> None:  # Initializes the Class
        self.v = num_of_vertices  # Anzahl der Eckpunkte
        self.edges = [[-1 for _ in range(num_of_vertices)]for _ in range(num_of_vertices)]  # Matrix of edges
        self.visited = []  # List of visited vertices

    def add_edge(self, u, v, distance) -> None:  # Add edge to object
        self.edges[u][v] = distance
        self.edges[v][u] = distance

    def dijkstra(self, start_vertex) -> dict:
        # Initializes a dictionary to all inf (v = number of vertices)
        d = {v: float('inf') for v in range(self.v)}
        d[start_vertex] = 0  # As start vertice to start vertice = 0

        pq = PriorityQueue()  # initialise a priorityQueue to queue the unvisited vertices
        pq.put((0, start_vertex))  # Put Start Vertice into queue

        while not pq.empty():  # while queue not empty
            (distance, current_vertex) = pq.get()  # Get vertice from queue
            self.visited.append(current_vertex)  # Mark as visited

            for neighbor in range(self.v):
                if self.edges[current_vertex][neighbor] != -1:  # if distance not measured
                    # get distance
                    distance = self.edges[current_vertex][neighbor]
                    if neighbor not in self.visited:  # if neighbor not visited
                        # get old len from dict, calc new len
                        old_cost = d[neighbor]
                        new_cost = d[current_vertex] + distance
                        if new_cost < old_cost:  # if new len < old len put new object into pq
                            pq.put((new_cost, neighbor))
                            d[neighbor] = new_cost  # Update cost
        return d


print(float('inf'))

g = Graph(9)  # initialise g as Object 'Graph' and add edges and distances
g.add_edge(0, 1, 4)  # p1, p2, len
g.add_edge(0, 6, 7)
g.add_edge(1, 6, 11)
g.add_edge(1, 7, 20)
g.add_edge(1, 2, 9)
g.add_edge(2, 3, 6)
g.add_edge(2, 4, 2)
g.add_edge(3, 4, 10)
g.add_edge(3, 5, 5)
g.add_edge(4, 5, 15)
g.add_edge(4, 7, 1)
g.add_edge(4, 8, 5)
g.add_edge(5, 8, 12)
g.add_edge(6, 7, 1)
g.add_edge(7, 8, 3)

Res = g.dijkstra(0)  # call dijkstra on g with start vertex

for vertex in range(len(Res)):
    print("Distance from vertex 0 to vertex",
          vertex, "is", Res[vertex])  # Print all lens

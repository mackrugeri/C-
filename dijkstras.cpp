#include <iostream>
using namespace std;
#define V 9

class dijkstras{
	private:
		int dist[V];
		int u;
	public:
		void printing()
		{
			cout << "Distance Start to end" << endl;
			for (int i = 0; i < V; i++)
				cout << i << "->" << dist[i] << endl;
		}
		void dijkstra(int graph[V][V], int src)
		{
			
			bool sptSet[V];
			for (int i = 0; i < V; i++)
			{
				dist[i] = INT_MAX, sptSet[i] = false;
			}
				
			dist[src] = 0;
			for (int count = 0; count < V - 1; count++) {
				int min = INT_MAX, min_index;
				for (int v = 0; v < V; v++)
				if (sptSet[v] == false)
				{
					if(dist[v] <= min)
					{
						min = dist[v], min_index = v;	
					}
				}
				u = min_index;
				sptSet[u] = true;
				for (int v = 0; v < V; v++)
					if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
						&& dist[u] + graph[u][v] < dist[v])
						dist[v] = dist[u] + graph[u][v];
			}
			printing();
		}
};

int main()
{
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstras d;
	d.dijkstra(graph, 0);
}


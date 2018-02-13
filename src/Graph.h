
#include "Graph_Builder.h"

namespace Tp1
{
	public class Graph
	{
		private:
			Node[] nodes = [];
			int sourceNodeId = 0;
			int destinationNodeId = 0;

			Graph(const Node[] &nodes, const int source, const int dest)
			{
				this->nodes = nodes;
				this->sourceNodeId = source;
				this->destinationNodeId = dest;
			}

		public:
			int nodeCount() const
			{
				//TODO Nathalie!
			}

			Vertex[] &findPath(int node1, int node2) const
			{
				//TODO Reda!
			}

			int findMaxFlow() const
			{
				//TODO Reda!
			}

			void displayInConsole() const
			{
				//TODO Arthur!
			}

			Node &getNodeById(int id) const
			{
				//TODO Nathalie!
			}

			int computeMinimalCut()
			{
				//TODO
			}

			Graph &computeResidualGraph()
			{
				//TODO
			}

			int computeCompatibleFlow()
			{
				//TODO
			}

			int computeMaxCompatibleFlow()
			{
				//TODO
			}

			Node[] &getNodes() const
			{
				//TODO Nathalie!
			}

			int getSourceNodeId() const
			{
				//TODO Nathalie!
			}

			int getDestinationNodeId() const
			{
				//TODO Nathalie!
			}
	}
}

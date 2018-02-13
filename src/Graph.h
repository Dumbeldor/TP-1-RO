
#include "Graph_Builder.h"

namespace Tp1
{
	public class Graph
	{
		private:
			Node[] nodes;
			int sourceNodeId;
			int destinationNodeId;

			Graph(Node[] nodes, int source, int dest)
			{
				this->nodes = nodes;
				this->sourceNodeId = source;
				this->destinationNodeId = dest;
			}

		public:
			int nodeCount()
			{
				//TODO Nathalie!
			}

			Vertex[] findPath(int node1, int node2)
			{
				//TODO Reda!
			}

			int findMaxFlow()
			{
				//TODO Reda!
			}

			void displayInConsole()
			{
				//TODO Arthur!
			}

			Node getNodeById(int id)
			{
				//TODO Nathalie!
			}

			int computeMinimalCut()
			{
				//TODO
			}

			Graph computeResidualGraph()
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

			Node[] getNodes()
			{
				//TODO Nathalie!
			}

			int getSourceNodeId()
			{
				//TODO Nathalie!
			}

			int getDestinationNodeId()
			{
				//TODO Nathalie!
			}
	}
}

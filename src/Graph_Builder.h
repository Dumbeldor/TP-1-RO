
namespace Tp1
{
	public class Graph::Builder
	{
		private:
			Node[] nodes;
			int sourceNodeId;
			int destinationNodeId;

		public:
			Builder(int numberOfNodes)
			{
				this->nodes = new Node[numberOfNodes];
			}

			Builder addVertex(
				int node1,
				int node2,
				int minCapacity,
				int maxCapacity,
				int flow
			)
			{
				//TODO Arthur!
				return this;
			}

			Builder setSourceNode(int id)
			{
				this->sourceNodeId = id;

				return this;
			}

			Builder setDestinationNode(int id)
			{
				this->destinationNodeId = id;

				return this;
			}

			Graph build()
			{
				//TODO Arthur! (don't forget to handle exceptions)
			}
	}	
}

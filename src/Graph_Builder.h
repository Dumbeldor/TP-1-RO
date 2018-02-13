
namespace Tp1
{
	public class Graph::Builder
	{
		private:
			Node[] nodes;
			int sourceNodeId;
			int destinationNodeId;
			int numberOfNodes;

		public:
			Builder(int numberOfNodes)
			{
				this->numberOfNodes = numberOfNodes;
				this->nodes = new Node[this->numberOfNodes];

				int i;

				for (i = 0; i < this->numberOfNodes; i++)
				{
					this->nodes[i] = new Node();
				}
			}

			Builder addVertex(
				int node1,
				int node2,
				int minCapacity,
				int maxCapacity,
				int flow
			)
			{
				if (node1 < 0 || node1 > this->numberOfNodes)
				{
					//TODO Lancer exception.
				}

				if (minCapacity > maxCapacity)
				{
					//TODO Lancer exception.
				}

				if (flow < minCapacity || flow > maxCapacity)
				{
					//TODO Lancer exception.
				}

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

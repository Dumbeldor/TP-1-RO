
namespace Tp1
{
	public class Graph::Builder
	{
		private:
			Node[] nodes = [];
			int sourceNodeId = 0;
			int destinationNodeId = 0;
			int numberOfNodes = 0;

		public:
			Builder(const int numberOfNodes)
			{
				this->numberOfNodes = numberOfNodes;
				this->nodes = new Node[this->numberOfNodes];

				for (int i = 0; i < this->numberOfNodes; i++)
				{
					this->nodes[i] = new Node();
				}
			}

			Builder *addVertex(
				const int node1,
				const int node2,
				const int minCapacity,
				const int maxCapacity,
				const int flow
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
				// Attention this c'est un pointeur vers ton instance
				return this;
			}

			Builder *setSourceNode(const int id)
			{
				this->sourceNodeId = id;

				return this;
			}

			Builder *setDestinationNode(const int id)
			{
				this->destinationNodeId = id;

				return this;
			}

			Graph &build()
			{
				//TODO Arthur! (don't forget to handle exceptions)
			}
	}
}

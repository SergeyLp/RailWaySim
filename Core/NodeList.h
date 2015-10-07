#pragma once
namespace Railway 
{
   //class Node;
   class Node {
	public:
		void assign(const std::string& name, const float len = 0.0);
		std::string toString()const;

	private:
		std::string name_;
		float	len_;
      //Node *attachedNodes1;
      //Node *attachedNodes2;
      //Node *attachedNodes3;

      Node* attachedNodes[4];
      ///std::array<Node*, 3> nodesArray;
   };

	class NodeList{
	public:
		void load();
	private:
		std::vector<Node> list;
	};

	class Track: public Node {
	public:
	};

	class Junction: public Node{
	public:
	};


}//namespace
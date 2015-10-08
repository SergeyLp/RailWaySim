#pragma once

/// Assume track attached left to right, then up to down:
/// 1-2  track
/// 1-2 1-3 junction
/// 1-2 3-2 junction
/// 1-2 3-4 cross

namespace Railway 
{
   class Node {
	public:
      static const int MAX_ATTACHED_POINTS = 4;
		void assign(const std::string& name, const float len);
		std::string toString()const;

      void attach(Node* attachedNode, const int idOfAttachedPoint); 

	private:
		std::string name_;
		float	len_;

      Node* attachedNodes[MAX_ATTACHED_POINTS];
      ///std::array<Node*, 3> nodesArray;
   };

	class NodeList{
	public:
		void load();
      std::string toString(const bool verbosed = false)const;
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
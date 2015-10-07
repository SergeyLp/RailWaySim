#include "stdafx.h"
#include "NodeList.h"

using std::string;

namespace Railway {

	void NodeList::load() {
		Node n;
		//n.assign(L"Санк Петербург", 100.0);
		//list.push_back(n);
	};

	void Node::assign(const string& name, const float len){
		name_ = name;
		len_ = len;
	}

	string Node::toString() const {
		return name_;
	}

   void Node::attach( Node* attachedNode, const int idOfAttachedPoint) {
      attachedNodes[idOfAttachedPoint] = attachedNode;
   }

}
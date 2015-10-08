#include "stdafx.h"
#include "NodeList.h"

using std::string;

namespace Railway {

	void NodeList::load() {
		Node n;
		n.assign("Санк Петербург", 0.0);
		list.push_back(n);
      n.assign("Ланская", 0.0);
      list.push_back(n);
   }

   std::string NodeList::toString(const bool verbosed) const {
      string buff;
      buff.reserve(0xFFF);
      for (const auto n : list) {
         if (verbosed) {
            buff += std::to_string((uint64_t)&n) + ": "; // TODO: may be std::move ?
         }
         buff += n.toString() + ((verbosed) ? " " : "-");   // TODO ?
      }
      buff.resize(buff.length() - 1);  // Remote last delimiter
      return buff;
   }

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
#include "stdafx.h"
#include "global.h"
#include "NodeList.h"

using std::string;

inline std::ostream& operator << (std::ostream& strm, const Railway::StopPoint& sp) {
   strm << sp.toString();
   return strm;
}

inline std::istream& operator >> (std::istream& strm, Railway::StopPoint& sp) {
   std::string shortName;
   strm >> sp.name;
   strm >> shortName;
   strm >> sp.distance;
   return strm;
}

namespace Railway {
   #if  0
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
   #endif

   void Branch::load(const std::string & fileName) {
      std::ifstream file(fileName);
      if (!file) return;
      while (!file.eof()) {
         StopPoint sp;
         file >> sp;
         points.push_back(sp);
      }
   }

   string Branch::toString() const {
      string ss;
      for (const auto& sp : points) {
         ss += sp.toString() + "\n";
      }
      return ss;
   }

   std::vector<StopPoint> Branch::stopPoints() const {
      return points;
   }
   
   std::string StopPoint::toString() const {
      string ss(name);
      ss += "\t" + std::to_string(distance);
      return ss;
   }

}


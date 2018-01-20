/*
* This is an independent project of an individual developer. Dear PVS-Studio, please check it.
* PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
*/
#include "stdafx.h"
#include "../../../lib/!lip_def.h"
using namespace lip;
#include "NodeList.h"

using std::string;

/// Assume track attached left to right, then up to down:
/// 1-2  track
/// 1-2 1-3 junction
/// 1-2 3-2 junction
/// 1-2 3-4 cross


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

   //void Branch::load(const std::string & fileName) {
   void Branch::load(const std::experimental::filesystem::path& filePath){
      std::ifstream file(filePath);
      if (!file) return;
      StopPoint sp;
      while (file >> sp) {
         _stop_points.push_back(sp);
      }
   }

   string Branch::toString() const {
      string s;
      for (const auto& sp : _stop_points) {
         s += sp.toString() + "\n";
      }
      return s;
   }

   std::vector<StopPoint> Branch::stopPoints() const {
      return _stop_points;
   }
   
   std::string StopPoint::toString() const {
      string s(name);
      s += "\t" + std::to_string(distance);
      return s;
   }

}


#pragma once

namespace Railway 
{
   #if 0
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
   private:
      static int numName;
   };

    class Junction: public Node{
    public:
   private:
      static int numName;
   };

   class Attach {

   };

   class WayNode{
   public:
      std::vector<Attach> attaches;
      //attaches only two  it is for Station alias
   };

   class Way {
   private:
      //attaches only two
   };

   class Station {
   private:
      //attaches may be many
   };

   class Direction {
   public:
      std::list<WayNode> nodes;
   };

   class Layout {
   public:
      std::vector<Way> ways;
   };
   #endif
   class StopPoint {
   public:
      std::string name;
      ffloat distance;
      std::string toString() const;
   };

   class Branch {
    public:
         Branch() {};
         Branch(const std::experimental::filesystem::path& filePath) { load(filePath); }
         void load(const std::experimental::filesystem::path& filePath);
         std::string toString() const;
         std::vector<StopPoint> stopPoints() const;
   private:
         std::vector <StopPoint> _stop_points;
   };

}//namespace

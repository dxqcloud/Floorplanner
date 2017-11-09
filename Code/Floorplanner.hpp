
#ifndef FLOORPLANNER_HPP_
#define FLOORPLANNER_HPP_
#include "unordered_map"
#include "Node.hpp"
#include "vector"
using namespace std;
void floorplannerUnitTest();
class Floorplanner {
private:
	unordered_map<string,Node*> nodes;
	
protected:
	Node* sizeNodes(Node &nodeA, Node &nodeB, int cutType);
	double computeCost(Node* root);
	static bool acceptMove(double deltaCost, double temperature);
	static double coolDown(double temperature);
public:
	Floorplanner(list<Node>& nodes);
	Node* polishToTree(const vector<string>& experssion);
	vector<string> generateInitialExpression();
	void processCords(Node * root);
	static vector<string> move(vector<string> currentPolish);
	void floorplan();
	void printNodes();
	unordered_map<string, Node*> getNodes();
};



#endif  /*FLOORPLANNER_HPP_*/

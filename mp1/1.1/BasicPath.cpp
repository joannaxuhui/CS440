#include "BasicPath.h"
#include <stack>
#include <queue>


int Graph::DFS(node* r) {
	//assume the r is the valid node
	std::stack<node> depth;
	depth.push(r);
	while(!depth.empty())
	{
		auto foot=depth.top();
		depth.pop();
		if(foot->data==3)
		{
			std::cout<<"end with the goal!"std::endl;
			return;
		}
		else if(foot->data!=2)
		foot->data==2;
		
		if(foot->up&&foot->up->data==1)
		depth.push(foot->up);
		
		if(foot->right&&foot->right->data==1)
		depth.push(foot->right);
		
		if(foot->down&&foot->down->data==1)
		depth.push(foot->down);
		
		if(foot->left&&foot->left->data==1)
  		depth.push(foot->left);
	}

}

int Graph::BFS(node* r) {
	std::queue<node>width;
	width.push(r);
	while(!width.empty())
	{
		auto foot=depth.front();
		depth.pop();
		if(foot->data==3)
		{
			std::cout<<"end with the goal!"std::endl;
			return;
		}
		else if(foot->data!=2)
		foot->data==2;
		
		if(foot->up&&foot->up->data==1)
		width.push(foot->up);
		
		if(foot->right&&foot->right->data==1)
		width.push(foot->right);
		
		if(foot->down&&foot->down->data==1)
		width.push(foot->down);
		
		if(foot->left&&foot->left->data==1)
  		width.push(foot->left);

}

int Graph::Greedy(node* r) {

}

int Graph::AStar(node* r) {

}

int** maze_reader(char* filename, Graph* G) {

}

void maze_printer(Graph* g) {

}

int main(int argc, char const *argv[])
{
	char* filename = (char*)argv[1];
	Graph* G;
	maze_reader(filename, G);

	return 0;
}











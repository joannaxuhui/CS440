#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

class node {

	node* parent;
	node* right;
	node* up;
	node* left;
	node* down;

	int x, y;

};

class Graph {

	node* start;
	int width;
	int height;
	int** Maze;
	
	/*
		0: Empty
		1: Wall
		2: Dot
		3: Goal
	*/

	Graph(node* start, int width, int height, int** Maze);
	int DFS(node* r);
	int BFS(node* r);
	int Greedy(node* r);
	int AStar(node* r);

};
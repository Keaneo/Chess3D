// Chess3D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	Model cube = Model(8);
	
	cube.triangles[0].vertices[0] = Vertex();
}


struct Vertex 
{
	Vertex(float x, float y, float z, float r, float g, float b, float a, float nx, float ny, float nz)
	{

	}

	//Position
	
	float x = 0;
	float y = 0;
	float z = 0;

	//Colour

	float r = 0;
	float g = 0;
	float b = 0;
	float a = 0;

	//Normals

	float nx = 0; 
	float ny = 0;
	float nz = 0;
};

struct Triangle
{
	Vertex* vertices = NULL;

	Triangle()
	{

	}

	Triangle(Vertex v1, Vertex v2, Vertex v3)
	{
		
	}


	Vertex vertices[3] = {};
};

struct Model 
{
	Triangle* triangles = NULL;

	Model(int numTriangles)
	{
		triangles = new Triangle[numTriangles];
		for (int i = 0; i < numTriangles; i++)
		{
			*(triangles + i) = Triangle();
		}
	}
};
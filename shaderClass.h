#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cerrno>

// Read text file and convert it to std::string
std::string get_file_contents(const char* filename);

// Create, activate, delete program object & shader object 
class Shader
{
	public:
		GLuint ID;
		// Constructor that build the Shader Program from 2 different shaders
		Shader(const char* vertexFile, const char* fragmentFile);

		
		void Activate();
		void Delete();
	private:
		void compilerErrors(unsigned int shader, const char* type);
};


#endif


#version 330 core
uniform samplerCube tex;
in vec3 texCoord;
layout (location = 0) out vec4 colour;
void main(){
	colour = texture(tex, texCoord);
}
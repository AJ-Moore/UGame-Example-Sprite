

#version 330 core
uniform sampler2D tex;
in vec2 texCoord;
layout (location = 0) out vec4 colour;
void main(){
	colour = texture(tex, texCoord);
}
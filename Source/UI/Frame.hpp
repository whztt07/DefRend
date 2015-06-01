#pragma once

#include <vector>

#include "Element.hpp"
#include "Label.hpp"
#include "..\Renderer\UIRenderer.hpp"
#include "..\Material\Texture.hpp"

class Frame : public Element
{
private:
	Texture *headerTexture, *mainTexture;
	Label *titleLabel;
	std::vector<Element*> childElements;
	bool mouseDragging;
	glm::vec2 lastMousePosition;

public:
	Frame(glm::vec2 position, glm::vec2 size);

	bool load(std::string title = "");
	void destroy();

	void addChildElement(Element *element);
	void render(UIRenderer *uiRenderer, glm::vec2 parentPosition = glm::vec2(0.f, 0.f));

	void onMouseButtonDown(glm::vec2 mousePosition, int mouseButton);
	void onMouseButtonUp(glm::vec2 mousePosition, int mouseButton);
	void onMouseMove(glm::vec2 mousePosition);
};
#include "GraphicsMessage.h"

GraphicsMessage::GraphicsMessage()
{

}

GraphicsMessage::GraphicsMessage(const GRAPHICS_MESSAGE_TYPES& newType, const std::string& newFilename)
{
	type = newType;
	message.fileName = newFilename;
}

GraphicsMessage::GraphicsMessage(const GraphicsMessage& toCopy)
{
	type = toCopy.type;
	message = toCopy.message;
}

bool GraphicsMessage::operator=(const GraphicsMessage& toCopy)
{
	type = toCopy.type;
	message = toCopy.message;
	return true;
}
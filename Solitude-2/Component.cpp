#include "Component.h"

Component::Component()
{

}

Component::Component(const Component& copy)
{
	type = type;
	objectId = copy.objectId;
	numbers = copy.numbers;
	strings = copy.strings;
}

const Component& Component::operator=(const Component& copy)
{
	type = type;
	objectId = copy.objectId;
	numbers = copy.numbers;
	strings = copy.strings;
}
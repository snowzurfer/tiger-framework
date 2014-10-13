#ifndef _TGFW_ENTITY_H
#define _TGFW_ENTITY_H

// Header file for entity class

// Includes
#include <map>
#include <algorithm>
#include "component.h"

namespace tgfw {

class Entity
{
public:
	// Attach a component
	Entity &attach(IComponent& comp); 

	// Detach a component
	void detach(const int name);

	// Accessor functions
	const std::map<const int, IComponent*> &getComponents() const { return components_; };

private:
	// The map of attached components
	std::map<const int, IComponent*> components_;

protected:


};

}
// EO Namespace

#endif
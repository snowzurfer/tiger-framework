// Source file for entity class

// Includes
#include "entity.h"

namespace tgfw {

	Entity &Entity::attach(IComponent &comp) {
		components_[comp.getName()] = &comp;

		// Perform some method to inform that a component has been attached
		// so that nodes can get created and 
	}

}
// EO Namespace
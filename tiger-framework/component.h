#ifndef _TGFW_COMPONENT_H
#define _TGFW_COMPONENT_H

// Header file for component class
// Guideline: derived classes MUST define their own 
//			dtor, copy ctor & copy operator


// Includes


namespace tgfw {




class IComponent
{
public:
	// Default ctor
	IComponent(int name) : name_(name) {};

	// Declare dtor pure virtual to make the class become
	// an abstract one
	virtual ~IComponent() = 0;

	// Accessor functions
	const int &getName() const { return name_; };

private:
	// Unique name of the component. Fundamental: used to identify it
	const int name_;

protected:


};
// EO Class

}
// EO Namespace

#endif
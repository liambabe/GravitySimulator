#ifndef ButtonAction_H
#define ButtonAction_H

class ButtonAction 
{
public:
	virtual void actionPreformed() = 0;
};

class StartAction : public ButtonAction
{
public:
	void actionPreformed();
};


#endif
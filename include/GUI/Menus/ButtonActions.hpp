#ifndef ButtonAction_H
#define ButtonAction_H

class ButtonAction 
{
public:
	virtual void actionPreformed() = 0;
};

class DefaultAction : public ButtonAction
{
public:
	void actionPreformed();
};

class StartAction : public ButtonAction
{
public:
	void actionPreformed();
};


#endif
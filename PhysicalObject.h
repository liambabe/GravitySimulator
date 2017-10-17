class PhysicalObject
{

public:
	//getters
	double getMass();
	double getVelocity();
	double getAcceleration();
	double getHeight();

	//setters
	void setMass(double m);
	void setVelocity(double v);
	void setAcceleration(double a);
	void setHeight(double h);

private:
	double mass;
	double velocity;
	double acceleration;
	double height;

};

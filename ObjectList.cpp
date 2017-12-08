#include "ObjectList.h"

const int OBJECTCOUNT = 2;

static bool operator ==(const PhysicalObject& po1, const PhysicalObject& po2) {
	return ((po1.getMass() == po2.getMass()) && (po1.getRadius() == po2.getRadius()));
}

ObjectList::ObjectList() {
	array = new PhysicalObject[OBJECTCOUNT];
	addIndex = 0;
}

PhysicalObject ObjectList::get(int index) {
	return array[index];
} 

void ObjectList::add(PhysicalObject o) {
	array[addIndex] = o;
	addIndex++;
}

void ObjectList::remove(PhysicalObject o) {
	//TODO add in remove and shift on object index left 1;
}

void ObjectList::remove(int index) {
	//TODO add in remove and shift after index left 1
}

int ObjectList::findIndex(PhysicalObject o) {
	for (int i = 0; i < OBJECTCOUNT; i++) {
		if (array[i] == o) {
			return i;
		}
	}
	return -1;
}

bool ObjectList::contains(PhysicalObject o) {
	for (int i = 0; i < OBJECTCOUNT; i++) {
		if (array[i] == o) {
			return true;
		}
	}
	return false;
}



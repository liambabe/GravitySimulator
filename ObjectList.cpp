#include "ObjectList.h";

const int OBJECTCOUNT = 2;

ObjectList::ObjectList() {
	array = new int[OBJECTCOUNT];
	addIndex = 0;
}

void ObjectList::add(PhysicalObject o){
	array[addIndex] = o;
}

void ObjectList::remove(PhysicalObject o) {
	//TODO add in remove and shift on object index left 1;
}

void ObjectList::remove(int index) {
	//TODO add in remove and shift after index left 1
}

int ObjectList::findIndex(PhysicalObject o) {
	//TODO for loop over array
}

bool ObjectList::contains(PhysicalObject o) {
	//TODO for loop over array
}



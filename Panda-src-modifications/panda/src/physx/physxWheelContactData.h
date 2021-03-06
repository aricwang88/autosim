// Filename: physxWheelContactData.h
// Created by:  svanurp (23Mar12)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#ifndef PHYSXWHEELCONTACTDATA_H
#define PHYSXWHEELCONTACTDATA_H

#include "physxShape.h"
#include "physx_includes.h"

////////////////////////////////////////////////////////////////////
//       Class : PhysxWheelContactData
// Description : Contact information used by PhysxWheelShape
//
////////////////////////////////////////////////////////////////////

class EXPCL_PANDAPHYSX PhysxWheelContactData {

PUBLISHED:
	INLINE PhysxWheelContactData();
	INLINE ~PhysxWheelContactData();

	LPoint3f get_contact_point() const { return contact_point; }
	float get_contact_position() const { return contact_position; }
	float get_contact_force() const { return contact_force; }
	float get_longitudal_slip() const { return longitudal_slip; }
	float get_lateral_slip() const { return lateral_slip; }
	float get_longitudal_impulse() const { return longitudal_impulse; }
	float get_lateral_impulse() const { return lateral_impulse; }
	bool isValid() const { return valid; }

	LPoint3f contact_point;
	float contact_position;
	float contact_force;
	float longitudal_slip;
	float lateral_slip;
	float longitudal_impulse;
	float lateral_impulse;
	bool valid;

public:
	//NxWheelContactData _data;
};

#include "physxWheelContactData.I"

#endif // PHYSXWHEELCONTACTDATA_H
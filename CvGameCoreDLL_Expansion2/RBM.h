// RBM.h
#pragma once

#ifndef RBM_MODS_H
#define RBM_MODS_H

// LUA API wrappers
#define LUAAPIEXTN(method)	static int l##method(lua_State* L)

// Units strength during embark is based on their combat strength or ranged strength, whichever is higher
#define RBM_UNITS_EMBARK_USING_COMBAT_STRENGTH

// Embarked units get a percentage penalty off their strength
#define RBM_UNIT_EMBARK_PENALTY -33

#endif
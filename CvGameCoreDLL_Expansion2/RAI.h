// RAI.h
#pragma once

#ifndef RAI_MODS_H
#define RAI_MODS_H

// AI will use safe bombard to attack enemy embarked units
#define RAI_DESTROY_ENEMY_EMBARKED_UNITS

// AI gets all knowledge of enemy unit positions! This stops them from stupidly running a fleet into enemies waiting in fog, without attacking
// They still need LOS to actually attack things, but attack processing is improved so they try getting LOS first when attacking a unit in fog
// These changes do not apply to Submarines
#define RAI_AI_SEES_ALL_TARGETS

// AI no longer flees if a slightly damaged unit would take a slight amount of ranged damage
#define RAI_IMPROVED_FLEE_LOGIC

// AI no longer overcommits to killing a single unit so hard that it wastes some units on waiting around for the
// next turn to kill it even if it's already dead
#define RAI_DONT_WASTE_COMBAT_ACTIONS

// AI no longer makes dumb melee attacks, taking more damage than dealing
#define RAI_NO_MELEE_SUICIDE

#define RAI_LOGGING_FIXES

#endif


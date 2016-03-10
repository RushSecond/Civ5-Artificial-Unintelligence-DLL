// RAI.h
#pragma once

#ifndef RAI_MODS_H
#define RAI_MODS_H

//** TACTICAL AI **//

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

// AI now properly fortifies units that didnt move this turn
#define RAI_FORTIFY_IF_NO_MOVE

// More AI logging information for CvTactialAI.cpp
#define RAI_LOGGING_FIXES
#define PATH_FINDER_LOGGING

//** DIPLOMACY AI **//

// AI weighs damage dealt to himself and damage dealt to opponent differently when considering peace deals
#define RAI_DAMAGE_DEALT_PEACE_CHANGE

// AI no longer takes into account player score when evaluating war score since it's a very inaccurate assessment
#define RAI_WAR_SCORE_DOESNT_CONSIDER_PLAYER_SCORE

// AI will now tend to use co-op war to gang up on stronger opponents, instead of crushing weaker ones
#define RAI_COOP_WAR_USED_AGAINST_STRONGER_ENEMIES

// AI will no longer have a chance to have REDUCED warmonger hate vs someone who has killed multiple players
#define RAI_WARMONGER_PERCENT_PLAYERS_KILLED_FIX

// AIs with low war approach will no longer have as much of a bonus to declaring war on weakened civs
#define RAI_ATTACKING_WEAK_PLAYER_DEPENDS_ON_WAR_APPROACH

// More accurate comparsion of players going for tourism victory
#define RAI_GUESS_CULTURE_PRIORITY_COMPARES_TOURISM_TO_WORLD_CULTURE

// Starting at King difficulty, the AI will now want to attack a player who is close to winning by Science, Culture, or Diplomacy
// This effect gets harsher each successive difficulty level
#define RAI_AI_TRIES_TO_STOP_WIN_CONDITIONS



//** UNIT AI **//

// AI weighs bonus vs domain similarly now, no matter how much % it gives
// AI is more likely to get higher levels of Shock/Drill, Accuracy/Barrage, etc and avoid flipping between them
// AI is less likely to get Sentry promotion on units
// AI values healing a little less
#define RAI_PROMOTION_TWEAKS

//** BUX FIXES **//

// Units now properly update the AI's map on death;
// This means AIs no longer act as though they are being ZOC'd by a unit they just killed
#define RAI_DEAD_UNIT_UPDATES_MAP

#endif


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

// Fixed an AuI bug where siege units think they can reposition and then attack when they actually could not
// Note to DelnarErsike: pNode->m_iData1 returns movement allowance remaining, TIMES 60.
#define RAI_SEIGE_UNITS_REPOSITION_FIX

#define RAI_SHOOT_AND_MOVE_PERFORMANCE

// Default posture for enemy city zones is no longer surgical strike, instead it's withdraw.
// This makes AI not attack city unitl they are READY.
// #define RAI_ONLY_ATTACK_CITY_WHEN_READY

// More AI logging information for CvTactialAI.cpp
#define RAI_LOGGING_FIXES
//#define PATH_FINDER_LOGGING

//** DEAL AI **//

// The base trade amount for third party war and defensive pact now considers military strength
#define RAI_DEALS_CONSIDER_MILITARY_STRENGTH

// Civs with low war personality can be convinced to war, but never against allies
#define RAI_THIRD_PARTY_WAR_TWEAKS

// TODO LATER
#define RAI_THIRD_PARTY_WAR_VS_MINORS

// TODO LATER
#define RAI_DEFENSIVE_PACT_CONSIDERS_THREAT

// AI weighs damage dealt to himself and damage dealt to opponent differently when considering peace deals
#define RAI_DAMAGE_DEALT_PEACE_CHANGE

//** DIPLOMACY AI **//

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

// Rich AI civs will much more aggressively try to outbid others on city states
#define RAI_RICH_AI_OUTBIDS_OTHERS_FOR_CITY_STATES

// AI will be much more likely to go to war across with distant enemies in later eras
#define RAI_DISTANT_WAR_MORE_LIKELY_IN_LATER_ERAS

// AI will consider defensive pacts when deciding war approach
#define RAI_WAR_CONSIDERS_DEFENSIVE_PACT

//** UNIT AI **//

// AI weighs bonus vs domain similarly now, no matter how much % it gives
// AI is more likely to get higher levels of Shock/Drill, Accuracy/Barrage, etc and avoid flipping between them
// AI is less likely to get Sentry promotion on units
// AI values healing a little less
#define RAI_PROMOTION_TWEAKS

// AI won't make archaeologists with the purpose of sending them to sites outside their borders
// If they don't have a sufficient number of artifact slots
// Exception made for city state sites since you can turn them into landmarks for influence
#define RAI_ARCHAELOGIST_OUTSIDE_BORDERS_NEED_ARTIFACT_SLOTS

// Great artists now check to see if existing art slots would be used up by current archaeologists
// and if so, starts a golden age instead of making art
#define RAI_GREAT_ARTISTS_SAVE_SLOTS_FOR_ARCHAEOLOGISTS

// AI can now use great artists to extend a golden age
#define RAI_GREAT_ARTISTS_CAN_EXTEND_GOLDEN_AGES

// AI are much less likely to send missionaries to cities without open borders
#define RAI_RELIGION_SCORE_CITY_PENALTY_IF_NO_OPEN_BORDERS (3)

//** PLAYER STUFF **//

// AI is more willing to escort settlers safely, even for short distances
#define RAI_ESCORT_SETTLERS_MORE

// AI will no longer settle with an enemy city between it and safety
#define RAI_NO_JUMP_SETTLING

//** MILITARY AI **//

// AI will build more naval units if currently at war with another continent
#define RAI_NAVY_FOCUS_IF_WARRING_ANOTHER_CONTINENT (50)

// AI will build road towards a city they are trying to capture
#define RAI_AI_BUILDS_ROAD_TOWARD_WAR_TARGET

// Distance to target is squared for war target evaluations
#define RAI_MILITARY_TARGET_WEIGHT_DISTANCE_SQUARED

// Tweaks to economic value of a war target
#define RAI_MILITARY_TARGET_WEIGHT_ECONOMIC_TWEAKS

// AI will be able to use smaller attack forces to attack enemy cities in ancient and classical eras
#define RAI_USE_BASIC_CITY_ATTACK_FORCE_IN_CLASSICAL_ERA

// AI won't keep an abnormally high number of units in reserve on higher difficulties
#define RAI_LESS_MILITARY_RESERVES_FOR_HIGHER_DIFFICULTY

// AI won't convert military units to scouts if he's at war
#define RAI_DONT_CONVERT_MILITARY_TO_SCOUTS_IF_AT_WAR

// AI won't consider scouting units when calculating dominance of a zone
#define RAI_DONT_COUNT_SCOUTS_WHEN_CALCULATING_DOMINANCE

//** ECONOMIC AI **//

// AI won't overly spend gold on bad land just because he's super rich
#define RAI_DONT_WASTE_GOLD_ON_BAD_TILES



//** BUX FIXES **//

// AIs no longer act as though they are being ZOC'd by a unit they just killed
#define RAI_DEAD_UNITS_DONT_ZOC

// Religious city states no longer mistakenly offer technology contests about 20x as much as intended
#define RAI_RELIGIOUS_TECH_CONTEST_FIX

// Danger values from cities are no longer 1/100 the intended value
#define RAI_CITY_DANGER_FIX

// AI will no longer keep their pledges to protect on a city state after they are killed
// (this bug affects tribute attempts)
#define RAI_KILLED_PLAYERS_DONT_PLEDGE_PROTECT

#endif
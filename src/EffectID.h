#pragma once

enum class EffectID : Int32
{
	SFX_RANDOM_CLICK_1 = 1000,
	SFX_RANDOM_CLICK_2 = 1001,
	SFX_RANDOM_BOW = 1002,
	SFX_RANDOM_DOOR_OPEN_CLOSE = 1003,
	SFX_RANDOM_FIZZ = 1004,
	SFX_PLAY_MUSIC_DISC = 1005,
	// NOT ASSIGNED = 1006
	SFX_MOB_GHAST_CHARGE = 1007,
	SFX_MOB_GHAST_FIREBALL = 1008,
	SFX_MOB_GHAST_FIREBALL_LOW = 1009,
	SFX_MOB_ZOMBIE_WOOD = 1010,
	SFX_MOB_ZOMBIE_METAL = 1011,
	SFX_MOB_ZOMBIE_WOOD_BREAK = 1012,
	SFX_MOB_WITHER_SPAWN = 1013,
	SFX_MOB_WITHER_SHOOT = 1014,
	SFX_MOB_BAT_TAKEOFF = 1015,
	SFX_MOB_ZOMBIE_INFECT = 1016,
	SFX_MOB_ZOMBIE_UNFECT = 1017,
	SFX_MOB_ENDERDRAGON_END = 1018,
	// NOT ASSIGNED = 1019
	SFX_RANDOM_ANVIL_BREAK = 1020,
	SFX_RANDOM_ANVIL_USE = 1021,
	SFX_RANDOM_ANVIL_LAND = 1022,

	PARTICLE_SMOKE = 2000,
	PARTICLE_BLOCK_BREAK = 2001,
	PARTICLE_SPLASH_POTION = 2002,
	PARTICLE_EYE_OF_ENDER = 2003,
	PARTICLE_MOBSPAWN = 2004,
	PARTICLE_HAPPY_VILLAGER = 2005,
	PARTICLE_FALL_PARTICLES = 2006,
};

enum class SmokeDirection : Int32
{
	SOUTH_EAST = 0,
	SOUTH = 1,
	SOUTH_WEST = 2,
	EAST = 3,
	CENTRE = 4,
	WEST = 5,
	NORTH_EAST = 6,
	NORTH = 7,
	NORTH_WEST = 8,
};

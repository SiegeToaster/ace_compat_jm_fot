#define ADD_ACE_HITPOINTS\
    class HitLeftArm: HitHands {\
        material = -1;\
        name = "hand_l";\
        radius = 0.08;\
        visual = "injury_hands";\
        minimalHit = 0.01;\
    };\
    class HitRightArm: HitLeftArm {\
        name = "hand_r";\
    };\
    class HitLeftLeg: HitLegs {\
        material = -1;\
        name = "leg_l";\
        radius = 0.1;\
        visual = "injury_legs";\
        minimalHit = 0.01;\
    };\
    class HitRightLeg: HitLeftLeg {\
        name = "leg_r";\
    };\
    class ACE_HDBracket {\
        armor = 1;\
        material = -1;\
        name = "head";\
        passThrough = 0;\
        radius = 1;\
        explosionShielding = 1;\
        visual = "";\
        minimalHit = 0;\
        depends = "HitHead";\
    }
// https://github.com/acemod/ACE3/blob/master/addons/medical_engine/CfgVehicles.hpp
// https://github.com/acemod/ACE3/blob/master/addons/medical_engine/script_macros_config.hpp


class CfgVehicles {
	// ========== ACE Medical Hitpoints ==========
	class B_Soldier_base_F;
	class JMSFALL_Human_base: B_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_grunt: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_engineer: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_corp: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_rto: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_heavy: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_assault: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_AT: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_marksman: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_spectre: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_spectreLeader: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_marine_pilot: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_pilot_assault: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_pilot_captain: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_grunt: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_marksman: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_RTO: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_corp: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_assault: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_heavy: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_AT: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifle_pilot: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_pilot_assault: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_pilot_pulse: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_pilot_storm: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_pilot_captain: JMSFALL_Human_base {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};

	// not sure of the purpose of these, but they are in the config files so
	// they will go in here too

	class O_Soldier_base_F;
	class JMSFALL_imc_rifleman_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_heavy_base_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_light_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_spectre_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_imc_spectreShark_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_rifleman_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_assault_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_mil_heavy_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_reaper_mil_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_reaper_64_F: JMSFALL_pil_reaper_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_reaper_imc_F: JMSFALL_pil_reaper_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_reaper_or_F: JMSFALL_pil_reaper_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_stalker_mil_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_stalker_holo_F: JMSFALL_pil_stalker_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_mil_F: O_Soldier_base_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_mil443_F: JMSFALL_pil_light_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_milR_F: JMSFALL_pil_light_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_srs_F: JMSFALL_pil_light_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_srsblue_F: JMSFALL_pil_light_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	class JMSFALL_pil_light_imc_F: JMSFALL_pil_light_mil_F {
		class HitPoints {
			class HitHands;
			class HitLegs;
			ADD_ACE_HITPOINTS;
		};
	};
	// ========== Ground Vehicles ==========
	class LandVehicle;
	class Car: LandVehicle {};
	class Car_F: Car {};
	class Truck_01_base_F: Car_F {};
	class JMSFALL_Droppod_Base: Car_F {
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
		// ToDo: check if this works or if it needs to go all the way to JMSFALL_B_Droppod_imc / JMSFALL_O_Droppod_mil
	};
	class JMSFALL_veh_samson_base: Truck_01_base_F {
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
		// ToDo: check if this works or if it needs to go all the way to JMSFALL_B_veh_samson_IMC / JMSFALL_O_veh_samson_mil
	};
	class JMSFALL_B_veh_samson_serv_IMC: JMSFALL_veh_samson_base {
		ace_cargo_space = 10;
		ace_cargo_hasCargo = 1;
		ace_repair_canRepair = 1;
		transportRepair = 0;
		// ToDo: check if this works or if it needs to go to JMSFALL_O_veh_samson_serv_mil too
	};

	// ========== Air Vehicles ==========
	class Air;
	class Helicopter: Air {};
	class Helicopter_Base_F: Helicopter {};
	class Helicopter_Base_H: Helicopter_Base_F {};
	class Heli_Attack_01_base_F: Helicopter_Base_H{};
	class JMSFALL_veh_air_Goblin_base: Heli_Attack_01_base_F {
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
		ace_cookoff_probability = 0.5;
		// ToDo: check if this works or if it needs to go all the way to JMSFALL_veh_air_Goblin_inf_Typhonadd
		// ToDo: add fast roping
	};
	class JMSFALL_veh_air_crow_base: Heli_Attack_01_base_F {
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
		ace_cookoff_probability = 0.5;
		// ToDo: check if this works or if it needs to go all the way to JMSFALL_veh_air_crow_inf_Mil
		// ToDo: add fast roping
	};
};

class CfgVehicles {
	// ========== Ground Vehicles ==========
	class LandVehicle;
	class Car: LandVehicle {};
	class Car_F: Car {};
	class Truck_01_base_F: Car_F {};
	class JMSFALL_Droppod_Base: Car_F {
		ace_cargo_space = 4;
		ace_cargo_hasCargo = 1;
	};
	class JMSFALL_B_Droppod_imc: JMSFALL_Droppod_Base {};
	class JMSFALL_O_Droppod_mil: JMSFALL_Droppod_Base {};

	class JMSFALL_veh_samson_base: Truck_01_base_F {
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;
	};
	class JMSFALL_B_veh_samson_IMC: JMSFALL_veh_samson_base {};
	class JMSFALL_O_veh_samson_mil: JMSFALL_veh_samson_base {};

	class JMSFALL_B_veh_samson_serv_IMC: JMSFALL_veh_samson_base {
		ace_cargo_space = 10;
		ace_cargo_hasCargo = 1;
		ace_repair_canRepair = 1;
		transportRepair = 0;
	};
	class JMSFALL_O_veh_samson_serv_mil: JMSFALL_B_veh_samson_serv_IMC {};

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
		// ToDo: add fast roping
	};
	class JMSFALL_veh_air_Goblin_inf_base: JMSFALL_veh_air_Goblin_base {};
	class JMSFALL_veh_air_Goblin_inf_Typhon: JMSFALL_veh_air_Goblin_inf_base {};

	class JMSFALL_veh_air_crow_base: Heli_Attack_01_base_F {
		ace_cargo_space = 20;
		ace_cargo_hasCargo = 1;
		ace_cookoff_probability = 0.5;
		// ToDo: add fast roping
	};
	class JMSFALL_veh_air_crow_inf_base: JMSFALL_veh_air_crow_base {};
	class JMSFALL_veh_air_crow_inf_Mil: JMSFALL_veh_air_crow_inf_base {};
};

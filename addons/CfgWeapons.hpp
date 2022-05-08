class CfgWeapons {
	// ========== Helmets ==========
	// note that all of these hearing protection/volume values are pulled out of my ass
	class ItemCore;
	class JMSFALL_imc_rifle_helmet: ItemCore {
		ACE_hearing_protection = 0.5;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_imc_rifle2_helmet: ItemCore {
		ACE_hearing_protection = 0.5;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_imc_assault_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0.2;
	};
	class JMSFALL_imc_heavy_helmet: ItemCore {
		ACE_hearing_protection = 0.6;
		ACE_hearing_lowervolume = 0.15;
	};
	class JMSFALL_imc_rto_helmet: ItemCore {
		ACE_hearing_protection = 0.6;
		ACE_hearing_lowervolume = 0.3;
	};
	class JMSFALL_imc_troop_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.25;
	};
	class JMSFALL_imc_troop_cap_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.25;
	};
	class JMSFALL_imc_troop_mil_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.25;
	};
	class JMSFALL_imc_grunt_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.25;
	};
	class JMSFALL_imc_viper_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_imc_viperAlt_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_imc_viper_mil_helmet: ItemCore {
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_mil_rifle_helmet: ItemCore {
		ACE_hearing_protection = 0.5;
		ACE_hearing_lowervolume = 0.1;
	};
	class JMSFALL_mil_rto_helmet: ItemCore {
		ACE_hearing_protection = 0.6;
		ACE_hearing_lowervolume = 0.3;
	};
	class JMSFALL_mil_assault_helmet: ItemCore {
		ACE_hearing_protection = 0.6;
		ACE_hearing_lowervolume = 0.2;
	};
	class JMSFALL_mil_rein_helmet: ItemCore {
		ACE_hearing_protection = 0.6;
		ACE_hearing_lowervolume = 0.2;
	};
	class JMSFALL_mil_snip_helmet: ItemCore {
		ACE_hearing_protection = 0.3;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_reaper_mil_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_reaper_64_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_reaperC_mil_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_reaperC_SRS_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_assault_1_imc_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_stalker_64_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_stalker_IMC_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_holo_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_pulse_mil_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_pulse_gr_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_storm_mil_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class JMSFALL_pil_storm_gr_helmet: ItemCore {
		ACE_hearing_protection = 0.75;
		ACE_hearing_lowervolume = 0;
	};
	class H_Beret_02;
	class JMSFALL_imc_BeretBlack_02: H_Beret_02 {
		ACE_hearing_protection = 0;
		ACE_hearing_lowervolume = 0;
	};
	

	// ========== Night Vision ==========
	class Binocular;
	class NVGoggles: Binocular {};
	class JMSFALL_NVChip: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_assault1: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_reaper: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_reaperC: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_stalker: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_holo: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_holoRed: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_pulse: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_viper: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};
	class JMSFALL_pil_NV_storm: NVGoggles {
		ACE_nightVision_grain = 0;
		ACE_nightVision_blur = 0;
		ACE_nightVision_radBlur = 0;
		ACE_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";
		ACE_nightvision_bluRadius = 0;
		ACE_nightvision_generation = 4;
		ACE_nightvision_eyeCups = 0;
	};


	// ========== Weapons ==========
	class Pistol;
	class Pistol_Base_F: Pistol {};
	class JMSFALL_P2015_Pistol: Pistol_Base_F {
		ACE_barrelTwist = 406;
		ACE_barrelLength = 127;
	};
	class JMSFALL_RE45_Pistol: Pistol_Base_F {
		ACE_barrelTwist = 406;
		ACE_barrelLength = 150;
	};

	class Rifle_Base_F;
	class JMSFALL_Rifle_Base: Rifle_Base_F {};
	class JMSFALL_car101Rifle: JMSFALL_Rifle_Base {
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 280;
		ACE_overheating_mrbs = 3000;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // Make sure that the grey rifle also take these settings
	class JMSFALL_m1a3Rifle: JMSFALL_Rifle_Base {
		ACE_barrelTwist = 201.3;
		ACE_barrelLength = 300;
		ACE_overheating_mrbs = 2500;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // make sure that the gray/black rifles also take these settings
	class JMSFALL_r97Rifle: JMSFALL_Rifle_Base {
		ACE_barrelTwist = 201.3;
		ACE_barrelLength = 290;
		ACE_overheating_mrbs = 3000;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // make sure that the black/blue rifles also take these settings
	class JMSFALL_r101Rifle: JMSFALL_Rifle_Base {
		ACE_barrelTwist = 215.6;
		ACE_barrelLength = 475;
		ACE_overheating_mrbs = 2000;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // make sure that the black/blue/brown/white rifles also take these settings
	class JMSFALL_V47flatlineRifle: JMSFALL_Rifle_Base {
		ACE_barrelTwist = 215.6;
		ACE_barrelLength = 485;
		ACE_overheating_mrbs = 2000;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // make sure that the black rifle also takes these settings

	class Rifle_Long_Base_F;
	class JMSFALL_SniperRifle_Base: Rifle_Long_Base_F {};
	class JMSFALL_d101Rifle: JMSFALL_SniperRifle_Base {
		ACE_barrelTwist = 230;
		ACE_barrelLength = 508;
		ACE_overheating_mrbs = 1750;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 1;
	}; // make sure that the blue rifle also takes these settings
	class JMSFALL_KraberAPRifle: JMSFALL_SniperRifle_Base {
		ACE_barrelTwist = 482.7;
		ACE_barrelLength = 1100;
		ACE_overheating_mrbs = 5000;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 1;
	};
	class JMSFALL_spitfireRifle: Rifle_Long_Base_F {
		ACE_barrelTwist = 230;
		ACE_barrelLength = 485;
		ACE_overheating_mrbs = 1750;
		ACE_overheating_slowdownFactor = 1;
		ACE_overheating_allowSwapBarrel = 0;
		ACE_overheating_dispersion = 0.75;
		ACE_arsenal_hide = 0;
		ACE_twistDirection = 1;
		ace_overheating_closedBolt = 0;
	}; // make sure that the hex rifle also takes these settings

	class Launcher;
	class Launcher_Base_F: Launcher {};
	class JMSFALL_Archer_launcher: Launcher_Base_F {
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		ace_reloadlaunchers_enabled = 1;
	};

	class autocannon_35mm;
	class JMSFALL_va_goblin_35mm: autocannon_35mm {
		ACE_overpressure_angle = 0;
		ACE_overpressure_damage = 0;
		ACE_overpressure_priority = 0;
		ACE_overpressure_range = 0;
	};

	class Gatling_30mm_Plane_CAS_01_F;
	class JMSFALL_va_goblin_gatling_30mm: Gatling_30mm_Plane_CAS_01_F {
		ACE_overpressure_angle = 0;
		ACE_overpressure_damage = 0;
		ACE_overpressure_priority = 0;
		ACE_overpressure_range = 0;
	};
	class JMSFALL_va_crow_gatling_35mm: Gatling_30mm_Plane_CAS_01_F {
		ACE_overpressure_angle = 0;
		ACE_overpressure_damage = 0;
		ACE_overpressure_priority = 0;
		ACE_overpressure_range = 0;
	};
};

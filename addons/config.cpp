class CfgPatches {
	class ace_compat_jm_fot {
		name = "ACE3 JM's Fall of the Titans Compatability";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.0599999;
		requiredAddons[] = {
			"ace_rearm",
			"ace_refuel",
			"ace_repair",
			"ace_csw"
		}; // Find out how to get FOT in here
		author="Siege"
		authors[] = {"Siege"};
		url="https://github.com/SiegeToaster/ace_compat_jm_fot/"
		version=3.1400001;
		versionStr="3.14.1.65";
		versionAr[]={3,14,1,65};
		ammo[] = {}; //? Needed?
	};
};

#include "CfgAmmo.hpp"
#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

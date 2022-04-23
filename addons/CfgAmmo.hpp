// https://ace3.acemod.org/wiki/framework/advanced-ballistics-framework.html

class CfgAmmo {
	class BulletBase;
	class JMSFALL_65x39_Ball: BulletBase {
		ACE_caliber = 6.19;
		ACE_bulletLength = 81;
		ACE_bulletMass = 6.5;

		// idk what these values are but they were in the example
		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ToDo: find values for these

		ACE_muzzleVelocities[] = {795, 795, 795, 795}; // ToDo: match with each gun's barrel length
		ACE_barrelLengths[] = {280, 290, 475, 508}; // ToDo: add each gun's barrel length to this list
	};
	class JMSFALL_762x51_Ball: BulletBase {
		ACE_caliber = 7.62;
		ACE_bulletLength = 51;
		ACE_bulletMass = 10;

		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {795, 795};
		ACE_barrelLengths[] = {300, 485};
	};
	class JMSFALL_45ACP_Ball: BulletBase {
		ACE_caliber = 11.5;
		ACE_bulletLength = 22.8;
		ACE_bulletMass = 12; // huh?

		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {370, 370};
		ACE_barrelLengths[] = {127, 150};
	};
	class JMSFALL_145x114_Ball: BulletBase {
		ACE_caliber = 14.88;
		ACE_bulletLength = 114;
		ACE_bulletMass = 60;

		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {800};
		ACE_barrelLengths[] = {1100};
	};

	class RocketBase;
	class M_Titan_AT;
	class M_Titan_AA;
	class JMSFALL_M_Archer_AT_F: M_Titan_AT {
		class ace_missileguidance {
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.001;
			incDeflection = 0.0005;
			canVanillaLock = 1;
			defaultSeekerType = "SACLOS"; // ToDo: determine 
			seekerTypes[] = {"SALH", "SACLOS"}; // semi-active laser homing; semi-automatic command to line of sight
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL", "LOBL"}; // lock on after launch; lock on before launch
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 3000;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN", "DIR", "MID", "HI"};
		};
	};
	class JMSFALL_M_Archer_AA_F: M_Titan_AA {
		class ace_missileguidance {
			enabled = 1;
			minDeflection = 0.00025;
			maxDeflection = 0.001;
			incDeflection = 0.0005;
			canVanillaLock = 1;
			defaultSeekerType = "SACLOS";
			seekerTypes[] = {"SALH", "SACLOS"}; // ?
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL", "LOBL"};
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 3000;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN", "DIR"};
		};
	};
};

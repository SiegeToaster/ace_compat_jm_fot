// https://ace3.acemod.org/wiki/framework/advanced-ballistics-framework.html

class CfgAmmo {
	class BulletBase;
	class JMSFALL_65x39_Ball: BulletBase {
		ACE_caliber = 6.19;
		ACE_bulletLength = 81;
		ACE_bulletMass = 6.5;

		// idk what these values are but they were in the example
		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {795}; // ToDo: match with each gun's barrel length
		ACE_barrelLengths[] = {280}; // ToDo: add each gun's barrel length to this list
	};
	class JMSFALL_762x51_Ball: BulletBase {
		ACE_caliber = 7.62;
		ACE_bulletLength = 51;
		ACE_bulletMass = 10;

		// idk what these values are but they were in the example
		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {}; // ToDo: match with each gun's barrel length
		ACE_barrelLengths[] = {}; // ToDo: add each gun's barrel length to this list
	};
	class JMSFALL_45ACP_Ball: BulletBase {
		ACE_caliber = 11.5;
		ACE_bulletLength = 22.8;
		ACE_bulletMass = 12; // huh?

		// idk what these values are but they were in the example
		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {}; // ToDo: match with each gun's barrel length
		ACE_barrelLengths[] = {}; // ToDo: add each gun's barrel length to this list
	};
	class JMSFALL_145x114_Ball: BulletBase {
		ACE_caliber = 14.88;
		ACE_bulletLength = 114;
		ACE_bulletMass = 60;

		// idk what these values are but they were in the example
		ACE_muzzleVelocityVariationSD = .35;
		ACE_ammoTempMuzzleVelocityShifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		ACE_muzzleVelocities[] = {}; // ToDo: match with each gun's barrel length
		ACE_barrelLengths[] = {}; // ToDo: add each gun's barrel length to this list
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
			defaultSeekerType = "SACLOS";
			seekerTypes[] = {"SALH", "SACLOS"}; // ?
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
			seekerLockModes[] = {"LOAL", "LOBL"}; // lock on after launch; lock on before launch
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 3000;
			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN", "DIR"};
		};
	};
};

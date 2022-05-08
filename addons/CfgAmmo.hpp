// https://ace3.acemod.org/wiki/framework/advanced-ballistics-framework.html

class CfgAmmo {
	class BulletBase;
	class JMSFALL_65x39_Ball: BulletBase {
		// stolen from vanilla 6.5x39_Caseless round
        ACE_caliber=6.706;
        ACE_bulletLength=32.893;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.263};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4, 762.0};
	};
	class JMSFALL_762x51_Ball: BulletBase {
		// these values are stolen from RHS USAF ace compat 7.62x51_M80 round
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;

		ACE_muzzleVelocities[] = {795};
		ACE_barrelLengths[] = {400};
	};
	class JMSFALL_45ACP_Ball: BulletBase {
		// these values are stolen from RHS USAF ace compat 45ACP_MHP round
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.195};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;

		ACE_muzzleVelocities[] = {370};
		ACE_barrelLengths[] = {138};
	};
	class JMSFALL_145x114_Ball: BulletBase {
		ACE_caliber = 14.88;
		ACE_bulletLength = 70; // https://en.wikipedia.org/wiki/14.5%C3%97114mm#/media/File:14,5x114_projectiles.JPG
		ACE_bulletMass = 60;

		// these values are stolen from RHS USAF ace compat .127x99_M33 round
        ACE_muzzleVelocityVariationSD=0.35;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.670};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;

		ACE_muzzleVelocities[] = {1000};
		ACE_barrelLengths[] = {1100};
	};

	class RocketBase;
	class M_Titan_AT;
	class M_Titan_AA;
	class JMSFALL_M_Archer_AT_F: M_Titan_AT {
		//? add ace_vehicle_damage_incendiary
		//ToDo: 
		class ace_missileguidance {
			enabled = 1;

			minDeflection = 0.00005;
			maxDeflection = 0.05;
			incDeflection = 0.00005;

			canVanillaLock = 1;

			defaultSeekerType = "SACLOS";
			seekerTypes[] = {"SALH", "SACLOS"}; // semi-active laser homing; semi-automatic command to line of sight

			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL", "LOBL"}; // lock on after launch; lock on before launch

			seekerAngle = 180;
			seekerAccuracy = 1.5;

			seekerMinRange = 0;
			seekerMaxRange = 3000;

			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN", "DIR", "MID", "HI"};
			useModeForAttackProfile = 1;
		};
	};
	class JMSFALL_M_Archer_AA_F: M_Titan_AA {
		class ace_missileguidance {
			enabled = 1;

			minDeflection = 0.00005;
			maxDeflection = 0.05;
			incDeflection = 0.00005;

			canVanillaLock = 1;

			defaultSeekerType = "SACLOS";
			seekerTypes[] = {"SALH", "SACLOS"};

			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL", "LOBL"};

			seekerAngle = 180;
			seekerAccuracy = 1.5;

			seekerMinRange = 0;
			seekerMaxRange = 3000;

			defaultAttackProfile = "LIN";
			attackProfiles[] = {"LIN", "DIR"};
			useModeForAttackProfile = 1;
		};
	};
};

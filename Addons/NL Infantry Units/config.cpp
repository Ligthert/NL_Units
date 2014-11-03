class CfgPatches {
	class NL_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
class CfgFactionClasses
{
	class NL_Units
	{
		displayName="NL Armed Forces";
		icon="\NL Infantry Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};
};
class CfgVehicleClasses
{
	class Infantry_Desert
	{
		displayName="Infantry Desert";
	};
	class Infantry_Woodland
	{
		displayName="Infantry Woodland";
	};
	class Infantry_SF
	{
		displayName="Special Forces";
	};
	class Infantry_Support
	{
		displayName="Support Crew";
	};

};
class CfgVehicles {
	class B_Soldier_base_F;	
	class B_Carryall_Base;
	class B_Helipilot_F;
	class B_helicrew_F;
	class B_sniper_F;


// Woodland Units
	class NL_WLD_rifleman: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NL_Units";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Uniform.paa", "\NL Infantry Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};

	class NL_WLD_AR: NL_WLD_rifleman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	};

	class NL_WLD_LAT: NL_WLD_rifleman
	{
		displayName = "Rifleman (LAT)";
		icon = "iconManAT";
		backpack = "KL_Carryall_WLD_AT";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_WLD_CLS: NL_WLD_rifleman
	{
		displayName = "Combat Life Saver";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Medic";
		icon = "iconManMedic";
	};

	class NL_WLD_GL: NL_WLD_rifleman
	{
		displayName = "Grenadier";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_WLD_ENGI: NL_WLD_rifleman
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Eng";
		icon = "iconManEngineer";
	};

	class NL_WLD_EXPL: NL_WLD_rifleman
	{
		displayName = "Explosives Expert";
		backpack = "KL_Carryall_WLD_Expl";
		icon = "iconManExplosive";
	};

	class NL_WLD_UAV: NL_WLD_rifleman
	{
		displayName = "UAV Operator";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "KL_Carryall_WLD_UAV";
	};

	class NL_WLD_JTAC: NL_WLD_rifleman
	{
		displayName = "JTAC";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_JTAC";
	};

	class NL_WLD_OFF: NL_WLD_rifleman
	{
		displayName = "Officer";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManOfficer";
	};

	class NL_WLD_SL: NL_WLD_rifleman
	{
		displayName = "Squad Leader";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};

	class NL_WLD_TL: NL_WLD_rifleman
	{
		displayName = "Team Leader";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};

	class NL_WLD_SLA: NL_WLD_rifleman
	{
		displayName = "Designated Marksman";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_WLD_Ammo: NL_WLD_rifleman
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Ammo";
	};


// Desert Units

	class NL_DST_rifleman: NL_WLD_rifleman
	{
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_B";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Uniform.paa", "\NL Infantry Units\Badges\LMB.paa"};
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NL_DST_AR: NL_DST_rifleman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	};

	class NL_DST_LAT: NL_DST_rifleman
	{
		displayName = "Rifleman (LAT)";
		icon = "iconManAT";
		backpack = "KL_Carryall_D_AT";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_DST_CLS: NL_DST_rifleman
	{
		displayName = "Combat Life Saver";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Medic";
		icon = "iconManMedic";
	};

	class NL_DST_GL: NL_DST_rifleman
	{
		displayName = "Grenadier";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_DST_ENGI: NL_DST_rifleman
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Eng";
		icon = "iconManEngineer";
	};

	class NL_DST_EXPL: NL_DST_rifleman
	{
		displayName = "Explosives Expert";
		backpack = "KL_Carryall_D_Expl";
		icon = "iconManExplosive";
	};

	class NL_DST_UAV: NL_DST_rifleman
	{
		displayName = "UAV Operator";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "KL_Carryall_D_UAV";
	};

	class NL_DST_JTAC: NL_DST_rifleman
	{
		displayName = "JTAC";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_D_JTAC";
	};

	class NL_DST_OFF: NL_DST_rifleman
	{
		displayName = "Officer";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_D_TL";
		icon = "iconManOfficer";
	};

	class NL_DST_SL: NL_DST_rifleman
	{
		displayName = "Squad Leader";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "KL_Carryall_D_TL";
		icon = "iconManLeader";
	};

	class NL_DST_TL: NL_DST_rifleman
	{
		displayName = "Team Leader";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_TL";
		icon = "iconManLeader";
	};

	class NL_DST_SLA: NL_DST_rifleman
	{
		displayName = "Designated Marksman";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NL_DST_Ammo: NL_DST_rifleman
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Ammo";
	};


// "Special" forces

	class NL_SF_rifleman: NL_WLD_rifleman
	{
		displayName = "Operator";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_B";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\SF\Data\Green.paa", "\NL Infantry Units\Badges\LMB.paa"};
		linkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};


// Backpacks
	class B_Carryall_oli;	// External class reference
	
	class KL_Carryall_D_B : B_Carryall_oli {
		displayName = "Carryall base Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_B : KL_Carryall_D_B {
		displayName = "Carryall Base Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_GL : B_Carryall_oli {
		displayName = "Carryall GL Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_GL : KL_Carryall_D_GL {
		displayName = "Carryall GL Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};


	class KL_Carryall_D_TL : B_Carryall_oli {
		displayName = "Carryall GL Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_TL : KL_Carryall_D_TL {
		displayName = "Carryall GL Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Medic : B_Carryall_oli {
		displayName = "Carryall Medic Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Medic : KL_Carryall_D_Medic {
		displayName = "Carryall Medic Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_AT : B_Carryall_oli {
		displayName = "Carryall AT Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};

			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_AT : KL_Carryall_D_AT {
		displayName = "Carryall AT Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_AR : B_Carryall_oli {
		displayName = "Carryall AR Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};

			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_AR : KL_Carryall_D_AR {
		displayName = "Carryall AR Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Eng : B_Carryall_oli {
		displayName = "Carryall Eng Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Eng : KL_Carryall_D_Eng {
		displayName = "Carryall Eng Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Ammo : B_Carryall_oli {
		displayName = "Carryall Ammo Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=15;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Ammo : KL_Carryall_D_Ammo {
		displayName = "Carryall Ammo Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Expl : B_Carryall_oli {
		displayName = "Carryall Expl Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Expl : KL_Carryall_D_Expl {
		displayName = "Carryall Expl Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};
	
	class B_UAV_01_backpack_F;	// External class reference
	
	class KL_Carryall_D_UAV : B_UAV_01_backpack_F {
		displayName = "Carryall UAV Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Camo.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_UAV : KL_Carryall_D_UAV {
		displayName = "Carryall UAV Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Camo.paa"};
	};
	class KL_Carryall_D_JTAC : B_Carryall_oli {
		displayName = "Carryall JTAC Desert";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=5;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_JTAC : KL_Carryall_D_JTAC {
		displayName = "Carryall JTAC Woodland";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};
};

class cfgWeapons {
	class Uniform_Base;	// External class reference
	class UniformItem;	// External class reference
	
	class KL_D_Camo : Uniform_Base {
		scope = 2;
		displayName = "Desert Camo";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Desert_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class ItemCore;		// External class reference
	class HeadgearItem;	// External class reference
	class H_HelmetIA;	// External class reference
	
	class KL_D_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Helmet";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
			hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_D_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Baseball Cap";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
                hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\BaseballCap.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\BaseballCap.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_D_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Boonie Hat";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
                hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\BoonieHat.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\BoonieHat.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_WLD_Camo : Uniform_Base {
		scope = 2;
		displayName = "Woodland Camo";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_WLD_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class KL_WLD_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Helmet";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
                        hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_WLD_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Baseball Cap";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
                hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_WLD_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Boonie Hat";
		picture = "\NL Infantry Units\Units\Woodland\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
                hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\BoonieHat.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Woodland\Data\BoonieHat.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference
	
	class KL_WLD_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "Woodland Vest";
		picture = "\NL Infantry Units\Units\Desert\Data\uim\Vest.jpg";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\Desert\Data\Vest.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 5*0.5;
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_SF_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Green Camo";
		picture = "\NL Infantry Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class KL_SF1_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Grey Camo";
		picture = "\NL Infantry Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_GL";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class KL_SF2_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Black Camo";
		picture = "\NL Infantry Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_AR";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class KL_SF_Black_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "Black Vest";
		picture = "\NL Infantry Units\Units\SF\Data\uim\VestBlack.jpg";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NL Infantry Units\Units\SF\Data\VestBlack.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 5*0.5;
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};

	class U_I_CombatUniform;	// External class reference
	class U_B_HeliPilotCoveralls;	// External class reference
	
	class KL_Helipilot_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliPilot Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Helipilot";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class KL_Helicrew_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliCrew Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Helicrew";
			containerClass = "Supply90";
			mass = 40;
		};
	};

	class U_B_GhillieSuit;	// External class reference
	
	class KL_Sniper_base : U_B_GhillieSuit {
		scope = 2;
		displayName = "Sniper Ghilliesuit Woodland";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Sniper_base";
			containerClass = "Supply90";
			mass = 40;
		};
	};
};
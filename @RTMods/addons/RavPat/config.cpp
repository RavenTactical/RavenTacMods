class CfgPatches
{
	class RavPat_Config
	{
		units[]=
		{
			"RT_banner",
			"RT_flag",
			"RT_Rifleman_C",
			"RT_Rifleman_CA",
			"RT_Rifleman_CD",
			"RT_Rifleman_CW",
			"RT_Rifleman_CBW",
			"RT_Rifleman_Flec",
			"RT_Rifleman_TS",
			"RT_Rifleman_TSD",
			"RT_Rifleman_VER",
			"RT2_Rifleman_CW",
			"RT2_Rifleman_CD",
			"RT2_Rifleman_CDPM",
			"RT_medic_C",
			"RT_medic_CA",
			"RT_medic_CD",
			"RT_at_C",
			"RT_at_CA",
			"RT_at_CD",
			"RT_gran_C",
			"RT_gran_CA",
			"RT_gran_CD",
			"RT_mark_C",
			"RT_mark_CA",
			"RT_mark_CD",
			"RT_auto_C",
			"RT_auto_CA",
			"RT_auto_CD",
			"RT_W_Fennek",
			"RT_W_Fennek_hmg",
			"RT_W_Fennek_gmg",
			"RT_W_LYNX",
			"RT_A_Fennek",
			"RT_A_Fennek_hmg",
			"RT_A_Fennek_gmg",
			"RT_A_LYNX",
			"RT_D_Fennek",
			"RT_D_Fennek_hmg",
			"RT_D_Fennek_gmg",
			"RT_D_LYNX",
			"RT_S_Fennek",
			"RT_S_Fennek_hmg",
			"RT_S_Fennek_gmg",
			"RT_S_LYNX",
			"RT_L_39_a_CAS",
			"RT_L_39_a_AA",
			"RT_L_39_o_CAS",
			"RT_L_39_o_AA",
			"RT_L_39_s_CAS",
			"RT_L_39_s_AA",
			"RT_F_181s_grey",
			"RT_F_181s_des",
			"RT_F_181s_camo",
			"RT_F_181_grey",
			"RT_F_181_des",
			"RT_F_181_camo"
		};
		weapons[]=
		{
			"RT_negev_IAR",
			"RT_m14",
			"RT_vs121",
			"RT_vs121olive",
			"RT_vs121sand",
			"RT_Tavor_snow"
		};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F"
		};
	};
};
class CfgUnitInsignia
{
	class RT_Simple
	{
		displayName="RT Simple";
		author="Acoward";
		texture="RavPat\patch\RTtrans.paa";
		textureVehicle="";
	};
	class RT_Pilot
	{
		displayName="RT Pilot";
		author="Acoward";
		texture="RavPat\patch\RTpilot.paa";
		textureVehicle="";
	};
	class RT_sl
	{
		displayName="RT Squad Leader";
		author="Acoward";
		texture="RavPat\patch\RTsl.paa";
		textureVehicle="";
	};
	class RT_tl
	{
		displayName="RT Team Leader";
		author="Acoward";
		texture="RavPat\patch\RTtl.paa";
		textureVehicle="";
	};
	class RT_Medic
	{
		displayName="RT Medic";
		author="Acoward";
		texture="RavPat\patch\RTmedic.paa";
		textureVehicle="";
	};
	class RT_Exp
	{
		displayName="RT Explosive Specialist";
		author="Acoward";
		texture="RavPat\patch\RTexp.paa";
		textureVehicle="";
	};
	class RT_Snipe
	{
		displayName="RT Marksman";
		author="Acoward";
		texture="RavPat\patch\RTsnip.paa";
		textureVehicle="";
	};
	class RT_AutoRifs
	{
		displayName="RT AutoRifleman";
		author="Acoward";
		texture="RavPat\patch\RTautoRif.paa";
		textureVehicle="";
	};
	class RT_Engineer
	{
		displayName="RT Engineer";
		author="Acoward";
		texture="RavPat\patch\RTeng.paa";
		textureVehicle="";
	};
};
class cfgFactionClasses
{
	class RavTac
	{
		displayName="Raven Tactical";
		priority=1;
		side=1;
		icon="RavPat\Data\RTlogo.paa";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
	class B_Soldier_F;
	class FlagCarrier;
	class Banner_01_F;
	class RT_banner: Banner_01_F
	{
		icon="RavPat\Data\CorbecFlag.paa";
		scope=2;
		accuracy=1000;
		displayName="Corbec Banner";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\CorbecFlag.paa"
		};
	};
	class RT_flag: FlagCarrier
	{
		icon="RavPat\Data\CorbecFlag.paa";
		scope=2;
		accuracy=1000;
		displayName="Corbec Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""RavPat\Data\CorbecFlag.paa""";
		};
	};
	class RT_Rifleman_C: B_Soldier_F
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_C";
		scope=2;
		displayName="[RT] Rifleman(Cyre)";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		faction="RavTac";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
		weapons[]=
		{
			"arifle_Mk20_plain_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_plain_F",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"RavPat_Vest_7",
			"H_HelmetB_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"RavPat_Vest_7",
			"H_HelmetB_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class RT_Rifleman: B_Soldier_F
	{
		author="Acoward";
		_generalMacro="RT_Rifleman";
		scope=2;
		displayName="[RT] Rifleman";
		identityTypes[]=
		{
			"Head_NATO",
			"G_NATO_default"
		};
		genericNames="NATOMen";
		faction="RavTac";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class RT_Rifleman_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_SS";
		scope=2;
		displayName="[RT] Rifleman Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1.paa"
		};
	};
	class RT_Rifleman_A: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_A";
		scope=2;
		displayName="[RT] Rifleman Arid";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_Arid_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1_arid.paa"
		};
	};
	class RT_Rifleman_A_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_A_SS";
		scope=2;
		displayName="[RT] Rifleman Arid Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_Arid_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1_arid.paa"
		};
	};
	class RT_Rifleman_D: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_D";
		scope=2;
		displayName="[RT] Rifleman Des";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_Des_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1_Des.paa"
		};
	};
	class RT_Rifleman_D_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_D_SS";
		scope=2;
		displayName="[RT] Rifleman Des Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_Des_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_1_Des.paa"
		};
	};
	class RT_Rifleman_Flec: RT_Rifleman
	{
		author="Citadel & Acoward";
		_generalMacro="RT_Rifleman_Flec";
		scope=2;
		displayName="[RT] Rifleman Flecktarn";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_Flec_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co.paa"
		};
	};
	class RT_Rifleman_Flec_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_Flec_SS";
		scope=2;
		displayName="[RT] Rifleman Flecktarn Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_Flec_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co.paa"
		};
	};	
	class RT_Rifleman_TS: RT_Rifleman
	{
		author="Citadel & Acoward";
		_generalMacro="RT_Rifleman_TS";
		scope=2;
		displayName="[RT] Rifleman Tiger Stripe";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_TS_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS.paa"
		};
	};
	class RT_Rifleman_TS_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_TS_SS";
		scope=2;
		displayName="[RT] Rifleman Tiger Stripe Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_TS_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS.paa"
		};
	};
	class RT_Rifleman_TSD: RT_Rifleman
	{
		author="Citadel & Acoward";
		_generalMacro="RT_Rifleman_TSD";
		scope=2;
		displayName="[RT] Rifleman Tiger Stripe Des";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_TSD_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS_D.paa"
		};
	};
	class RT_Rifleman_TSD_SS: RT_Rifleman
	{
		author="Citadel & Acoward";
		_generalMacro="RT_Rifleman_TSD_SS";
		scope=2;
		displayName="[RT] Rifleman Tiger Stripe Des Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_TSD_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS_D.paa"
		};
	};
	class RT_Rifleman_VER: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_VER";
		scope=2;
		displayName="[RT] Rifleman Verona";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass="RavPat_VER_Camo";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_VER.paa"
		};
	};
	class RT_Rifleman_VER_SS: RT_Rifleman
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_VER_SS";
		scope=2;
		displayName="[RT] Rifleman Verona Short Sleeve";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="RavPat_VER_Camo_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_VER.paa"
		};
	};
	class RT_Rifleman_C_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_C_SS";
		scope=2;
		displayName="[RT] Rifleman (Cyre) Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
	};
	class RT_Rifleman_CA: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CA";
		scope=2;
		displayName="[RT] Rifleman Arid (Cyre)";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_Arid_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
	};
	class RT_Rifleman_CA_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CA_SS";
		scope=2;
		displayName="[RT] Rifleman Arid (Cyre) Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_Arid_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
	};
	class RT_Rifleman_CD: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CD";
		scope=2;
		displayName="[RT] Rifleman Des (Cyre)";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_Des_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
	};
	class RT_Rifleman_CD_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CD_SS";
		scope=2;
		displayName="[RT] Rifleman Des (Cyre) Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_Des_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
	};
	class RT_Rifleman_CBW: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CBW";
		scope=2;
		displayName="[RT] Rifleman DeepNight";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_BW_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_bw_CYRE.paa"
		};
	};
	class RT_Rifleman_CBW_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CBW_SS";
		scope=2;
		displayName="[RT] Rifleman DeepNight Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_BW_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_bw_CYRE.paa"
		};
	};
	class RT_Rifleman_CW: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CW";
		scope=2;
		displayName="[RT] Rifleman Winter";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_W_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_cyre_winter.paa"
		};
	};
	class RT_Rifleman_CW_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_CW_SS";
		scope=2;
		displayName="[RT] Rifleman Winter Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_W_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_cyre_winter.paa"
		};
	};
	class RT2_Rifleman_CDPM: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_CDPM";
		scope=2;
		displayName="[RT] Rifleman DPM 2.0";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat2_DPM_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_dpm.paa"
		};
	};
	class RT2_Rifleman_CDPM_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_CDPM_SS";
		scope=2;
		displayName="[RT] Rifleman DPM 2.0 Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat2_DPM_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_dpm.paa"
		};
	};
	class RT2_Rifleman_CD: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_D";
		scope=2;
		displayName="[RT] Rifleman Desert 2.0";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat2_D_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_desert.paa"
		};
	};
	class RT2_Rifleman_CD_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_D_SS";
		scope=2;
		displayName="[RT] Rifleman Desert 2.0 Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat2_D_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_desert.paa"
		};
	};
	class RT2_Rifleman_CW: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_CW";
		scope=2;
		displayName="[RT] Rifleman Woodland 2.0";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat2_W_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_woodland.paa"
		};
	};
	class RT2_Rifleman_CW_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT2_Rifleman_CW_SS";
		scope=2;
		displayName="[RT] Rifleman Woodland 2.0 Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat2_W_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_woodland.paa"
		};
	};
	class RT_Rifleman_A3Wood: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_A3Wood";
		scope=2;
		displayName="[RT] Rifleman A3Wood";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="RavPat_A3Wood_Camo_Cyre";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
	};
	class RT_Rifleman_A3Wood_SS: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_Rifleman_A3Wood_SS";
		scope=2;
		displayName="[RT] Rifleman A3Wood Short Sleeve";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="RavPat_A3Wood_Camo_Cyre_SS";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
	};
	class B_AssaultPack_Base;
	class B_kitbag_Base;
	class B_Carryall_Base;
	class RavPat_compact_OGA_OD: B_AssaultPack_Base
	{
		scope=2;
		displayName="[RT] RavPat Compact OGA OD";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_compact_OGA_OD.paa"
		};
	};
	class RavPat_Kitbag_OGA_OD: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag OGA OD";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_kitbag_OGA_OD.paa"
		};
	};
	class RavPat_Carryall_OGA_OD: B_Carryall_Base
	{
		scope=2;
		displayName="[RT] RavPat Carryall OGA OD";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_carryall_OGA_OD.paa"
		};
	};	
	class RavPat_Backpack_Kitbag: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_kitbag.paa"
		};
	};
	class RavPat_Backpack_Kitbag_arid: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag Arid";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_kitbag_arid.paa"
		};
	};
	class RavPat_Backpack_Kitbag_des: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag Desert";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_kitbag_des.paa"
		};
	};
	class RavPat_Backpack_Kitbag_bw: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag DeepNight";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_kitbag_BW.paa"
		};
	};
	class RavPat_Backpack_Kitbag_snow: B_kitbag_Base
	{
		scope=2;
		displayName="[RT] RavPat Kitbag Snow";
		author="Acoward";
		model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture="\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_kitbag_snow.paa"
		};
	};
	class RT_medic_C: RT_Rifleman_C
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural="$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound="veh_infantry_medic_s";
		author="Acoward";
		_generalMacro="RT_medic_C";
		scope=2;
		displayName="[RT] Medic(Cyre)";
		attendant=1;
		icon="iconManMedic";
		backpack="B_AssaultPack_rgr_Medic";
	};
	class RT_medic_CA: RT_medic_C
	{
		author="Acoward";
		_generalMacro="RT_medic_CA";
		scope=2;
		displayName="[RT] Medic(Cyre) Arid";
		uniformClass="RavPat_Arid_Camo_CYRE";
	};
	class RT_medic_CD: RT_medic_C
	{
		author="Acoward";
		_generalMacro="RT_medic_CD";
		scope=2;
		displayName="[RT] Medic(Cyre) Des";
		uniformClass="RavPat_Des_Camo_CYRE";
	};
	class RT_at_C: RT_Rifleman_C
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound="veh_infantry_AT_s";
		author="Acoward";
		_generalMacro="RT_at_C";
		scope=2;
		displayName="[RT] Rifleman-AT(Cyre)";
		icon="iconManAT";
		backpack="B_AssaultPack_rgr_LAT";
		weapons[]=
		{
			"arifle_Mk20_plain_F",
			"launch_NLAW_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_plain_F",
			"launch_NLAW_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"NLAW_F"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"NLAW_F"
		};
	};
	class RT_at_CA: RT_at_C
	{
		author="Acoward";
		_generalMacro="RT_at_CA";
		scope=2;
		displayName="[RT] Rifleman-AT(Cyre) Arid";
		uniformClass="RavPat_Arid_Camo_CYRE";
	};
	class RT_at_CD: RT_at_C
	{
		author="Acoward";
		_generalMacro="RT_at_CD";
		scope=2;
		displayName="[RT] Rifleman-AT(Cyre) Des";
		uniformClass="RavPat_Des_Camo_CYRE";
	};
	class RT_gran_C: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_gran_C";
		scope=2;
		displayName="[RT] Grenadier(Cyre)";
		weapons[]=
		{
			"arifle_Mk20_GL_plain_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_GL_plain_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
	};
	class RT_gran_CA: RT_gran_C
	{
		author="Acoward";
		_generalMacro="RT_gran_CA";
		scope=2;
		displayName="[RT] Grenadier(Cyre) Arid";
		uniformClass="RavPat_Arid_Camo_CYRE";
	};
	class RT_gran_CD: RT_gran_C
	{
		author="Acoward";
		_generalMacro="RT_gran_CD";
		scope=2;
		displayName="[RT] Grenadier(Cyre) Des";
		uniformClass="RavPat_Des_Camo_CYRE";
	};
	class RT_mark_C: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_mark_C";
		scope=2;
		displayName="[RT] Marksman(Cyre)";
		icon="iconManRecon";
		weapons[]=
		{
			"arifle_Mk20_MRCO_plain_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_MRCO_plain_F",
			"Throw",
			"Put"
		};
	};
	class RT_mark_CA: RT_mark_C
	{
		author="Acoward";
		_generalMacro="RT_mark_CA";
		scope=2;
		displayName="[RT] Marksman(Cyre) Arid";
		uniformClass="RavPat_Arid_Camo_CYRE";
	};
	class RT_mark_CD: RT_mark_C
	{
		author="Acoward";
		_generalMacro="RT_mark_CD";
		scope=2;
		displayName="[RT] Marksman(Cyre) Des";
		uniformClass="RavPat_Des_Camo_CYRE";
	};
	class RT_auto_C: RT_Rifleman_C
	{
		author="Acoward";
		_generalMacro="RT_auto_C";
		scope=2;
		displayName="[RT] AutoRifleman(Cyre)";
		icon="iconManMG";
		weapons[]=
		{
			"LMG_Mk200_BI_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"LMG_Mk200_BI_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box"
		};
		respawnMagazines[]=
		{
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellRed",
			"SmokeShellYellow",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box"
		};
	};
	class RT_auto_CA: RT_auto_C
	{
		author="Acoward";
		_generalMacro="RT_auto_CA";
		scope=2;
		displayName="[RT] AutoRifleman(Cyre) Arid";
		uniformClass="RavPat_Arid_Camo_CYRE";
	};
	class RT_auto_CD: RT_auto_C
	{
		author="Acoward";
		_generalMacro="RT_auto_CD";
		scope=2;
		displayName="[RT] AutoRifleman(Cyre) Des";
		uniformClass="RavPat_Des_Camo_CYRE";
	};
	class I_Heli_light_03_F;
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	class RT_W_Fennek: I_MRAP_03_F
	{
		_generalMacro="RT_W_Fennek";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek Olive";
		crew="RT_Rifleman_C";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_C"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa"
		};
	};
	class RT_W_Fennek_gmg: I_MRAP_03_gmg_F
	{
		_generalMacro="RT_W_Fennek_gmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek GMG Olive";
		vehicleClass="Car";
		crew="RT_Rifleman_C";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_C"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa",
			"RavPat\data\tur_greenStrider.paa"
		};
	};
	class RT_W_Fennek_HMG: I_MRAP_03_hmg_F
	{
		_generalMacro="RT_W_Fennek_hmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek HMG Olive";
		vehicleClass="Car";
		crew="RT_Rifleman_C";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_C"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa",
			"RavPat\data\tur_greenStrider.paa"
		};
	};
	class RT_W_LYNX: I_Heli_light_03_F
	{
		author="Acoward";
		_generalMacro="RTgreenHellW";
		scope=2;
		side=1;
		displayName="UH-4 Lynx (Armed) Olive";
		faction="RavTac";
		crew="RT_Rifleman_C";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenHell.paa"
		};
	};
	class RT_A_Fennek: I_MRAP_03_F
	{
		_generalMacro="RT_A_Fennek";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek olive";
		crew="RT_Rifleman_CA";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CA"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa"
		};
	};
	class RT_A_Fennek_gmg: I_MRAP_03_gmg_F
	{
		_generalMacro="RT_A_Fennek_gmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek GMG olive";
		vehicleClass="Car";
		crew="RT_Rifleman_CA";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CA"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa",
			"RavPat\data\tur_greenStrider.paa"
		};
	};
	class RT_A_Fennek_HMG: I_MRAP_03_hmg_F
	{
		_generalMacro="RT_A_Fennek_hmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek HMG olive";
		vehicleClass="Car";
		crew="RT_Rifleman_CA";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CA"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenStrider.paa",
			"RavPat\data\tur_greenStrider.paa"
		};
	};
	class RT_A_LYNX: I_Heli_light_03_F
	{
		author="Citadel";
		_generalMacro="RTgreenHellA";
		scope=2;
		side=1;
		displayName="UH-4 Lynx (Armed) Olive";
		faction="RavTac";
		crew="RT_Rifleman_CA";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\greenHell.paa"
		};
	};
	class RT_D_Fennek: I_MRAP_03_F
	{
		_generalMacro="RT_D_Fennek";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek Desert";
		crew="RT_Rifleman_CD";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CD"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\desStrider.paa"
		};
	};
	class RT_D_Fennek_gmg: I_MRAP_03_gmg_F
	{
		_generalMacro="RT_D_Fennek_gmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek GMG Desert";
		vehicleClass="Car";
		crew="RT_Rifleman_CD";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CD"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\desStrider.paa",
			"RavPat\data\tur_desStrider.paa"
		};
	};
	class RT_D_Fennek_HMG: I_MRAP_03_hmg_F
	{
		_generalMacro="RT_D_Fennek_hmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek HMG Desert";
		vehicleClass="Car";
		crew="RT_Rifleman_CD";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CD"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\desStrider.paa",
			"RavPat\data\tur_desStrider.paa"
		};
	};
	class RT_D_LYNX: I_Heli_light_03_F
	{
		author="Acoward";
		_generalMacro="RTdesHell";
		scope=2;
		side=1;
		displayName="UH-4 Lynx (Armed) Desert";
		faction="RavTac";
		crew="RT_Rifleman_CD";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\desHell.paa"
		};
	};
	class RT_S_Fennek: I_MRAP_03_F
	{
		_generalMacro="RT_S_Fennek";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek Snow";
		crew="RT_Rifleman_CW";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CW"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\snowStrider.paa"
		};
	};
	class RT_S_Fennek_gmg: I_MRAP_03_gmg_F
	{
		_generalMacro="RT_S_Fennek_gmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek GMG Snow";
		vehicleClass="Car";
		crew="RT_Rifleman_CW";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CW"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\snowStrider.paa",
			"RavPat\data\tur_snowStrider.paa"
		};
	};
	class RT_S_Fennek_HMG: I_MRAP_03_hmg_F
	{
		_generalMacro="RT_S_Fennek_hmg";
		side=1;
		scope=2;
		author="Acoward";
		faction="RavTac";
		displayName="RT Fennek HMG Snow";
		vehicleClass="Car";
		crew="RT_Rifleman_CW";
		weapons[]=
		{
			"CarHorn"
		};
		magazines[]={};
		typicalCargo[]=
		{
			"RT_Rifleman_CW"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\snowStrider.paa",
			"RavPat\data\tur_snowStrider.paa"
		};
	};
	class RT_S_LYNX: I_Heli_light_03_F
	{
		author="Acoward";
		_generalMacro="RTsnowHell";
		scope=2;
		side=1;
		displayName="UH-4 Lynx (Armed) Snow";
		faction="RavTac";
		crew="RT_Rifleman_CW";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\data\snowHell.paa"
		};
	};
	class I_Plane_Fighter_03_AA_F;
	class I_Plane_Fighter_03_CAS_F;
	class B_Plane_Fighter_01_Stealth_F;
	class B_Plane_Fighter_01_F;
	class RT_L_39_a_CAS: I_Plane_Fighter_03_CAS_F
	{
		author="Acoward";
		_generalMacro="RTL39_a_cas";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 CAS (arid)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_arid_01.paa",
			"\RavPat\data\RT_L39_arid_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"GBU12BombLauncher",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_AAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_L_39_a_AA: I_Plane_Fighter_03_AA_F
	{
		author="Acoward";
		_generalMacro="RTL39_a_AA";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 AA (arid)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_arid_01.paa",
			"\RavPat\data\RT_L39_arid_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"missiles_Zephyr",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_AAA_missiles",
			"2Rnd_AAA_missiles",
			"4Rnd_GAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_L_39_o_CAS: I_Plane_Fighter_03_CAS_F
	{
		author="Acoward";
		_generalMacro="RTL39_o_cas";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 CAS (olive)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_olive_01.paa",
			"\RavPat\data\RT_L39_olive_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"GBU12BombLauncher",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_AAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_L_39_o_AA: I_Plane_Fighter_03_AA_F
	{
		author="Acoward";
		_generalMacro="RTL39_o_AA";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 AA (olive)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_olive_01.paa",
			"\RavPat\data\RT_L39_olive_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"missiles_Zephyr",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_AAA_missiles",
			"2Rnd_AAA_missiles",
			"4Rnd_GAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_L_39_s_CAS: I_Plane_Fighter_03_CAS_F
	{
		author="Acoward";
		_generalMacro="RTL39_s_cas";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 CAS (skyblue)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_sky_01.paa",
			"\RavPat\data\RT_L39_sky_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"GBU12BombLauncher",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_GBU12_LGB",
			"2Rnd_AAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_L_39_s_AA: I_Plane_Fighter_03_AA_F
	{
		author="Acoward";
		_generalMacro="RTL39_s_AA";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="L 39 AA (skyblue)";
		vehicleClass="Air";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_L39_sky_01.paa",
			"\RavPat\data\RT_L39_sky_02.paa"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"missiles_Zephyr",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_AAA_missiles",
			"2Rnd_AAA_missiles",
			"4Rnd_GAA_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class RT_F_181s_grey: B_Plane_Fighter_01_Stealth_F
	{
		author="Acoward and Citadel";
		_generalMacro="RTF181s_grey";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181S Frelon (grey)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_grey_01_co.paa",
			"\RavPat\data\Corb_Growler_grey_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
	class RT_F_181s_des: B_Plane_Fighter_01_Stealth_F
	{
		author="Acoward";
		_generalMacro="RTF181s_des";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181S Frelon (des)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_des_01_co.paa",
			"\RavPat\data\Corb_Growler_des_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
	class RT_F_181s_camo: B_Plane_Fighter_01_Stealth_F
	{
		author="Acoward";
		_generalMacro="RTF181s_camo";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181S Frelon (camo)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_camo_01_co.paa",
			"\RavPat\data\Corb_Growler_camo_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
	class RT_F_181_grey: B_Plane_Fighter_01_F
	{
		author="Acoward and Citadel";
		_generalMacro="RTF181_grey";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181 Frelon (grey)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_grey_01_co.paa",
			"\RavPat\data\Corb_Growler_grey_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
	class RT_F_181_des: B_Plane_Fighter_01_F
	{
		author="Acoward";
		_generalMacro="RTF181_des";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181 Frelon (des)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_des_01_co.paa",
			"\RavPat\data\Corb_Growler_des_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
	class RT_F_181_camo: B_Plane_Fighter_01_F
	{
		author="Acoward";
		_generalMacro="RTF181_camo";
		scope=2;
		side=1;
		faction="RavTac";
		crew="RT_Rifleman_CW";
		displayName="F-181 Frelon (camo)";
		vehicleClass="Air";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\Corb_Growler_camo_01_co.paa",
			"\RavPat\data\Corb_Growler_camo_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"
		};
	};
};
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class RavPat_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat (Rolled Sleeves)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Arid_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Arid";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_A";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Arid_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Arid (Rolled Sleeves)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_A_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Des_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_D";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Des_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert (Rolled Sleeves)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_D_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Flec_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Flecktarn";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_Flec";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Flec_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Flecktarn (Rolled Sleeves)";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_Flec_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_TS_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Tiger Stripe";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_TS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_TS_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Tiger Stripe (Rolled Sleeves)";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_TS_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_TSD_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Tiger Stripe Des";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS_D.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_TSD";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_TSD_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Tiger Stripe Des (Rolled Sleeves)";
		author="Citadel & Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_co_TS_D.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_TSD_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_VER_Camo: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Verona";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_VER.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_VER";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_VER_Camo_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Verona (Rolled Sleeves)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_camo_VER.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_VER_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_C";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_C_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Arid_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Arid (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CA";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Arid_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Arid (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Arid.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CA_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Des_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CD";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_Des_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_CYRE_Des.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CD_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_BW_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat DeepNight (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_bw_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CBW";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_bw_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat DeepNight (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_bw_CYRE.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CBW_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_W_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Winter (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_cyre_winter.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CW";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_w_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Winter (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_cyre_winter.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_CW_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_DPM_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 DPM (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_dpm.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CDPM";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_DPM_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 DPM (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_dpm.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CDPM_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_D_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 Desert (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_desert.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CD";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_D_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 Desert (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_desert.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CD_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_W_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 Woodland (Crye)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_woodland.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CW";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat2_W_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat 2.0 Woodland (Crye, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_woodland.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT2_Rifleman_CW_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_A3Wood_Camo_Cyre: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Hidden A3 Woodland (Cyre)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_A3Wood";
			containerClass="Supply50";
			mass=30;
		};
	};
	class RavPat_A3Wood_Camo_Cyre_SS: Uniform_Base
	{
		scope=2;
		displayName="[RT] RavPat Hidden A3 Woodland (Cyre, Short)";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RT_Rifleman_A3Wood_SS";
			containerClass="Supply50";
			mass=30;
		};
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class RavPat_Vest_1: Vest_Camo_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert IOTV Lite";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model="A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_des.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=40;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class RavPat_Vest_2: Vest_Camo_Base
	{
		scope=2;
		displayName="[RT] RavPat Desert IOTV";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort="Armor Level VI";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_des.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class RavPat_Vest_3: RavPat_Vest_1
	{
		displayName="[RT] RavPat Arid IOTV Lite";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_arid.paa"
		};
	};
	class RavPat_Vest_4: RavPat_Vest_2
	{
		displayName="[RT] RavPat Arid IOTV";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_arid.paa"
		};
	};
	class RavPat_Vest_5: RavPat_Vest_1
	{
		displayName="[RT] RavPat IOTV Lite";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV.paa"
		};
	};
	class RavPat_Vest_6: RavPat_Vest_2
	{
		displayName="[RT] RavPat IOTV";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV.paa"
		};
	};
	class RavPat_Vest_7: RavPat_Vest_1
	{
		displayName="[RT] RavPat Tan IOTV Lite";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_tan.paa"
		};
	};
	class RavPat_Vest_8: RavPat_Vest_2
	{
		displayName="[RT] RavPat Tan IOTV";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_IOTV_tan.paa"
		};
	};
	class RavPat_blu4_olive: Vest_Camo_Base
	{
		scope=2;
		displayName="[RT] RavPat Olive";
		author="Acoward";
		picture="\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model="A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		descriptionShort="Armor Level VI";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_blu4_olive.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=15;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class RavPat_blu4_sand: RavPat_blu4_olive
	{
		displayName="[RT] RavPat Sand";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_blu4_sand.paa"
		};
	};
	class RavPat_blu4_snow: RavPat_blu4_olive
	{
		displayName="[RT] RavPat Snow";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_blu4_snow.paa"
		};
	};
	class RavPat_blu4_OGA_OD: RavPat_blu4_olive
	{
		displayName="[RT] RavPat OGA OD";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_blu4_OGA_OD.paa"
		};
	};
	class RavPat_blu4_OGA: RavPat_blu4_olive
	{
		displayName="[RT] RavPat OGA";
		author="Acoward";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\ravpat_blu4_OGA.paa"
		};
	};	
	class H_HelmetIA;
	class RavPat_Helmet1: H_HelmetIA
	{
		displayName="[RT] RavPat Desert Helmet";
		author="Acoward";
		grad_slingHelmet_allow=true;
		picture="\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_helmet_des.paa"
		};
	};
	class RavPat_Helmet2: H_HelmetIA
	{
		displayName="[RT] RavPat Helmet";
		author="Acoward";
		grad_slingHelmet_allow=true;
		picture="\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_helmet.paa"
		};
	};
	class RavPat_Helmet3: H_HelmetIA
	{
		displayName="[RT] RavPat Arid Helmet";
		author="Acoward";
		grad_slingHelmet_allow=true;
		picture="\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_Helmet_arid.paa"
		};
	};
	class RavPat_HelmetSnow: H_HelmetIA
	{
		displayName="[RT] RavPat Snow Helmet";
		author="Acoward";
		grad_slingHelmet_allow=true;
		picture="\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_Helmet_snow.paa"
		};
	};
	class H_Booniehat_tan;
	class RT_TS_boonie: H_Booniehat_tan
	{
		displayname="[RT] Boonie Hat Tiger";
		author="Citadel";
		scope=2;
		grad_slingHelmet_allow=true;
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_boonie_TS.paa"
		};
	};
	
		class RT_TS_boonie_D: H_Booniehat_tan
	{
		displayname="[RT] Boonie Hat Tiger Desert";
		author="Citadel";
		scope=2;
		grad_slingHelmet_allow=true;
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RT_boonie_TS_D.paa"
		};
	};
	class RavPat_Boonie: H_Booniehat_tan
	{
		displayName="[RT] RavPat Boonie";
		author="Acoward";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_boonie.paa"
		};
	};
	class RavPat_Boonie_arid: H_Booniehat_tan
	{
		displayName="[RT] RavPat Boonie Arid";
		author="Acoward";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_boonie_arid.paa"
		};
	};
	class RavPat_Boonie_des: H_Booniehat_tan
	{
		displayName="[RT] RavPat Boonie Desert";
		author="Acoward";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_boonie_des.paa"
		};
	};
	class RavPat_Boonie_BW: H_Booniehat_tan
	{
		displayName="[RT] RavPat Boonie DeepNight";
		author="Acoward";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_boonie_BW.paa"
		};
	};
	class RavPat_Boonie_snow: H_Booniehat_tan
	{
		displayName="[RT] RavPat Boonie Snow";
		author="Acoward";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPat\Data\RavPat_boonie_snow.paa"
		};
	};
	class Rifle_Base_F;
	class LMG_Zafir_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class RT_negev_IAR: LMG_Zafir_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] Negev IAR";
		baseWeapon="RT_negev_IAR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_negev1.paa",
			"\Ravpat\data\RT_negev2.paa"
		};
		inertia=0.69999999;
		descriptionShort="Negev 5.56 Auto";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.1,0.5};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.60000002,0.34999999};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.40000001,0.40000001};
				iconScale=0.15000001;
			};
		};
		magazines[]=
		{
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		recoil="recoil_lim";
	};
	class srifle_EBR_F;
	class RT_m14: srifle_EBR_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] Enhanced M14 Snow";
		baseWeapon="RT_m14";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_m14_01.paa",
			"\Ravpat\data\RT_m14_02.paa"
		};
	};
	class srifle_DMR_01_F;
	class RT_vs121: srifle_DMR_01_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] VS 121";
		baseWeapon="RT_vs121";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_vs121_base_1.paa",
			"\Ravpat\data\RT_vs121_black_2.paa"
		};
	};
	class RT_vs121olive: srifle_DMR_01_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] VS 121 Olive";
		baseWeapon="RT_vs121olive";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_vs121_base_1.paa",
			"\Ravpat\data\RT_vs121_olive.paa"
		};
	};
	class RT_vs121sand: srifle_DMR_01_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] VS 121 Sand";
		baseWeapon="RT_vs121sand";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_vs121_base_1.paa",
			"\Ravpat\data\RT_vs121_sand.paa"
		};
	};
	class arifle_TRG21_F;
	class RT_Tavor_snow: arifle_TRG21_F
	{
		author="acoward";
		scope=2;
		displayName="[RT] Tavor Snow";
		baseWeapon="RT_Tavor_snow";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Ravpat\data\RT_tavor_snow.paa"
		};
	};
};
class cfgGlasses
{
	class G_Balaclava_oli;
	class RT_bala_snow: G_Balaclava_oli
	{
		author="Acoward";
		displayName="[RT] Balaclava Snow";
		hiddenSelectionsTextures[]=
		{
			"\RavPat\data\RT_bala_snow.paa"
		};
	};
};
class cfgGroups
{
	class WEST
	{
		name="BLUFOR";
		side=1;
		class RavTac
		{
			name="Raven Tactical";
			class Infantry
			{
				name="Section";
				class RifleSquad1
				{
					name="Wood";
					faction="Raven Tactical";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="RT_gran_C";
						rank="SERGEANT";
						position[]={0,4,0};
					};
					class Unit1
					{
						side=1;
						vehicle="RT_Rifleman_C";
						rank="CORPORAL";
						position[]={-1,3,0};
					};
					class Unit2
					{
						side=1;
						vehicle="RT_medic_C";
						rank="PRIVATE";
						position[]={-2,2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="RT_at_C";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="RT_auto_C";
						rank="PRIVATE";
						position[]={1,3,0};
					};
					class Unit5
					{
						side=1;
						vehicle="RT_mark_C";
						rank="PRIVATE";
						position[]={2,2,0};
					};
				};
				class RifleSquad2
				{
					name="Arid";
					faction="Raven Tactical";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="RT_gran_CA";
						rank="SERGEANT";
						position[]={0,4,0};
					};
					class Unit1
					{
						side=1;
						vehicle="RT_Rifleman_CA";
						rank="CORPORAL";
						position[]={-1,3,0};
					};
					class Unit2
					{
						side=1;
						vehicle="RT_medic_CA";
						rank="PRIVATE";
						position[]={-2,2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="RT_at_CA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="RT_auto_CA";
						rank="PRIVATE";
						position[]={1,3,0};
					};
					class Unit5
					{
						side=1;
						vehicle="RT_mark_CA";
						rank="PRIVATE";
						position[]={2,2,0};
					};
				};
				class RifleSquad3
				{
					name="Desert";
					faction="Raven Tactical";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="RT_gran_CD";
						rank="SERGEANT";
						position[]={0,4,0};
					};
					class Unit1
					{
						side=1;
						vehicle="RT_Rifleman_CD";
						rank="CORPORAL";
						position[]={-1,3,0};
					};
					class Unit2
					{
						side=1;
						vehicle="RT_medic_CD";
						rank="PRIVATE";
						position[]={-2,2,0};
					};
					class Unit3
					{
						side=1;
						vehicle="RT_at_CD";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="RT_auto_CD";
						rank="PRIVATE";
						position[]={1,3,0};
					};
					class Unit5
					{
						side=1;
						vehicle="RT_mark_CD";
						rank="PRIVATE";
						position[]={2,2,0};
					};
				};
			};
		};
	};
};
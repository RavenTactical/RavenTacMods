class CfgPatches
{
	class RavPat_RHS_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class cfgWeapons
{
	class rhs_6b7_1m_olive;
	class rhs_6b7_1m_bala2_emr;
	class rhsgref_helmet_pasgt_erdl_rhino;
	class rhssaf_helmet_m97_woodland_black_ess;
	class rhssaf_helmet_m97_woodland_black_ess_bare;
	class RavPatRHS_combatHelmet: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\rhs_6b7-1m_co.paa",
			"RavPatRHS\Data\RT_6b.paa"
		};
	};
	class RavPatRHS_combatHelmet_arid: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet Arid";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\rhs_6b7-1m_co.paa",
			"RavPatRHS\Data\RT_6b_arid.paa"
		};
	};
	class RavPatRHS_combatHelmet_BW: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet DeepNight";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\rhs_6b7-1m_co.paa",
			"RavPatRHS\Data\RT_6b_BW.paa"
		};
	};
	class RavPatRHS_combatHelmet_desert: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet Desert";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\RT_6b_desertbase.paa",
			"RavPatRHS\Data\RT_6b_desert.paa"
		};
	};
	class RavPatRHS_combatHelmet_sand: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet Sand";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\RT_6b_desertbase.paa",
			"RavPatRHS\Data\RT_6b_sand.paa"
		};
	};
	class RavPatRHS_combatHelmet_winter: rhs_6b7_1m_olive
	{
		displayName="[RT] Combat Helmet Winter";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\RT_6b_winter-back.paa",
			"RavPatRHS\Data\RT_6b_winter.paa"
		};
	};
	class RavPatRHS_combatHelmet_winter_bala: rhs_6b7_1m_bala2_emr
	{
		displayName="[RT] Combat Helmet Winter Balaclava";
		author="Acoward";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"RavPatRHS\Data\RT_6b_winter-back.paa",
			"RavPatRHS\Data\RT_6b_winter.paa",
			"RavPatRHS\Data\RT_6b_winter_bala.paa"
		};
	};
	class RavPatRHS_m97_olive: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Olive";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_olive.paa"};
	};
	class RavPatRHS_m97_olive_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Olive ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_olive.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_olive_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Olive ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_olive.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_tan: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Tan";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_tan.paa"};
	};
	class RavPatRHS_m97_tan_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 tan ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tan.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_tan_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 tan ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tan.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_tanL: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Sand";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_tanL.paa"};
	};
	class RavPatRHS_m97_tanL_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Sand ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tanL.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};
	class RavPatRHS_m97_tanL_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Sand ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tanL.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};
	class RavPatRHS_m97_grey: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Grey";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_grey.paa"};
	};
	class RavPatRHS_m97_grey_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Grey ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_grey.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_grey_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Grey ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_grey.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_tanS: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Sand Alt";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_tan_stan.paa"};
	};
	class RavPatRHS_m97_tanS_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Sand Alt ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tan_stan.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};
	class RavPatRHS_m97_tanS_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Sand Alt ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_tan_stan.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};
	class RavPatRHS_m97_flec: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Flecktarn";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_Flec.paa"};
	};
	class RavPatRHS_m97_flec_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Flecktarn ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_Flec.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_flec_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Flecktarn ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_Flec.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_TS: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Tiger Stripe";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_TS.paa"};
	};
	class RavPatRHS_m97_TS_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Tiger Stripe ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_TS.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_TS_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Tiger Stripe ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_TS.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RavPatRHS_m97_TSD: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName = "[RT] M97 Tiger Stripe Des";
		scope = 2;
		picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";		
		hiddenSelectionsTextures[] = {"RavPatRHS\Data\RT_m97_TSD.paa"};
	};
	class RavPatRHS_m97_TSD_ess : rhssaf_helmet_m97_woodland_black_ess
	{
		displayName = "[RT] M97 Tiger Stripe Des ess ";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_TSD.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};
	class RavPatRHS_m97_TSD_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName = "[RT] M97 Tiger Stripe Des ess bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"RavPatRHS\Data\RT_m97_TSD.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"
		};
	};	
};
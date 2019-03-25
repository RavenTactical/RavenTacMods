class CfgPatches 
{ 
    class My_Mod_Config 
    { 
        units[] = {"RT_Custom_Uniforms";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F","rhsgref_infantry"}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 

	class RavTac
	{
		displayName="Raven Tactical";
		priority=1;
		side=1;
		icon="RT_Uniforms\Data\RTlogo.paa";
	};

/*     class Custom_Faction 
    { 
        displayName = "My Custom Faction"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  */ 
};

/* class CfgUnitInsignia
{
    class Custom_Insignia
    {
        displayName = "My Custom Patch"; // Name displayed in Arsenal
        author = "Astartes"; // Author displayed in Arsenal
        texture = "\RT_Uniforms\UI\custom_patch_co.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
};  */

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_F; 
    
    class RT_Uniforms: B_soldier_F {
        author = "Citadel"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "RT Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "RavTac";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO 
        uniformClass = "RT_Camo"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co.paa"};
        /* hiddenSelectionsMaterials[] = {"RT_Uniforms\Data\RT_Camo.rvmat"};   */
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class RT_Uniforms_SS: RT_Uniforms {
        displayName = "RT Team Leader"; 
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "RT_Camo_SS"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co.paa"}; 
    };
	
	
    class RT_Uniforms_TS_D: RT_Uniforms {
        displayName = "RT Soldier (Tiger Stripe Desert)";
        uniformClass = "RT_Camo_TS_D"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_TS_D.paa"};
    };

    class RT_Uniforms_SS_TS_D: RT_Uniforms {
        displayName = "RT Team Leader (Tiger Stripe Desert)"; 
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "RT_Camo_SS_TS_D"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_TS_D.paa"}; 
	};
	
    class RT_Uniforms_TS: RT_Uniforms {
        displayName = "RT Soldier (Tiger Stripe)";
        uniformClass = "RT_Camo_TS"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_TS.paa"};
    };

    class RT_Uniforms_SS_TS: RT_Uniforms {
        displayName = "RT Team Leader (Tiger Stripe)"; 
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "RT_Camo_SS_TS"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_TS.paa"}; 
    };
	
	class RT_Uniforms_RTA: RT_Uniforms {
		displayName = "RT Team Leader (RT Arid)";
        uniformClass = "RT_Camo"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_RTA.paa"};
    };
	
	class RT_Uniforms_SS_RTA: RT_Uniforms_SS {
		displayName = "RT Team Leader (RT Arid)"; 
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "RT_Camo_SS"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\RT_Camo_co_RTA.paa"};
	};
/* 
    class RT_Uniforms_TShirt: B_soldier_F {
        author = "Astartes"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "RT Combat Life Saver"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "RT_Camo_TShirt";
        backpack = "Custom_Backpack_Compact"; 
        hiddenSelections[] = {"Camo1","Camo2"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\tshirt_brown_co.paa","RT_Uniforms\Data\RT_Camo_co.paa"}; 
        hiddenSelectionsMaterials[] = {"a3\characters_F\civil\data\c_cloth1.rvmat","RT_Uniforms\Data\RT_Camo.rvmat"}; 
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; */

 /*    class B_AssaultPack_Base;
    
    class Custom_Backpack_Compact: B_AssaultPack_Base {
        scope = 2;
        displayName = "Custom Backpack Compact";
        picture = "";
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\pack_compact_co.paa"};
    };

    class LandVehicle;
    class B_G_Offroad_01_F;
    class B_G_Offroad_01_armed_F;
    class B_MRAP_01_F;
    class B_MRAP_01_HMG_F;
    class B_Heli_Light_01_F;
    class Custom_Offroad_F: B_G_Offroad_01_F
    {
        crew = "RT_Uniforms_TShirt";
        side = 1;
        scope = 2;
        faction = "Custom_Faction";
        displayName = "Custom Offroad 4x4";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\offroad_base_co.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        };  
    };
    class Custom_Offroad_HMG_F: B_G_Offroad_01_armed_F
    {
        side = 1;
        scope = 2;
        crew = "RT_Uniforms_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom Offroad 4x4 (HMG)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\offroad_base_co.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        }; 
    };
    class Custom_Hunter_F: B_MRAP_01_F
    {
        side = 1;
        scope = 2;
        crew = "RT_Uniforms_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom M-ATV MRAP";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\hunter_base_co.paa","RT_Uniforms\Data\hunter_adds_co.paa"};
    };
    class Custom_Hunter_HMG_F: B_MRAP_01_HMG_F
    {
        side = 1;
        scope = 2;
        crew = "RT_Uniforms_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom M-ATV MRAP (HMG)";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\hunter_base_co.paa","RT_Uniforms\Data\hunter_adds_co.paa"};
    }; 
    class Custom_MH6: B_Heli_Light_01_F
    {
        side = 1;
        scope = 2;
        crew = "RT_Uniforms_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom MH-6 Hummingbird";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\hummingbird_base_co.paa"};
    }; */
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    class RT_Camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Flecktarn"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class RT_Camo_SS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Flecktarn (Rolled Sleeves)"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_SS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
	


    class RT_Camo_TS_D: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Tiger Stripe Desert"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_TS_D"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class RT_Camo_SS_TS_D: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Tiger Stripe Desert (Rolled Sleeves)"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_SS_TS_D"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 		
	
    class RT_Camo_TS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Tiger Stripe"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_TS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class RT_Camo_SS_TS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Tiger Stripe (Rolled Sleeves)"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_SS_TS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 	
	
	class RT_Camo_RTA: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Updated Rav Tac Arid"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_RTA"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class RT_Camo_SS_RTA: Uniform_Base 
    { 
        scope = 2; 
        displayName = "[RT] Updated Rav Tac Arid (Rolled Sleeves)"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_SS_RTA"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 	
	
/*     class RT_Camo_TShirt: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo (T-Shirt)"; 
        picture = "-"; 
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "RT_Uniforms_TShirt"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    }; 
 */
    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
/*     class VestItem; 
    class Vest_Camo_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
    class Custom_Vest1: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
    class Custom_Vest2: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier Lite"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest02"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
    class Custom_Vest3: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier Kerry"; 
        picture = "-"; 
        model = "A3\Charactrs_F_EPA\BLUFOR\equip_b_vest_kerry"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"RT_Uniforms\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    }; */

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 
	
	class rhsgref_helmet_pasgt_erdl_rhino;
	class rhssaf_helmet_m97_woodland_black_ess;
	class rhssaf_helmet_m97_woodland_black_ess_bare;
	class H_Booniehat_oli;
	
	class RT_TS_boonie: H_Booniehat_oli
	{
		displayname="[RT] Boonie Hat Tiger";
		scope=2;
		grad_slingHelmet_allow=true;
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_boonie_TS.paa"
		};
	};
	
		class RT_TS_boonie_D: H_Booniehat_oli
	{
		displayname="[RT] Boonie Hat Tiger Desert";
		scope=2;
		grad_slingHelmet_allow=true;
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_boonie_TS_D.paa"
		};
	};
     
	class RT_M97_Rhino: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName="[RT] M97 Fleck";
		scope=2;
		grad_slingHelmet_allow=true;
		picture="\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet.paa"
		};
	};
	
	class RT_m97_olive_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		displayName="[RT] M97 Fleck Goggles ";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RT_m97_olive_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName="[RT] M97 Fleck Goggles Bare";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	}; 
	
	
	class RT_M97_Rhino_TS_D: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName="[RT] M97 Tiger Desert";
		grad_slingHelmet_allow=true;
		scope=2;
		picture="\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS_D.paa"
		};
	};
	class RT_m97_olive_ess_TS_D: rhssaf_helmet_m97_woodland_black_ess
	{
		displayName="[RT] M97 Tiger Desert Goggles ";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS_D.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RT_m97_olive_ess_bare_TS_D: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName="[RT] M97 Tiger Desert Goggles Bare";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS_D.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	}; 
		
	
	class RT_M97_Rhino_TS: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName="[RT] M97 Tiger";
		grad_slingHelmet_allow=true;
		scope=2;
		picture="\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS.paa"
		};
	};
	class RT_m97_olive_ess_TS: rhssaf_helmet_m97_woodland_black_ess
	{
		displayName="[RT] M97 Tiger Goggles ";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RT_m97_olive_ess_bare_TS: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName="[RT] M97 Tiger Goggles Bare";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_TS.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	}; 
	
	class RT_M97_Rhino_RTA: rhsgref_helmet_pasgt_erdl_rhino
	{
		displayName="[RT] M97 Arid";
		grad_slingHelmet_allow=true;
		scope=2;
		picture="\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_RTA.paa"
		};
	};
	class RT_m97_olive_ess_RTA: rhssaf_helmet_m97_woodland_black_ess
	{
		displayName="[RT] M97 Arid Goggles ";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_RTA.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	};
	class RT_m97_olive_ess_bare_RTA: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		displayName="[RT] M97 Arid Goggles Bare";
		grad_slingHelmet_allow=true;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RT_Uniforms\Data\RT_helmet_RTA.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
	}; 
	
/*     class CUstom_Helmet2: H_HelmetB
    {
        displayName = "Custom ECH Lite";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\RT_Uniforms\Data\custom_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 15;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.3";
            passThrough = 0.75;
        };
    }; */
}; 
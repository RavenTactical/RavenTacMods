class CfgWeapons {

	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m16a4_carryhandle_M203;
	class rhs_weap_sr25_ec;
	class rhs_weap_m4a1_carryhandle;
	class rhs_weap_m249_pip_L;
	class rhs_weap_m249_pip_S;
	class rhs_weap_m24sws_blk;
	class MMG_02_black_F;
	class srifle_GM6_F;

	class corb_rhs_weap_m16a4_handle_anpeq15: rhs_weap_m16a4_carryhandle {
			scope=1;
			class LinkedItems
			{
/* 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="rhsusf_acc_ACOG";
				}; */
				class LinkedItemsAcc
				{
					slot="PointerSlot";
					item="rhsusf_acc_anpeq15side_bk";
				};
			};
		};

	class corb_rhs_weap_m16a4_handle_anpeq15_acog: rhs_weap_m16a4_carryhandle {
			scope=1;
			class LinkedItems
			{
 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="optic_Hamr";
				}; 
				class LinkedItemsAcc
				{
					slot="PointerSlot";
					item="rhsusf_acc_anpeq15side_bk";
				};
			};
		};

	class corb_rhs_weap_m16a4_handle_M203_anpeq15: rhs_weap_m16a4_carryhandle_M203 {
			scope=1;
			class LinkedItems
			{
/* 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="rhsusf_acc_ACOG";
				}; */
				class LinkedItemsAcc
				{
					slot="UnderBarrelSlot";
					item="rhsusf_acc_anpeq15side_bk";
				};
			};
		};		
		
	class corb_srifle_DMR_F: rhs_weap_sr25_ec {
			scope=1;
			class LinkedItems
			{
 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="optic_AMS";
				}; 
				class LinkedItemsAcc
				{
					slot="UnderBarrelSlot";
					item="bipod_01_F_blk";
				};
				
			};
		};	
		
	class corb_srifle_GM6_F: srifle_GM6_F {
			scope=1;
			class LinkedItems
			{
 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="optic_AMS";
				}; 
				class LinkedItemsAcc
				{
					slot="UnderBarrelSlot";
					item="bipod_01_F_blk";
				};
				
			};
		};	

	class corb_srifle_R700_F: rhs_weap_m24sws_blk {
			_generalMacro="corb_srifle_R700_F";
			scope=2;
			baseWeapon="corb_srifle_R700_F";
			displayname = "Remington 700 XCR";
			author = "Citadel";
			magazines[]=
				{
					"rhs_5Rnd_338lapua_t5000"
				};
			
		};		
		
	class corb_rhs_weap_m4a1_carryhandle_rco_sup_anpeq15: rhs_weap_m4a1_carryhandle {
			scope=1;
			class LinkedItems
			{
 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="optic_Hamr";
				}; 
				class LinkedItemsAcc
				{
					slot="PointerSlot";
					item="rhsusf_acc_anpeq15_bk";
				};
				class LinkedItemsMuzzle
				 {
				   slot = "MuzzleSlot";
				   item = "rhsusf_acc_rotex5_grey";
				 };				
			};
		};	
		
	class corb_rhs_weap_m249_pip_S_sup_mgo: rhs_weap_m249_pip_S {
			scope=1;
			class LinkedItems
			{
 				class LinkedItemsOptic
				{
					slot="CowsSlot";
					item="rhsusf_acc_ELCAN";
				}; 
				class LinkedItemsAcc
				{
					slot="PointerSlot";
					item="rhsusf_acc_anpeq15_bk";
				};
				class LinkedItemsMuzzle
				 {
				   slot = "MuzzleSlot";
				   item = "rhsusf_acc_rotex5_grey";
				 };				
			};
		};	
		
	class corb_rhs_weap_m249_pip_L: rhs_weap_m249_pip_l {
		scope=1;
		class LinkedItems
		{
/*  				class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ELCAN";
			};  */
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15_bk";
			};
/* 				class LinkedItemsMuzzle
			 {
			   slot = "MuzzleSlot";
			   item = "rhsusf_acc_rotex5_grey";
			 };	 */			
		};
	};	
		
	class corb_srifle_DMR_sup: rhs_weap_sr25_ec {
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			}; 
			class LinkedItemsAcc
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			 {
			   slot = "MuzzleSlot";
			   item = "rhsusf_acc_SR25S";
			 };	 			
		};
	};

	class corb_MMG_02_black_F : MMG_02_black_F {
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};		
		};
	};
		
};



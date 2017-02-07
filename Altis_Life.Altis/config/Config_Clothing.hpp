/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "Summer Clothes Red", 2500, { "", "", -1 } },
            { "U_B_Wetsuit", " Suit", 25000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 25000, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "Summer Clothes Sky", 2500, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "Summer Clothes Yellow", 2500, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "Casual Clothes Blue", 2500, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "Casual Clothes Green", 2500, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "Casual Clothes Navy", 2500, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 15000, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 15000, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 15000, { "", "", -1 } },
            { "U_OrestesBody", "Surfer", 5000, { "", "", -1 } },
            { "U_C_Journalist", "Journalist Clothing", 10000, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Christmas one", 1500, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Christmas two", 1500, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Christmas three", 1500, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Christmas four", 1500, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Christmas five", 1500, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Christmas Red", 1500, { "", "", -1 } },
            { "U_C_Poor_2", "Beggar", 1000, { "", "", -1 } },
            { "U_C_Poor_1", "Fugitive", 1000, { "", "", -1 } },
            { "U_NikosBody", "Nikos", 2500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 1500, { "", "", -1 } },
            { "H_Cap_blu", "Cap Blue", 1500, { "", "", -1 } },
            { "H_Cap_grn", "Cap Green", 1500, { "", "", -1 } },
            { "H_Cap_grn_BI", "Cap BI", 1500, { "", "", -1 } },
            { "H_Cap_oli", "Cap Olive", 1500, { "", "", -1 } },
            { "H_Cap_red", "Cap Red", 1500, { "", "", -1 } },
            { "H_Cap_tan", "Cap Tan", 1500, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_cbr", "Bandana Coyote", 1500, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 1500, { "", "", -1 } },
            { "H_Hat_tan", "Hat Tan", 1500, { "", "", -1 } },
            { "H_Hat_brown", "Hat Brown", 1500, { "", "", -1 } },
            { "H_Hat_grey", "Hat Grey", 1500, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1500, { "", "", -1 } },
            { "H_Hat_blue", "Hat Blue", 1500, { "", "", -1 } },
            { "H_Hat_checker", "Hat Checker", 1500, { "", "", -1 } },
            { "H_Booniehat_tna_F", "BooniehatTropic", 1500, { "", "", -1 } },
            { "H_Cap_blk_ION", "Cap ION", 1500, { "", "", -1 } },
            { "H_Cap_oli_hs", "Cap Olive, Headset", 1500, { "", "", -1 } },
            { "H_Cap_blk_Raven", "Cap AAF", 1500, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "Cap (K", 1500, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "Cap CMMG", 1500, { "", "", -1 } },
            { "H_Bandanna_gry", "Bandana Grey", 1500, { "", "", -1 } },
            { "H_Cap_tan", "Cap Tan", 1500, { "", "", -1 } },
            { "H_Cap_surfer", "Cap Surfer", 1500, { "", "", -1 } },
            { "H_Cap_press", "Cap Press", 1500, { "", "", -1 } },
            { "H_Cap_usblack", "Cap US Black", 1500, { "", "", -1 } },
            { "H_Cap_headphones", "Walt's Cap", 1500, { "", "", -1 } },
            { "H_StrawHat_dark", "Straw hat Dark", 1500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 1000, { "", "", -1 } },
            { "G_Shades_Blue", "", 1000, { "", "", -1 } },
            { "G_Shades_Green", "", 1000, { "", "", -1 } },
            { "G_Shades_Red", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1000, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1000, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1000, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 1000, { "", "", -1 } },
            { "G_Sport_Red", "", 1000, { "", "", -1 } },
            { "G_Squares", "", 1000, { "", "", -1 } },
            { "G_Aviator", "", 1000, { "", "", -1 } },
            { "G_Lady_Mirror", "", 1000, { "", "", -1 } },
            { "G_Lady_Dark", "", 1000, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } },
            { "G_Lady_Blue", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "Press Vest", 5000, { "", "", -1 } },
            { "V_RebreatherB", "Rebreather", 15000, { "", "", -1 } },
            { "V_Rangemaster_Belt", "Rangemaster Belt", 3500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_tan", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blu", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 5000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 10000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 10000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 15000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 15000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 15000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 12500, { "", "", -1 } },
            { "B_Bergen_blk", "", 12500, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_hex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 20000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_hex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 25000, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 30000, { "", "", -1 } },
            { "B_Carryall_oli", "", 30000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 30000, { "", "", -1 } },
            { "B_Carryall_khk", "", 30000, { "", "", -1 } },
            { "B_Parachute", "", 10000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "Cop Uniform", 0, "call life_coplevel >= 3" },
            { "U_B_CTRG_1", "TFU", 0, "call life_coplevel >= 4" },
			{ "U_B_CombatUniform_mcam", "sgt", 0, "call life_coplevel >= 5" },
            { "U_O_Wetsuit", "", 0, "call life_coplevel >= 3" },
            { "U_B_Wetsuit", "", 0, "call life_coplevel >= 3" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 0, { "", "", -1 } },
            { "H_Beret_Colonel", "", 0, { "", "", -1 } },
            { "H_Cap_headphones", "", 0, "call life_coplevel >= 6" },
            { "H_Watchcap_blk", "", 0, "call life_coplevel >= 6" },
            { "H_Booniehat_khk_hs", "", 0, "call life_coplevel >= 6" },
            { "H_Cap_police", "", 0, "call life_coplevel >= 6" },
            { "H_CrewHelmetHeli_B", "", 0, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrier2_blk", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrier2_rgr", "", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 0, { "", "", -1 } },
            { "B_Parachute", "", 0, { "", "", -1 } }
        };
    };

    class tfuc {
        title = "STR_License_tfu";
        license = "tfu";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "Cop Uniform", 0, { "", "", -1 } },
            { "U_B_CTRG_1", "TFU", 0, { "", "", -1 } },
            { "U_B_FullGhillie_sard", "TFU Ghillie", 0, { "", "", -1 } },
            { "U_O_Wetsuit", "", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 0, { "life_coplevel", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetSpecB_blk", "", 0, { "", "", -1 } },
            { "H_HelmetB_light_black", "", 0, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 0, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 0, { "", "", -1 } },
            { "H_HelmetB_plain_blk", "", 0, { "", "", -1 } },
            { "H_Cap_police", "", 0, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "TFU", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 0, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 0, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "TFU", 0, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 0, { "", "", -1 } },
            { "B_Parachute", "", 0, { "", "", -1 } }
        };
    };

    class urac {
        title = "STR_License_ura";
        license = "ura";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "Cop Uniform", 0, { "", "", -1 } },
            { "U_I_CombatUniform_shortsleeve", "NCU", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 0, { "", "", -1 } },
            { "H_Watchcap_blk", "", 0, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 0, { "", "", -1 } },
            { "H_Cap_police", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "NCU Facemask", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 0, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 0, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 0, { "", "", -1 } },
            { "B_Parachute", "", 0, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_O_Wetsuit", "", 25000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 15000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class aaa {
        title = "STR_Shops_AAA";
        license = "aaa";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "", 30000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 1500, { "", "", -1 } },
            { "H_Cap_blu", "Cap Blue", 1500, { "", "", -1 } },
            { "H_Cap_grn", "Cap Green", 1500, { "", "", -1 } },
            { "H_Cap_grn_BI", "Cap BI", 1500, { "", "", -1 } },
            { "H_Cap_oli", "Cap Olive", 1500, { "", "", -1 } },
            { "H_Cap_red", "Cap Red", 1500, { "", "", -1 } },
            { "H_Cap_tan", "Cap Tan", 1500, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 1500, { "", "", -1 } },
            { "H_Bandanna_cbr", "Bandana Coyote", 1500, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 1500, { "", "", -1 } },
            { "H_Hat_tan", "Hat Tan", 1500, { "", "", -1 } },
            { "H_Hat_brown", "Hat Brown", 1500, { "", "", -1 } },
            { "H_Hat_grey", "Hat Grey", 1500, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 1500, { "", "", -1 } },
            { "H_Hat_blue", "Hat Blue", 1500, { "", "", -1 } },
            { "H_Hat_checker", "Hat Checker", 1500, { "", "", -1 } },
            { "H_Booniehat_tna_F", "BooniehatTropic", 1500, { "", "", -1 } },
            { "H_Cap_blk_ION", "Cap ION", 1500, { "", "", -1 } },
            { "H_Cap_oli_hs", "Cap Olive, Headset", 1500, { "", "", -1 } },
            { "H_Cap_blk_Raven", "Cap AAF", 1500, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "Cap (K", 1500, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "Cap CMMG", 1500, { "", "", -1 } },
            { "H_Bandanna_gry", "Bandana Grey", 1500, { "", "", -1 } },
            { "H_Cap_tan", "Cap Tan", 1500, { "", "", -1 } },
            { "H_Cap_surfer", "Cap Surfer", 1500, { "", "", -1 } },
            { "H_Cap_press", "Cap Press", 1500, { "", "", -1 } },
            { "H_Cap_usblack", "Cap US Black", 1500, { "", "", -1 } },
            { "H_Cap_headphones", "Walt's Cap", 1500, { "", "", -1 } },
            { "H_StrawHat_dark", "Straw hat Dark", 1500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 1000, { "", "", -1 } },
            { "G_Shades_Blue", "", 1000, { "", "", -1 } },
            { "G_Shades_Green", "", 1000, { "", "", -1 } },
            { "G_Shades_Red", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1000, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1000, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1000, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 1000, { "", "", -1 } },
            { "G_Sport_Red", "", 1000, { "", "", -1 } },
            { "G_Squares", "", 1000, { "", "", -1 } },
            { "G_Aviator", "", 1000, { "", "", -1 } },
            { "G_Lady_Mirror", "", 1000, { "", "", -1 } },
            { "G_Lady_Dark", "", 1000, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } },
            { "G_Lady_Blue", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_Belt", "Rangemaster Belt", 3500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_tan", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blu", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 5000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 10000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 10000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 15000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 15000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 15000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 12500, { "", "", -1 } },
            { "B_Bergen_blk", "", 12500, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_hex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 20000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_hex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 25000, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 30000, { "", "", -1 } },
            { "B_Carryall_oli", "", 30000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 30000, { "", "", -1 } },
            { "B_Carryall_khk", "", 30000, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
        { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "NHS Uniform", 0, { "life_medicLevel", "SCALAR", 2 } },
            { "U_O_OfficerUniform_ocamo", "ARU Uniform", 0, { "life_medicLevel", "SCALAR", 2 } },
            { "U_B_Wetsuit", "", 0, { "life_medicLevel", "SCALAR", 2 } },
            { "U_O_Wetsuit", "", 0, { "life_medicLevel", "SCALAR", 2 } },
            { "U_Marshal", "AMS Uniform", 0, { "life_medicLevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 0, { "life_medicLevel", "SCALAR", 4 } },
            { "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "AMS Backpack", 0, { "", "", -1 } },
            { "B_Parachute", "", 0, { "", "", -1 } }
        };
    };

    class src {
        title = "STR_MAR_SR_Clothing_Shop";
        license = "snr";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "PAR Uniform", 0, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "ARU Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 0, { "", "", -1 } },
            { "U_O_Wetsuit", "", 0, { "", "", -1 } },
            { "U_Marshal", "AMS Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_PilotHelmetHeli_O", "", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "AMS Backpack", 0, { "", "", -1 } },
            { "B_Parachute", "", 0, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Para_4_F", "", 5000, {"", "", -1} },
            { "U_I_C_Soldier_Para_1_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_5_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_2_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 7500, {"", "", -1} },
            { "U_I_C_Soldier_Bandit_2_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 7500, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla1_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 15000, {"", "", -1} },
            { "U_BG_Guerilla2_3", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "", 15000, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "Xmas Helper", 15000, { "", "", -1 } },
            { "U_I_HeliPilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_I_pilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "", 17500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 17500, { "", "", -1 } },
            { "U_I_CombatUniform", "", 17500, { "", "", -1 } },
            { "U_I_CombatUniform_tshirt", "", 17500, {"", "", -1} },
            { "U_I_CombatUniform_shortsleeve", "", 17500, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_B_PilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 25000, { "", "", -1 } },
            { "U_B_Wetsuit", "", 25000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Booniehat_khk", "", 2000, { "", "", -1 } },
            { "H_Booniehat_indp", "", 2000, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 2000, { "", "", -1 } },
            { "H_Booniehat_tan", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 2000, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 2000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 1500, { "", "", -1 } },
            { "H_Watchcap_blk", "", 1500, { "", "", -1 } },
            { "H_Helmet_Skate", "", 1250, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 3000, { "", "", -1 } },
            { "H_Shemag_olive", "", 3000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 3000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 5000, { "", "", -1 } },
            { "H_HelmetCrew_I", "", 5000, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 5000, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "", 5000, { "", "", -1 } },
            { "H_PilotHelmetHeli_O", "", 7500, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 5000, { "", "", -1 } },
            { "H_BandMask_blk", "", 1500, { "", "", -1 } },
            { "H_Bandanna_camo", "", 1000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 1000, { "", "", -1 } },
            { "G_Shades_Blue", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1000, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1000, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1000, { "", "", -1 } },
            { "G_Lowprofile", "", 1000, { "", "", -1 } },
            { "G_Squares", "", 1000, { "", "", -1 } },
            { "G_Combat", "", 1000, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 1000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1000, { "", "", -1 } },
            { "G_Bandanna_blk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 1000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 1000, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 15000, { "", "", -1 } },
            { "V_BandollierB_khk", "", 15000, { "", "", -1 } },
            { "V_BandollierB_blk", "", 15000, { "", "", -1 } },
            { "V_BandollierB_oli", "", 15000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 17500, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 17500, { "", "", -1 } },
            { "V_HarnessO_gry", "", 17500, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 17500, { "", "", -1 } },
            { "V_HarnessOSpec_brn", "", 20000, { "", "", -1 } },
            { "V_HarnessOSpec_gry", "", 20000, { "", "", -1 } },
            { "V_TacVest_khk", "", 25000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "", 45000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "", 45000, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 40000, { "", "", -1 } },
            { "V_Chestrig_khk", "", 10000, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 10000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 10000, { "", "", -1 } },
            { "V_RebreatherB", "", 15000, { "", "", -1 } },
            { "V_Chestrig_oli", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_tan", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blu", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 5000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 10000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 10000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 15000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 15000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 15000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 12500, { "", "", -1 } },
            { "B_Bergen_blk", "", 12500, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 30000, { "", "", -1 } },
            { "B_Carryall_oli", "", 30000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 30000, { "", "", -1 } },
            { "B_Carryall_khk", "", 30000, { "", "", -1 } },
            { "B_Parachute", "", 10000, { "", "", -1 } }
        };
    };

class advreb {
        title = "STR_Shops_C_Rebel";
        license = "advrebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Para_4_F", "", 5000, {"", "", -1} },
            { "U_I_C_Soldier_Para_1_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_5_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_2_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 7500, {"", "", -1} },
            { "U_I_C_Soldier_Bandit_2_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 7500, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 7500, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla1_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 15000, {"", "", -1} },
            { "U_BG_Guerilla2_3", "", 15000, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "", 15000, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "", 15000, { "", "", -1 } },
            { "U_O_CombatUniform_oucamo", "", 100000, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "", 20000, { "", "", -1 } },
            { "U_OG_leader", "", 20000, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 150000, {"", "", -1} },
            { "U_I_HeliPilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_I_pilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "", 17500, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 17500, { "", "", -1 } },
            { "U_I_CombatUniform", "", 17500, { "", "", -1 } },
            { "U_I_CombatUniform_tshirt", "", 17500, {"", "", -1} },
            { "U_I_CombatUniform_shortsleeve", "", 17500, { "", "", -1 } },
            { "U_O_CombatUniform_ocamo", "", 150000, { "", "", -1 } },
            { "U_O_T_Soldier_F", "", 150000, { "", "", -1 } },
            { "U_B_GhillieSuit", "", 150000, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 150000, { "", "", -1 } },
            { "U_B_FullGhillie_lsh", "", 150000, { "", "", -1 } },
            { "U_B_FullGhillie_sard", "", 150000, { "", "", -1 } },
            { "U_B_FullGhillie_ard", "", 150000, {"", "", -1} },
            { "U_I_FullGhillie_lsh", "", 150000, { "", "", -1 } },
            { "U_I_FullGhillie_sard", "", 150000, { "", "", -1 } },
            { "U_I_FullGhillie_ard", "", 150000, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 250000, { "", "", -1 } },
            { "U_O_FullGhillie_lsh", "", 250000, { "", "", -1 } },
            { "U_O_FullGhillie_ard", "", 250000, { "", "", -1 } },
            { "U_O_T_Sniper_F", "", 275000, { "", "", -1 } },
            { "U_O_T_FullGhillie_tna_F", "", 275000, { "", "", -1 } },
            { "U_O_FullGhillie_sard", "", 250000, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_B_PilotCoveralls", "", 25000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 25000, { "", "", -1 } },
            { "U_B_Wetsuit", "", 25000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Booniehat_khk", "", 2000, { "", "", -1 } },
            { "H_Booniehat_indp", "", 2000, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 2000, { "", "", -1 } },
            { "H_Booniehat_tan", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 2000, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 2000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 1500, { "", "", -1 } },
            { "H_Watchcap_blk", "", 1500, { "", "", -1 } },
            { "H_Helmet_Skate", "", 1250, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 3000, { "", "", -1 } },
            { "H_Shemag_olive", "", 3000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 3000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 5000, { "", "", -1 } },
            { "H_HelmetCrew_I", "", 5000, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 5000, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "", 5000, { "", "", -1 } },
            { "H_PilotHelmetHeli_O", "", 7500, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 5000, { "", "", -1 } },
            { "H_HelmetB_grass", "", 5000, { "", "", -1 } },
            { "H_HelmetB_snakeskin", "", 5000, { "", "", -1 } },
            { "H_HelmetB_desert", "", 5000, { "", "", -1 } },
            { "H_HelmetB_camo", "", 15000, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 17500, { "", "", -1 } },
            { "H_BandMask_blk", "", 1500, { "", "", -1 } },
            { "H_Bandanna_camo", "", 1000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 1000, { "", "", -1 } },
            { "G_Shades_Blue", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1000, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1000, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1000, { "", "", -1 } },
            { "G_Lowprofile", "", 1000, { "", "", -1 } },
            { "G_Squares", "", 1000, { "", "", -1 } },
            { "G_Combat", "", 1000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 1000, { "", "", -1 } },
            { "G_Balaclava_combat", "", 1000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 1000, { "", "", -1 } },
            { "G_Balaclava_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 1000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1000, { "", "", -1 } },
            { "G_Bandanna_blk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 1000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 1000, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 15000, { "", "", -1 } },
            { "V_BandollierB_khk", "", 15000, { "", "", -1 } },
            { "V_BandollierB_blk", "", 15000, { "", "", -1 } },
            { "V_BandollierB_oli", "", 15000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 17500, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 17500, { "", "", -1 } },
            { "V_HarnessO_gry", "", 17500, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 17500, { "", "", -1 } },
            { "V_HarnessOSpec_brn", "", 20000, { "", "", -1 } },
            { "V_HarnessOSpec_gry", "", 20000, { "", "", -1 } },
            { "V_TacVest_khk", "", 25000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "", 50000, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "", 45000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "", 45000, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 40000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 40000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr_noflag_F", "", 40000, { "", "", -1 } },
            { "V_PlateCarrier1_tna_F", "", 40000, { "", "", -1 } },
            { "V_PlateCarrierIA2_dgtl", "", 60000, { "", "", -1 } },
            { "V_Chestrig_khk", "", 10000, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 10000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 10000, { "", "", -1 } },
            { "V_RebreatherB", "", 15000, { "", "", -1 } },
            { "V_Chestrig_oli", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_tan", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blu", "", 5000, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 5000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 10000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 10000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 10000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 15000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 15000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 15000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 12500, { "", "", -1 } },
            { "B_Bergen_blk", "", 12500, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_hex_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 20000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 20000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_hex_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 25000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 25000, { "", "", -1 } },
            { "B_Carryall_ghex_F", "", 30000, { "", "", -1 } },
            { "B_Carryall_oli", "", 30000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 30000, { "", "", -1 } },
            { "B_Carryall_khk", "", 30000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 35000, { "", "", -1 } },
            { "B_Parachute", "", 10000, { "", "", -1 } }
        };
    };

    class syn {
        title = "STR_Shops_C_Syn";
        license = "";
        side = "syn";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Marshal", "", 20000, { "", "", -1 } },
            { "U_Rangemaster", "", 20000, { "", "", -1 } },
            { "U_B_T_Soldier_AR_F", "", 20000, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "", 20000, { "", "", -1 } },
            { "U_B_T_Soldier_F", "", 20000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 20000, { "", "", -1 } },
            { "U_B_Wetsuit", "", 20000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_TI_tna_F", "", 20000, { "", "", -1 } },
            { "H_Booniehat_khk", "", 2000, { "", "", -1 } },
            { "H_Booniehat_indp", "", 2000, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 2000, { "", "", -1 } },
            { "H_Booniehat_tan", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 2000, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 2000, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 2000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 1500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 1500, { "", "", -1 } },
            { "H_Watchcap_blk", "", 1500, { "", "", -1 } },
            { "H_Helmet_Skate", "", 1250, { "", "", -1 } },
            { "H_Hat_tan", "Hat Tan", 1500, { "", "", -1 } },
            { "H_Hat_brown", "Hat Brown", 1500, { "", "", -1 } },
            { "H_Hat_grey", "Hat Grey", 1500, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 3000, { "", "", -1 } },
            { "H_Shemag_olive", "", 3000, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 3000, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 5000, { "", "", -1 } },
            { "H_HelmetCrew_I", "", 5000, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 5000, { "", "", -1 } },
            { "H_HelmetLeaderO_ocamo", "", 5000, { "", "", -1 } },
            { "H_PilotHelmetHeli_O", "", 7500, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 5000, { "", "", -1 } },
            { "H_HelmetB_grass", "", 5000, { "", "", -1 } },
            { "H_HelmetB_snakeskin", "", 5000, { "", "", -1 } },
            { "H_HelmetB_desert", "", 5000, { "", "", -1 } },
            { "H_HelmetB_camo", "", 15000, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 17500, { "", "", -1 } },
            { "H_BandMask_blk", "", 1500, { "", "", -1 } },
            { "H_Beret_Colonel", "", 10000, { "", "", -1 } },
            { "H_Beret_gen_F", "", 10000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 1000, { "", "", -1 } },
            { "G_Shades_Blue", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1000, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1000, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1000, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1000, { "", "", -1 } },
            { "G_Lowprofile", "", 1000, { "", "", -1 } },
            { "G_Squares", "", 1000, { "", "", -1 } },
            { "G_Combat", "", 1000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 1000, { "", "", -1 } },
            { "G_Balaclava_combat", "", 1000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 1000, { "", "", -1 } },
            { "G_Balaclava_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 1000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 1000, { "", "", -1 } },
            { "G_Bandanna_blk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 1000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 1000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 1000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 1000, { "", "", -1 } },
            { "G_Diving", "", 10000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 30000, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "", 30000, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "", 50000, { "", "", -1 } },
            { "V_PlateCarrierSpec_blk", "Operations Vest", 70000, { "", "", -1 } },
            { "V_RebreatherB", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 10000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 10000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 30000, { "", "", -1 } },
            { "B_Parachute", "", 3000, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};

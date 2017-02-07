/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Winstons Handguns";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
          { "hgun_Pistol_Signal_F", "Fake Pistol", 10000, 1000, { "", "", -1 } },
          { "hgun_Pistol_01_F", "PM 9mm", 14000, 1400, { "", "", -1 } },
          { "hgun_Rook40_F", "Rook-40 9 mm", 20000, 2000, { "", "", -1 } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 25000, 2500, { "", "", -1 } },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 30000, 3000, { "", "", -1 } },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 28000, 2750, { "", "", -1 } }
        };
        mags[] = {
          { "10Rnd_9x21_Mag", "10rnd 9mm", 200, 10, { "", "", -1 } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 200, 10, { "", "", -1 } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 320, 16, { "", "", -1 } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 320, 16, { "", "", -1 } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 320, 16, { "", "", -1 } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 400, 20, { "", "", -1 } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 400, 20, { "", "", -1 } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 500, 25, { "", "", -1 } }
        };
        accs[] = {
            {""}
        };
    };

    class rebel {
        name = "rebelist Weapons";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
          { "hgun_Pistol_Signal_F", "Fake Pistol", 10000, 1000, { "", "", -1 } },
          { "hgun_Pistol_01_F", "PM 9mm", 14000, 1400, { "", "", -1 } },
          { "hgun_Rook40_F", "Rook-40 9 mm", 20000, 2000, { "", "", -1 } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 25000, 2500, { "", "", -1 } },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 30000, 3000, { "", "", -1 } },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 28000, 2750, { "", "", -1 } },
          { "arifle_Mk20C_plain_F", "Mk20C 5.56 mm", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 40000, 4000, { "", "", -1 } },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 25000, 2500, { "", "", -1 } },
          { "SMG_05_F", "Protector 9mm", 35000, 3500, { "", "", -1 } },
          { "SMG_01_F", "Vermin SMG .45 ACP", 30000, 3000, { "", "", -1 } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 40000, 4000, { "", "", -1 } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 25000, 2500, { "", "", -1 } },
          { "arifle_Mk20C_F", "Mk20C 5.56 mm (Camo)", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_F", "Mk20 5.56 mm (Camo)", 40000, 4000, { "", "", -1 } },
          { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 60000, 6000, { "", "", -1 } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 55000, 5500, { "", "", -1 } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 55000, 5500, { "", "", -1 } },
          { "arifle_CTAR_blk_F", "CAR-95 5.8mm(Black)", 80000, 8000, { "", "", -1 } },
          { "arifle_CTAR_ghex_F", "CAR-95 5.8mm(Greenhex)", 80000, 8000, { "", "", -1 } },
          { "arifle_CTAR_hex_F", "CAR-95 5.8mm(Hex)", 80000, 8000, { "", "", -1 } },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 86000, 8500, { "", "", -1 } },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 86000, 8500, { "", "", -1 } },
          { "arifle_MXC_F", "MXC 6.5 mm (Sand)", 90000, 9000, { "", "", -1 } },
          { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 90000, 9000, { "", "", -1 } },
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 120000, 12000, { "", "", -1 } },
          { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 120000, 12000, { "", "", -1 } },
          { "arifle_MX_SW_F", "MX SW 6.5 mm (Sand)", 160000, 16000, { "", "", -1 } },
          { "arifle_MX_SW_khk_F", "MX SW 6.5mm (Khaki)", 160000, 16000, { "", "", -1 } },
          { "arifle_MXM_F", "MXM 6.5 mm (Sand)", 190000, 19000, { "", "", -1 } },
          { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 190000, 19000, { "", "", -1 } },
          { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 190000, 15000, { "", "", -1 } },
          { "srifle_DMR_07_ghex_F", "CMR-76 6.5mm (Greenhex)", 190000, 15000, { "", "", -1 } },
          { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (Hex)", 150000, 15000, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } },
          { "SmokeShell", "Smoke Grenade (White)", 500, 50, { "", "", -1 } }
        };
        mags[] = {
          { "10Rnd_9x21_Mag", "10rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 160, 16, { "", "", -1 } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 250, 25, { "", "", -1 } },
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 16000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 16000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 26000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 16000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 26000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 26000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 36000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 46000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 66000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_65_TI_blk_F", "S-Suppressor (6.5mm) (Black)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_hex_F", "S-Suppressor (6.5mm) (Hex)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_ghex_F", "S-Suppressor (6.5mm) (GreenHex)", 86000, 0, { "", "", -1 } } //accidentally free for a while do not put a sell price
        };
    };

    class advrebel {
        name = "rebelist Weapons";
        side = "civ";
        license = "advrebel";
        level[] = { "", "", -1, "" };
        items[] = {
          { "hgun_Pistol_Signal_F", "Fake Pistol", 10000, 1000, { "", "", -1 } },
          { "hgun_Pistol_01_F", "PM 9mm", 14000, 1400, { "", "", -1 } },
          { "hgun_Rook40_F", "Rook-40 9 mm", 20000, 2000, { "", "", -1 } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 25000, 2500, { "", "", -1 } },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 30000, 3000, { "", "", -1 } },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 28000, 2750, { "", "", -1 } },
          { "arifle_Mk20C_plain_F", "Mk20C 5.56 mm", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 40000, 4000, { "", "", -1 } },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 25000, 2500, { "", "", -1 } },
          { "SMG_05_F", "Protector 9mm", 35000, 3500, { "", "", -1 } },
          { "SMG_01_F", "Vermin SMG .45 ACP", 30000, 3000, { "", "", -1 } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 40000, 4000, { "", "", -1 } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 25000, 2500, { "", "", -1 } },
          { "arifle_Mk20C_F", "Mk20C 5.56 mm (Camo)", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_F", "Mk20 5.56 mm (Camo)", 40000, 4000, { "", "", -1 } },
          { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 60000, 6000, { "", "", -1 } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 55000, 5500, { "", "", -1 } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 55000, 5500, { "", "", -1 } },
          { "arifle_CTAR_blk_F", "CAR-95 5.8mm(Black)", 80000, 8000, { "", "", -1 } },
          { "arifle_CTAR_ghex_F", "CAR-95 5.8mm(Greenhex)", 80000, 8000, { "", "", -1 } },
          { "arifle_CTAR_hex_F", "CAR-95 5.8mm(Hex)", 80000, 8000, { "", "", -1 } },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 86000, 8500, { "", "", -1 } },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 86000, 8500, { "", "", -1 } },
          { "arifle_MXC_F", "MXC 6.5 mm (Sand)", 90000, 9000, { "", "", -1 } },
          { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 90000, 9000, { "", "", -1 } },
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 120000, 12000, { "", "", -1 } },
          { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 120000, 12000, { "", "", -1 } },
          { "arifle_MX_SW_F", "MX SW 6.5 mm (Sand)", 160000, 16000, { "", "", -1 } },
          { "arifle_MX_SW_khk_F", "MX SW 6.5mm (Khaki)", 160000, 16000, { "", "", -1 } },
          { "arifle_MXM_F", "MXM 6.5 mm (Sand)", 190000, 19000, { "", "", -1 } },
          { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 190000, 19000, { "", "", -1 } },
          { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 190000, 15000, { "", "", -1 } },
          { "srifle_DMR_07_ghex_F", "CMR-76 6.5mm (Greenhex)", 190000, 15000, { "", "", -1 } },
          { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (Hex)", 150000, 15000, { "", "", -1 } },
          { "arifle_ARX_ghex_F", "Type 115 6.5mm (Green Hex)", 300000, 30000, { "", "", -1 } },
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 220000, 21000, { "", "", -1 } },
          { "srifle_EBR_F", "Mk18 EBR 7.62 mm", 280000, 28000, { "", "", -1 } },
          { "srifle_DMR_03_khaki_F", "Mk-I EMR 7.62mm (Khaki)", 400000, 37500, { "", "", -1 } },
          { "srifle_DMR_03_tan_F", "Mk-I EMR 7.62mm (Sand)", 400000, 37500, { "", "", -1 } },
          { "srifle_DMR_03_multicam_F", "Mk-I EMR 7.62mm (Camo)", 400000, 37500, { "", "", -1 } },
          { "srifle_DMR_03_woodland_F", "Mk-I EMR 7.62mm (Woodland)", 400000, 37500, { "", "", -1 } },
          { "srifle_DMR_06_camo_F", "Mk14 7.62mm (Camo)", 350000, 24500, { "", "", -1 } },
          { "srifle_DMR_06_olive_F", "Mk14 7.62mm (Olive)", 350000, 24500, { "", "", -1 } },
          { "srifle_DMR_06_camo_khs_F", "Mk14 7.62mm (Camo)", 350000, 24500, { "", "", -1 } },
          { "arifle_SPAR_03_blk_F", "SPAR-17 7.62mm (Black)", 450000, 30000, { "", "", -1 } },
          { "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (Khaki)", 450000, 30000, { "", "", -1 } },
          { "arifle_SPAR_03_snd_F", "SPAR-17 7.62mm (Sand)", 450000, 30000, { "", "", -1 } },
          { "arifle_AK12_F", "AK12", 650000, 50000, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } },
          { "SmokeShell", "Smoke Grenade (White)", 500, 50, { "", "", -1 } }
        };
        mags[] = {
          { "10Rnd_9x21_Mag", "10rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 160, 16, { "", "", -1 } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 250, 25, { "", "", -1 } },
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "30Rnd_762x39_Mag_F", "30rnd 7.62mm", 3000, 100, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Tracer_Green_F", "30rnd 7.62mm (Tracer Green)", 3000, 150, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Tracer_F", "30rnd 7.62mm (Tracer Yellow)", 3000, 150, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Green_F", "30rnd 7.62mm Green", 3000, 150, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 2000, 200, { "", "", -1 } },
          { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 2000, 200, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 16000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 16000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 26000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 16000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 26000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 26000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 36000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 46000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 66000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_B_snd_F", "Suppressor (7.62mm) (Sand)", 86000, 8500, { "", "", -1 } },
          { "muzzle_snds_B", "Suppressor (7.62mm) (Black)", 86000, 8500, { "", "", -1 } },
          { "muzzle_snds_B_khk_F", "Suppressor (7.62mm) (Khaki)", 86000, 8500, { "", "", -1 } },
          { "optic_AMS_snd", "AMS (Sand)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS_khk", "AMS (Khaki)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS", "AMS (Black)", 40000, 4000, { "", "", -1 } },
          { "optic_KHS_old", "Khalia Old", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_blk", "Kahlia (Black)", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_hex", "Kahlia (Hex)", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_tan", "Kahlia (Tan)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_65_TI_blk_F", "S-Suppressor (6.5mm) (Black)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_hex_F", "S-Suppressor (6.5mm) (Hex)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_ghex_F", "S-Suppressor (6.5mm) (GreenHex)", 86000, 0, { "", "", -1 } } //accidentally free for a while do not put a sell price
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          { "hgun_Pistol_Signal_F", "Fake Pistol", 10000, 1000, { "", "", -1 } },
          { "hgun_Pistol_01_F", "PM 9mm", 14000, 1400, { "", "", -1 } },
          { "hgun_Rook40_F", "Rook-40 9 mm", 20000, 2000, { "", "", -1 } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 25000, 2500, { "", "", -1 } },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 30000, 3000, { "", "", -1 } },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 28000, 2750, { "", "", -1 } },
          { "arifle_Mk20C_plain_F", "Mk20C 5.56 mm", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 40000, 4000, { "", "", -1 } },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 25000, 2500, { "", "", -1 } },
          { "SMG_05_F", "Protector 9mm", 35000, 3500, { "", "", -1 } },
          { "SMG_01_F", "Vermin SMG .45 ACP", 30000, 3000, { "", "", -1 } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 40000, 4000, { "", "", -1 } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 25000, 2500, { "", "", -1 } },
          { "arifle_Mk20C_F", "Mk20C 5.56 mm (Camo)", 35000, 3500, { "", "", -1 } },
          { "arifle_Mk20_F", "Mk20 5.56 mm (Camo)", 40000, 4000, { "", "", -1 } },
          { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 60000, 6000, { "", "", -1 } },
          { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 60000, 6000, { "", "", -1 } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 55000, 5500, { "", "", -1 } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 55000, 5500, { "", "", -1 } }
        };
        mags[] = {
          { "10Rnd_9x21_Mag", "10rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 160, 16, { "", "", -1 } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 250, 25, { "", "", -1 } },
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 16000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 16000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 26000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 16000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 26000, 2500, { "", "", -1 } }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          { "FirstAidKit", "First Aid Kit", 375, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1500, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 750, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 150, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 150, 0, { "", "", -1 } },
          { "ItemMap", "Map", 150, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 9000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 3000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 3750, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 3750, 0, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

   //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
           { "hgun_Pistol_Signal_F", "Fake Pistol", 0, 0, "call life_coplevel >= 1" },
		  { "arifle_Mk20C_plain_F", "Rubber Bullet Gun", 0, 0, {"", "", -1 } },
          { "arifle_Mk20_plain_F", "Rubber Bullet Gun LG", 0, 0, {"", "", -1 } },
          { "hgun_Pistol_01_F", "PM 9mm", 0, 0, "call life_coplevel >= 1" },
          { "hgun_Rook40_F", "Rook-40 9 mm", 0, 2000, "call life_coplevel >= 1" },
		  { "hgun_P07_snds_F", "Taser", 0, 0, {"", "", -1 } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 0, 0, "call life_coplevel >= 5" },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 0, 0, "call life_coplevel >= 5" },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 0, 0, "call life_coplevel >= 5" },
          { "arifle_Mk20C_plain_F", "Mk20C 5.56 mm", 0, 0, "call life_coplevel >= 5" },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 0, 0, "call life_coplevel >= 5" },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 0, 0, "call life_coplevel >= 1" },
          { "SMG_05_F", "Protector 9mm", 0, 0, "call life_coplevel >= 1" },
          { "SMG_01_F", "Vermin SMG .45 ACP", 0, 3000, "call life_coplevel >= 1" },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 0, 0, "call life_coplevel >= 5" },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 0, 0, "call life_coplevel >= 5" },
          { "arifle_Mk20C_F", "Mk20C 5.56 mm (Camo)", 0, 3500, "call life_coplevel >= 5" },
          { "arifle_Mk20_F", "Mk20 5.56 mm (Camo)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_CTAR_blk_F", "CAR-95 5.8mm(Black)", 0, 0, "call life_coplevel >= 5" },
          { "arifle_CTAR_ghex_F", "CAR-95 5.8mm(Greenhex)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_CTAR_hex_F", "CAR-95 5.8mm(Hex)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 0, 0, "call life_coplevel >= 4" },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MXC_F", "MXC 6.5 mm (Sand)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 0, , "call life_coplevel >= 4" },
          { "arifle_MX_SW_F", "MX SW 6.5 mm (Sand)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MX_SW_khk_F", "MX SW 6.5mm (Khaki)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MXM_F", "MXM 6.5 mm (Sand)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 0, 0, "call life_coplevel >= 4" },
          { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 0, 0, "call life_coplevel >= 4" },
          { "srifle_DMR_07_ghex_F", "CMR-76 6.5mm (Greenhex)", 0, 0, "call life_coplevel >= 4" },
          { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (Hex)", 0, 0, "call life_coplevel >= 4" },
          { "arifle_ARX_ghex_F", "Type 115 6.5mm (Green Hex)", 0, 0, "call life_coplevel >= 4" },
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 0, 0, "call life_coplevel >= 7" },
          { "srifle_EBR_F", "Mk18 EBR 7.62 mm", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_03_khaki_F", "Mk-I EMR 7.62mm (Khaki)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_03_tan_F", "Mk-I EMR 7.62mm (Sand)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_03_multicam_F", "Mk-I EMR 7.62mm (Camo)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_03_woodland_F", "Mk-I EMR 7.62mm (Woodland)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_06_camo_F", "Mk14 7.62mm (Camo)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_06_olive_F", "Mk14 7.62mm (Olive)", 0, 0, "call life_coplevel >= 7" },
          { "srifle_DMR_06_camo_khs_F", "Mk14 7.62mm (Camo)", 0, 0, "call life_coplevel >= 7" },
          { "arifle_SPAR_03_blk_F", "SPAR-17 7.62mm (Black)", 0, 0, "call life_coplevel >= 7" },
          { "arifle_SPAR_03_khk_F", "SPAR-17 7.62mm (Khaki)", 0, 0, "call life_coplevel >= 7" },
          { "arifle_SPAR_03_snd_F", "SPAR-17 7.62mm (Sand)", 0, 0,"call life_coplevel >= 7" },
          { "arifle_AK12_F", "AK12", 0, 0, "call life_coplevel >= 5" },
          { "FirstAidKit", "First Aid Kit", 0, 0, "call life_coplevel >= 1" },
          { "ItemGPS", "GPS", 0, 0, "call life_coplevel >= 1" },
          { "Binocular", "Binoculars", 0, 0, "call life_coplevel >= 1" },
          { "ItemCompass", "Compass", 0, 0, "call life_coplevel >= 1" },
          { "ItemWatch", "Watch", 0, 0, "call life_coplevel >= 1" },
          { "ItemMap", "Map", 0, 0, "call life_coplevel >= 1" },
          { "Rangefinder", "Rangefinder", 0, 0, "call life_coplevel >= 1" },
          { "NVGoggles", "NV Goggles (Brown)", 0, 0, "call life_coplevel >= 1" },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 0, 0, "call life_coplevel >= 1" },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 0, 0, "call life_coplevel >= 1" },
          { "SmokeShell", "Smoke Grenade (White)", 0, 0, "call life_coplevel >= 1" }
        };
        mags[] = {
		  { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets (MK20 Only)", 0, 0, {"", "", -1 } },
          { "16Rnd_9x21_Mag", "Taser Magazines", 0, 0, {"", "", -1 } },
          { "10Rnd_9x21_Mag", "10rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 100, 10, { "", "", -1 } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 160, 16, { "", "", -1 } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 160, 16, { "", "", -1 } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 200, 20, { "", "", -1 } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 250, 25, { "", "", -1 } },
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "30Rnd_762x39_Mag_F", "30rnd 7.62mm", 3000, 100, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Tracer_Green_F", "30rnd 7.62mm (Tracer Green)", 3000, 150, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Tracer_F", "30rnd 7.62mm (Tracer Yellow)", 3000, 150, { "", "", -1 } },
          { "30Rnd_762x39_Mag_Green_F", "30rnd 7.62mm Green", 3000, 150, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 2000, 200, { "", "", -1 } },
          { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 2000, 200, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 16000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 16000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 16000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 26000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 16000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 26000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 26000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 26000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 36000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 16000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 16000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 46000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 66000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 66000, 6500, { "", "", -1 } },
          { "muzzle_snds_B_snd_F", "Suppressor (7.62mm) (Sand)", 86000, 8500, { "", "", -1 } },
          { "muzzle_snds_B", "Suppressor (7.62mm) (Black)", 86000, 8500, { "", "", -1 } },
          { "muzzle_snds_B_khk_F", "Suppressor (7.62mm) (Khaki)", 86000, 8500, { "", "", -1 } },
          { "optic_AMS_snd", "AMS (Sand)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS_khk", "AMS (Khaki)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS", "AMS (Black)", 40000, 4000, { "", "", -1 } },
          { "optic_KHS_old", "Khalia Old", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_blk", "Kahlia (Black)", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_hex", "Kahlia (Hex)", 50000, 5000, { "", "", -1 } },
          { "optic_KHS_tan", "Kahlia (Tan)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_65_TI_blk_F", "S-Suppressor (6.5mm) (Black)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_hex_F", "S-Suppressor (6.5mm) (Hex)", 86000, 0, { "", "", -1 } }, //accidentally free for a while do not put a sell price
          { "muzzle_snds_65_TI_ghex_F", "S-Suppressor (6.5mm) (GreenHex)", 86000, 0, { "", "", -1 } } //accidentally free for a while do not put a sell price
        };
    };

    class tfu_copshop {
        name = "Tactical Firearms Unit";
        side = "cop";
        license = "tfu";
        level[] = { "", "", -1, "" };
        items[] = {
        { "hgun_P07_snds_F", "Taser", 0, 0, {"", "", -1 } },
        { "hgun_Rook40_F", "Lethal Rook", 0, 0, {"", "", -1 } },
        { "hgun_Pistol_heavy_02_F", "Zubr .45", 0, 0, {"", "", -1 } },
        { "hgun_Pistol_heavy_01_MRD_F", "4-five .45", 0, 0, {"", "", -1 } },
        { "arifle_Mk20C_plain_F", "Rubber Bullet Gun", 0, 0, {"", "", -1 } },
        { "arifle_Mk20_plain_F", "Rubber Bullet Gun LG", 0, 0, {"", "", -1 } },
        { "SMG_05_F", "Protector 9mm", 0, 0, {"", "", -1 } },
        { "SMG_02_F", "Sting 9mm", 0, 0, {"", "", -1 } },
        { "SMG_01_F", "Vermin 9mm", 0, 0, {"", "", -1 } },
        { "arifle_MXC_Black_F", "MXC", 0, 0, {"", "", -1 } },
        { "arifle_MX_Black_F", "MX", 0, 0, {"", "", -1 } },
        { "arifle_SPAR_01_blk_F", "SPAR-16", 0, 0, {"", "", -1 } },
        { "arifle_CTAR_blk_F", "CAR-95", 0, 0, {"", "", -1 } },
        { "arifle_MXM_Black_F", "MXM", 0, 0, {"", "", -1 } },
        { "arifle_MX_SW_Black_F", "MXSW", 0, 0, {"", "", -1 } },
        { "arifle_MX_GL_Black_F", "MX3GL", 0, 0, {"", "", -1 } },
        { "srifle_DMR_03_F", "Mk-I EMR 7.62mm (Black)", 0, 0, {"", "", -1 } },
        { "srifle_EBR_F", "Mk18 EBR 7.62mm", 0, 0, {"", "", -1 } },
        { "srifle_DMR_05_blk_F", "Cyrus 9.3mm (Black)", 0, 0, {"", "", -1 } },
        { "srifle_DMR_02_F", "MAR-10 .338", 0, 0, {"", "", -1 } },
        { "arifle_SDAR_F", "SDAR", 0, 0, {"", "", -1 } },
        { "arifle_SPAR_03_blk_F", "SPAR-17", 0, 0, {"", "", -1 } },
        { "arifle_ARX_blk_F", "Type 115 6.5mm (Green Hex)", 0, 0, { "", "", -1 } },
        { "1Rnd_Smoke_Grenade_shell", "3GL Smoke", 0, 0, {"", "", -1 } },
        { "3Rnd_Smoke_Grenade_shell", "3GL Smoke 3Rounds", 0, 0, {"", "", -1 } },
        { "SmokeShell", "Smoke Grenade (White)", 0, 0, {"", "", -1 } },
        { "Medikit", "Medikit", 0, 0, {"", "", -1 } },
        { "FirstAidKit", "First Aid Kit", 0, 0, {"", "", -1 } },
        { "ItemRadio", "Radio", 0, 0, {"", "", -1 } },
        { "ItemGPS", "GPS", 0, 0, {"", "", -1 } },
        { "ItemMap", "Map", 0, 0, {"", "", -1 } },
        { "ItemCompass", "Compass", 0, 0, {"", "", -1 } },
        { "ItemWatch", "Watch", 0, 0, {"", "", -1 } },
        { "Binocular", "Binocular", 0, 0, {"", "", -1 } },
        { "NVGoggles_OPFOR", "Night Vision (Black)", 0, 0, {"", "", -1 } },
        { "Rangefinder", "Rangefinders", 0, 0, {"", "", -1 } }
        };
        mags[] = {
        { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets (MK20 Only)", 0, 0, {"", "", -1 } },
        { "16Rnd_9x21_Mag", "Taser Magazines", 0, 0, {"", "", -1 } },
        { "30Rnd_556x45_Stanag", "5.56mm 30RND STANAG", 0, 0, {"", "", -1 } },
        { "30Rnd_9x21_Mag_SMG_02", "9mm (Lethal Ammo)", 0, 0, {"", "", -1 } },
        { "30Rnd_580x42_Mag_Tracer_F", "5.8mm Tracer", 0, 0, {"", "", -1 } },
        { "30Rnd_580x42_Mag_F", "5.8mm", 0, 0, {"", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, {"", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 0, 0, {"", "", -1 } },
        { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "9mm (Tracer Green)", 0, 0, {"", "", -1 } },
        { "30Rnd_65x39_caseless_mag", "6.5mm Ammo", 0, 0, {"", "", -1 } },
        { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm Ammo (Tracer)", 0, 0, {"", "", -1 } },
        { "6Rnd_45ACP_Cylinder", ".45 ACP 6Rnd Cylinder", 0, 0, {"", "", -1 } },
        { "11Rnd_45ACP_Mag", ".45 ACP 11Rnd Mag", 0, 0, {"", "", -1 } },
        { "100Rnd_65x39_caseless_mag", "6.5mm 100rnd mag", 0, 0, {"", "", -1 } },
        { "100Rnd_65x39_caseless_mag_Tracer", "6.5mm 100rnd mag (Tracer)", 0, 0, {"", "", -1 } },
        { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 0, 0, {"", "", -1 } },
        { "10Rnd_338_Mag", ".338 10rnd Mag", 0, 0, {"", "", -1 } },
        { "30Rnd_65x39_caseless_green", "", 0, 0, {"", "", -1 } },
        { "10Rnd_93x64_DMR_05_Mag", "9.3mm 10rnd Mag", 0, 0, {"", "", -1 } },
        { "20Rnd_556x45_UW_mag", "SDAR 20Rnd Dual Purpose Mag", 0, 0, {"", "", -1 } }
        };
        accs[] = {
        { "acc_flashlight", "Flashlight", 0, 0, {"", "", -1 } },
        { "optic_Aco", "ACO (Red)", 0, 0, {"", "", -1 } },
        { "optic_ACO_grn", "ACO (Green)", 0, 0, {"", "", -1 } },
        { "optic_Holosight", "MK17 Holosight", 0, 0, {"", "", -1 } },
        { "optic_Hamr", "RCO", 0, 0, {"", "", -1 } },
        { "optic_MRCO", "MRCO", 0, 0, {"", "", -1 } },
        { "muzzle_snds_M", "5.56 Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_L", "Sting Suppressor", 0, 0, {"", "", -1 } },
        { "optic_Arco", "ARCO", 0, 0, {"", "", -1 } },
        { "optic_Arco_blk_F", "ARCO Black", 0, 0, {"", "", -1 } },
        { "optic_ERCO_blK_F", "", 0, 0, {"", "", -1 } },
        { "acc_pointer_IR", "IR Pointer", 0, 0, {"", "", -1 } },
        { "bipod_01_F_blk", "Bipod", 0, 0, {"", "", -1 } },
        { "optic_DMS", "DMS", 0, 0, {"", "", -1 } },
        { "muzzle_snds_H", "6.5mm Suppressor", 0, 0, {"", "", -1 } },
        { "optic_LRPS", "LRPS", 0, 0, {"", "", -1 } },
        { "optic_AMS", "AMS", 0, 0, {"", "", -1 } },
        { "muzzle_snds_B", "7.62mm Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_58_blk_F", "5.8mm Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_H_MG", "6.5mm LMG Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_338_black", ".338 Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_93mmg", "9.3mm Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_acp", ".45 ACP Suppressor", 0, 0, {"", "", -1 } },
        { "optic_MRD", ".45 4-Five Optic", 0, 0, {"", "", -1 } },
        { "optis_Yorris", ".45 Zubar Optic", 0, 0, {"", "", -1 } }
        };
    };
   class ura {
        name = "NCA";
        side = "cop";
        license = "ura";
        level[] = { "", "", -1, "" };
        items[] = {
        { "hgun_P07_snds_F", "Taser", 0, 0, {"", "", -1 } },
        { "hgun_Rook40_F", "Lethal Rook", 0, 0, {"", "", -1 } },
        { "arifle_Mk20C_plain_F", "Rubber Bullet Gun", 0, 0, {"", "", -1 } },
        { "arifle_Mk20_plain_F", "Rubber Bullet Gun LG", 0, 0, {"", "", -1 } },
        { "SMG_05_F", "Protector 9mm", 0, 0, {"", "", -1 } },
        { "SMG_02_F", "Sting 9mm", 0, 0, {"", "", -1 } },
        { "SMG_01_F", "Vermin 9mm", 0, 0, {"", "", -1 } },
        { "arifle_Katiba_F", "Katiba 6.5 mm", 0, 0, {"", "", -1 } },
        { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 0, 0, { "", "", -1 } },
        { "arifle_MXC_Black_F", "MXC", 0, 0, {"", "", -1 } },
        { "arifle_MX_Black_F", "MX", 0, 0, {"", "", -1 } },
        { "arifle_SPAR_01_blk_F", "SPAR-16", 0, 0, {"", "", -1 } },
        { "arifle_MXM_Black_F", "MXM", 0, 0, {"", "", -1 } },
        { "arifle_MX_SW_Black_F", "MXSW", 0, 0, {"", "", -1 } },
        { "srifle_DMR_03_F", "Mk-I EMR 7.62mm (Black)", 0, 0, {"", "", -1 } },
        { "arifle_SDAR_F", "SDAR", 0, 0, {"", "", -1 } },
        { "SmokeShell", "Smoke Grenade (White)", 0, 0, {"", "", -1 } },
        { "Medikit", "Medikit", 0, 0, {"", "", -1 } },
        { "FirstAidKit", "First Aid Kit", 0, 0, {"", "", -1 } },
        { "ItemRadio", "Radio", 0, 0, {"", "", -1 } },
        { "ItemGPS", "GPS", 0, 0, {"", "", -1 } },
        { "ItemMap", "Map", 0, 0, {"", "", -1 } },
        { "ItemCompass", "Compass", 0, 0, {"", "", -1 } },
        { "ItemWatch", "Watch", 0, 0, {"", "", -1 } },
        { "Binocular", "Binocular", 0, 0, {"", "", -1 } },
        { "NVGoggles_OPFOR", "Night Vision (Black)", 0, 0, {"", "", -1 } },
        { "B_UavTerminal", "UAV Terminal", 0, 0, {"", "", -1 } },
        { "Rangefinder", "Rangefinders", 0, 0, {"", "", -1 } }
        };
        mags[] = {
        { "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullets (MK20 Only)", 0, 0, {"", "", -1 } },
        { "16Rnd_9x21_Mag", "Taser Magazines", 0, 0, {"", "", -1 } },
        { "30Rnd_556x45_Stanag", "5.56mm 30RND STANAG", 0, 0, {"", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, {"", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 0, 0, {"", "", -1 } },
        { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 0, 0, { "", "", -1 } },
        { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 0, 0, { "", "", -1 } },
        { "30Rnd_9x21_Mag_SMG_02", "9mm (Lethal Ammo)", 0, 0, {"", "", -1 } },
        { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "9mm (Tracer Green)", 0, 0, {"", "", -1 } },
        { "30Rnd_65x39_caseless_mag", "6.5mm Ammo", 0, 0, {"", "", -1 } },
        { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm Ammo (Tracer)", 0, 0, {"", "", -1 } },
        { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 0, 0, {"", "", -1 } },
        { "20Rnd_556x45_UW_mag", "SDAR 20Rnd Dual Purpose Mag", 0, 0, {"", "", -1 } }
        };
        accs[] = {
        { "acc_flashlight", "Flashlight", 0, 0, {"", "", -1 } },
        { "optic_Aco", "ACO (Red)", 0, 0, {"", "", -1 } },
        { "optic_ACO_grn", "ACO (Green)", 0, 0, {"", "", -1 } },
        { "optic_Holosight", "MK17 Holosight", 0, 0, {"", "", -1 } },
        { "optic_Hamr", "RCO", 0, 0, {"", "", -1 } },
        { "optic_MRCO", "MRCO", 0, 0, {"", "", -1 } },
        { "muzzle_snds_M", "5.56 Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_L", "Sting Suppressor", 0, 0, {"", "", -1 } },
        { "optic_Arco", "ARCO", 0, 0, {"", "", -1 } },
        { "optic_ERCO_blK_F", "", 0, 0, {"", "", -1 } },
        { "acc_pointer_IR", "IR Pointer", 0, 0, {"", "", -1 } },
        { "bipod_01_F_blk", "Bipod", 0, 0, {"", "", -1 } },
        { "optic_DMS", "DMS", 0, 0, {"", "", -1 } },
        { "muzzle_snds_H", "6.5mm Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_B", "7.62mm Suppressor", 0, 0, {"", "", -1 } },
        { "muzzle_snds_H_MG", "6.5mm LMG Suppressor", 0, 0, {"", "", -1 } }
        };
    };
/*
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
*/
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 0, 0, { "", "", -1 } },
        	{ "ItemMap", "", 0, 0, {"", "", -1 } },
            { "Binocular", "", 0, 0, { "", "", -1 } },
            { "FirstAidKit", "", 0, 0, { "", "", -1 } },
        	{ "Medikit", "", 0, 0, {"", "", -1 } },
            { "NVGoggles", "", 0, 0, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };


  //SYNDICATE
 class syn_shop {
        name = "Syndicate Weapon Shop";
        side = "east";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
          //recruit
          { "hgun_Pistol_Signal_F", "Fake Pistol", 7500, 750, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_Pistol_01_F", "PM 9mm", 11000, 1100, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_Rook40_F", "Rook-40 9 mm", 17500, 1750, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_ACPC2_F", "ACP-C2 .45", 19000, 1900, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_Pistol_heavy_01_F", "4-five .45", 23000, 2000, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_Pistol_heavy_02_F", "Zubr .45", 21000, 2150, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_Mk20C_F", "Mk20C 5.56 mm", 27000, 2700, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_Mk20_F", "Mk20 5.56 mm", 30000, 3000, { "life_synlevel", "SCALAR", 1  } },
          { "hgun_PDW2000_F", "PDW2000 9 mm", 19000, 1900, { "life_synlevel", "SCALAR", 1  } },
          { "SMG_05_F", "Protector 9mm", 27000, 2700, { "life_synlevel", "SCALAR", 1  } },
          { "SMG_02_F", "Sting 9mm", 20000, 2000, {"life_synlevel", "SCALAR", 1 } },
          { "SMG_01_F", "Vermin SMG .45 ACP", 23000, 2300, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 30000, 3000, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 19000, 1900, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 40000, 4000, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 40000, 4000, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_CTAR_blk_F", "CAR-95 5.8mm(Black)", 60000, 6000, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_CTAR_ghex_F", "CAR-95 5.8mm(Greenhex)", 60000, 6000, { "life_synlevel", "SCALAR", 1  } },
          { "arifle_CTAR_hex_F", "CAR-95 5.8mm(Hex)", 60000, 6000, { "life_synlevel", "SCALAR", 1  } },
          //private
          { "arifle_SPAR_01_blk_F", "SPAR-16 5.56mm (Black)", 45000, 4500, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_SPAR_01_khk_F", "SPAR-16 5.56mm (Khaki)", 45000, 4500, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_SPAR_01_snd_F", "SPAR-16 5.56mm (Sand)", 45000, 4500, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_SPAR_01_GL_blk_F", "SPAR-16 GL 5.56 mm (Black)", 60000, 6000, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_SPAR_01_GL_khk_F", "SPAR-16 GL 5.56 mm (Khaki)", 60000, 6000, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_SPAR_01_GL_snd_F", "SPAR-16 GL 5.56 mm (Sand)", 60000, 6000, { "life_synlevel", "SCALAR", 2  } },
          { "1Rnd_Smoke_Grenade_shell", "3GL Smoke", 2000, 200, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_ARX_blk_F", "Type 115 6.5mm (Black)", 250000, 25000, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_ARX_ghex_F", "Type 115 6.5mm (Green Hex)", 250000, 25000, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_ARX_hex_F", "Type 115 6.5mm (Hex)", 250000, 25000, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_MXC_F", "MXC 6.5 mm (Sand)", 68000, 6800, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_MXC_Black_F", "MXC 6.5 mm (Black)", 68000, 6800, { "life_synlevel", "SCALAR", 2  } },
          { "arifle_MXC_khk_F", "MXC 6.5mm (Khaki)", 68000, 6800, { "life_synlevel", "SCALAR", 2  } },
          //Specialist
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 80000, 8000, { "life_synlevel", "SCALAR", 3  } },
          { "arifle_MX_Black_F", "MX 6.5 mm (Black)", 80000, 8000, { "life_synlevel", "SCALAR", 3  } },
          { "arifle_MX_khk_F", "MX 6.5mm (Khaki)", 80000, 8000, { "life_synlevel", "SCALAR", 3  } },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 65000, 6500, { "life_synlevel", "SCALAR", 3 } },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 65000, 6500, { "life_synlevel", "SCALAR", 3  } },
          //corporal
          { "srifle_DMR_07_blk_F", "CMR-76 6.5mm (Black)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          { "srifle_DMR_07_ghex_F", "CMR-76 6.5mm (Greenhex)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          { "srifle_DMR_07_hex_F", "CMR-76 6.5mm (hex)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MX_SW_F", "MX SW 6.5 mm (Sand)", 120000, 12000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MX_SW_Black_F", "MX SW 6.5 mm (Black)", 120000, 12000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MX_SW_khk_F", "MX SW 6.5mm (Khaki)", 120000, 12000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MXM_F", "MXM 6.5 mm (Sand)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MXM_Black_F", "MXM 6.5 mm (Black)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          { "arifle_MXM_khk_F", "MXM 6.5mm (Khaki)", 150000, 15000, { "life_synlevel", "SCALAR", 4  } },
          //First Lieutenant
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 170000, 17000, { "life_synlevel", "SCALAR", 5  } },
          { "arifle_AKM_F", "AKM 7.62 mm", 490000, 49000, { "life_synlevel", "SCALAR", 5  } },
          //Second Lieutenant
          { "arifle_SPAR_03_blk_F", "SPAR-17 7.62 mm (Black)", 340000, 34000, { "life_synlevel", "SCALAR", 6  } },
          { "arifle_SPAR_03_khk_F", "SPAR-17 7.62 mm (Khaki)", 340000, 34000, { "life_synlevel", "SCALAR", 6  } },
          { "arifle_SPAR_03_snd_F", "SPAR-17 7.62 mm (Sand)", 340000, 34000, { "life_synlevel", "SCALAR", 6  } },
          //Captain
          { "arifle_AK12_F", "AK-12 7.62 mm", 490000, 49000, { "life_synlevel", "SCALAR", 7  } },
          //Major
          { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 210000, 21000, { "life_synlevel", "SCALAR", 8  } },
          //Colonel
          { "srifle_DMR_03_F", "Mk-I EMR 7.62 mm (Black)", 300000, 30000, { "life_synlevel", "SCALAR", 9  } },
          { "srifle_DMR_03_khaki_F", "Mk-I EMR 7.62 mm (Khaki)", 300000, 30000, { "life_synlevel", "SCALAR", 9  } },
          { "srifle_DMR_03_tan_F", "Mk-I EMR 7.62 mm (Sand)", 300000, 30000, { "life_synlevel", "SCALAR", 9  } },
          { "srifle_DMR_03_multicam_F", "Mk-I EMR 7.62 mm (Camo)", 300000, 30000, { "life_synlevel", "SCALAR", 9  } },
          { "srifle_DMR_03_woodland_F", "Mk-I EMR 7.62 mm (Woodland)", 300000, 30000, { "life_synlevel", "SCALAR", 9  } },
          //General
          { "srifle_DMR_05_blk_F", "Cyrus 9.3 mm (Black)", 5000000, 500000, { "life_synlevel", "SCALAR", 10  } },
          { "srifle_DMR_02_F", "MAR-10 .338 (Black)", 5000000, 500000, { "life_synlevel", "SCALAR", 10  } },
          //misc
          { "Medikit", "Medikit", 20000, 0, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 500, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } },
          { "O_NVGoggles_hex_F", "Compact NVG (Hex)", 2500, 0, { "", "", -1 } },
          { "O_NVGoggles_urb_F", "Compact NVG (Urban)", 2500, 0, { "", "", -1 } },
          { "O_NVGoggles_ghex_F", "Compact NVG (Green Hex)", 2500, 0, { "", "", -1 } },
          { "SmokeShell", "Smoke Grenade (White)", 500, 50, { "", "", -1 } }
        };
        mags[] = {
          { "10Rnd_9x21_Mag", "10rnd 9mm", 100, 10, { "", "", -1  } },
          { "16Rnd_9x21_Mag", "16rnd 9mm", 100, 10, { "", "", -1  } },
          { "16Rnd_9x21_red_Mag", "16rnd 9mm (Tracer Red)", 160, 16, { "", "", -1  } },
          { "16Rnd_9x21_green_Mag", "16rnd 9mm (Tracer Green)", 160, 16, { "", "", -1  } },
          { "16Rnd_9x21_yellow_Mag", "16rnd 9mm (Tracer Yellow)", 160, 16, { "", "", -1  } },
          { "9Rnd_45ACP_Mag", "ACP-C2 9Rnd Mag (.45 ACP)", 200, 20, { "", "", -1  } },
          { "11Rnd_45ACP_Mag", "4-Five 11Rnd Mag (.45 ACP)", 200, 20, { "", "", -1  } },
          { "6Rnd_45ACP_Cylinder", "Zubar 6Rnd Cylinder (.45 ACP)", 250, 25, { "", "", -1  } },
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1  } },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1  } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1  } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1  } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1  } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1  } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1  } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1  } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1  } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1  } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1  } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1  } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1  } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1  } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1  } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1  } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1  } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1  } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1  } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1  } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1  } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1  } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1  } },
          { "100Rnd_65x39_caseless_mag", "6.5 mm 100Rnd Mag", 5000, 500, { "life_synlevel", "SCALAR", 5 }  },
          { "100Rnd_65x39_caseless_mag_Tracer", "6.5 mm 100Rnd Tracer (Red) Mag", 5000, 500, { "life_synlevel", "SCALAR", 5 }  },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 1500, 150, { "", "", -1  } },
          { "20Rnd_762x51_Mag", "7.62 mm 20Rnd Mag", 1500, 150, { "", "", -1  } },
          { "10Rnd_338_Mag", ".338 10rnd Mag", 1500, 150, { "", "", -1  } },
          { "10Rnd_93x64_DMR_05_Mag", "9.3mm 10rnd Mag", 1500, 150, { "", "", -1  } },
          { "30Rnd_762x39_Mag_Green_F", "7.62 mm 30Rnd Reload Tracer (Green) Mag", 1500, 150, { "", "", -1  } },
          { "30Rnd_762x39_Mag_F", "7.62 mm 30Rnd Mag", 1500, 150, { "", "", -1  } },
          { "30Rnd_762x39_Mag_Tracer_Green_F", "7.62 mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1  } }
        };
        accs[] = {
          { "optic_Aco", "ACO (Red)", 12000, 1200, { "", "", -1  } },
          { "optic_ACO_grn", "ACO (Green)", 12000, 1200, { "", "", -1  } },
          { "optic_Aco_smg", "ACO SMG (Red)", 12000, 1200, { "", "", -1  } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 12000, 1200, { "", "", -1  } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 12000, 1200, { "", "", -1  } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 6000, 600, { "", "", -1  } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 6000, 600, { "", "", -1  } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 6000, 600, { "", "", -1  } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 6000, 600, { "", "", -1  } },
          { "optic_Hamr", "RCO (Black)", 20000, 2000, { "", "", -1  } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 23000, 2300, { "", "", -1  } },
          { "optic_Arco_blk_F", "ARCO (Black)", 20000, 2000, { "", "", -1  } },
          { "optic_Arco", "ARCO (Sand)", 20000, 2000, { "", "", -1  } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 20000, 2000, { "", "", -1  } },
          { "optic_MRCO", "MRCO", 29000, 2900, { "", "", -1  } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 23000, 2300, { "", "", -1  } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 23000, 2300, { "", "", -1  } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 50000, 5000, { "", "", -1  } },
          { "optic_DMS", "DMS", 38000, 3800, { "life_synlevel", "SCALAR", 4  } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 38000, 3800, { "life_synlevel", "SCALAR", 4  } },
          { "optic_AMS", "AMS (Black)", 30000, 3000, { "life_synlevel", "SCALAR", 5  } },
          { "optic_AMS_khk", "AMS (Khaki)", 30000, 3000, { "life_synlevel", "SCALAR", 5  } },
          { "optic_AMS_snd", "AMS (Sand)", 30000, 3000, { "life_synlevel", "SCALAR", 5  } },
          { "optic_KHS_blk", "Kahlia (Black)", 38000, 3800, { "life_synlevel", "SCALAR", 6  } },
          { "optic_KHS_hex", "Kahlia (Hex)", 38000, 3800, { "life_synlevel", "SCALAR", 6  } },
          { "optic_KHS_tan", "Kahlia (Tan)", 38000, 3800, { "life_synlevel", "SCALAR", 6  } },
          { "optic_KHS_old", "Kahlia (Old)", 38000, 3800, { "life_synlevel", "SCALAR", 6  } },
          { "optic_SOS", "MOS", 27000, 2700, { "life_synlevel", "SCALAR", 7  } },
          { "optic_SOS_khk_F", "MOS (Khaki)", 27000, 2700, { "life_synlevel", "SCALAR", 7  } },
          { "optic_LRPS", "LRPS", 80000, 8000, { "life_synlevel", "SCALAR", 8  } },
          { "optic_LRPS_tna_F", "LRPS (Tropic)", 80000, 8000, { "life_synlevel", "SCALAR", 8  } },
          { "optic_LRPS_ghex_F", "LRPS (Green Hex)", 80000, 8000, { "life_synlevel", "SCALAR", 8  } },
          { "acc_flashlight", "Flashlight", 12000, 1200, { "", "", -1  } },
          { "acc_pointer_IR", "IR Laser Pointer", 12000, 1200, { "", "", -1  } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 12000, 1200, { "", "", -1  } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 12000, 1200, { "", "", -1  } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 12000, 1200, { "", "", -1  } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 12000, 1200, { "", "", -1  } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 12000, 1200, { "", "", -1  } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 12000, 1200, { "", "", -1  } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 12000, 1200, { "", "", -1  } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 12000, 1200, { "", "", -1  } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 12000, 1200, { "", "", -1  } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 20000, 2000, { "", "", -1  } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 8000, 800, { "", "", -1  } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 15000, 1500, { "", "", -1  } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 15000, 1500, { "", "", -1  } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 23000, 2300, { "", "", -1  } },
          { "muzzle_snds_58_blk_F", "Sound Suppressor (5.8 mm, Black)", 43000, 4300, { "", "", -1  } },
          { "muzzle_snds_58_wdm_F", "Sound Suppressor (5.8 mm, Green Hex)", 43000, 4300, { "", "", -1  } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 35000, 3500, { "", "", -1  } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 35000, 3500, { "", "", -1  } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 50000, 5000, { "", "", -1  } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 50000, 5000, { "", "", -1  } },
          { "muzzle_snds_H_khk_F", "Sound Suppressor (6.5 mm, Khaki)", 35000, 3500, { "", "", -1  } },
          { "muzzle_snds_H_snd_F", "Sound Suppressor (6.5 mm, Sand)", 35000, 3500, { "", "", -1  } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 66000, 6500, { "", "", -1  } },
          { "muzzle_snds_65_TI_blk_F", "S-Suppressor (6.5mm) (Black)", 86000, 0, { "", "", -1  } },
          { "muzzle_snds_65_TI_hex_F", "S-Suppressor (6.5mm) (Hex)", 86000, 0, { "", "", -1  } },
          { "muzzle_snds_65_TI_ghex_F", "S-Suppressor (6.5mm) (GreenHex)", 86000, 0, { "", "", -1  } },
          { "muzzle_snds_B", "Sound Suppressor (7.62 mm)", 65000, 6500, { "", "", -1  } },
          { "muzzle_snds_B_khk_F", "Sound Suppressor (7.62 mm, Khaki)", 65000, 6500, { "", "", -1  } },
          { "muzzle_snds_B_snd_F", "Sound Suppressor (7.62 mm, Sand)", 65000, 6500, { "", "", -1  } },
          { "muzzle_snds_93mmg", "9.3mm Suppressor", 100000, 10000, { "", "", -1  } },
          { "muzzle_snds_338_black", ".338 Suppressor", 100000, 10000, { "", "", -1  } }
        };
    };


};
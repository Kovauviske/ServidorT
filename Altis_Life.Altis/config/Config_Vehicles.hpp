class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class aaa_car {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_repair_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };
	
	class civ_taxi {
        side = "civ";
        vehicles[] = {
            { "SUV_01_base_red_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_red_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "B_T_VTOL_01_vehicle_blue_F", { "", "", -1 } },
            { "B_T_VTOL_01_infantry_olive_F", { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", { "", "", -1 } },
            { "I_Plane_Fighter_03_AA_F", { "", "", -1 } },
            { "O_Plane_CAS_02_F", { "", "", -1 } },
            { "O_Heli_Transport_04_covered_black_F", { "", "", -1 } },
            { "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } }
        };
    };

    class advreb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "life_medicLevel", "SCALAR", 2 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "life_medicLevel", "SCALAR", 2 } },
            { "C_SUV_01_F", { "life_medicLevel", "SCALAR", 3 } },
            { "I_MRAP_03_F", { "life_medicLevel", "SCALAR", 6 } },
            { "C_Hatchback_01_sport_F", { "life_medicLevel", "SCALAR", 3 } }
        };
    };

    class fosv {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } }
        };
    };

    class aruv {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class med_air {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class med_air_hs_aru {
        side = "med";
        vehicles[] = {
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } }
        };
    };

    class med_air_aru {
        side = "med";
        vehicles[] = {
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } }
        };
    };

    class med_air_hs_sr {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class med_air_sr {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", "call life_coplevel >= 1" },
            { "C_SUV_01_F", "call life_coplevel >= 2" },
            { "C_Van_01_box_F", "call life_coplevel >= 3" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" },
            { "B_T_LSV_01_unarmed_black_F", "call life_coplevel >= 6" },
			{ "B_MRAP_01_F", "call life_coplevel >= 7" },
        };
    };

    class tfu {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_black_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "", "", -1 } }
        };
    };

    class uraV {
        side = "cop";
        license = "ura";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "B_UAV_01_F", { "", "", -1 } },
            { "B_LSV_01_unarmed_black_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "O_Heli_Transport_04_bench_black_F", { "life_coplevel", "SCALAR", 3 } },
            { "O_Heli_Transport_04_covered_black_F", { "life_coplevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_T_VTOL_01_vehicle_F", { "life_coplevel", "SCALAR", 9 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class syn_car {
        side = "east";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", {  "", "", -1 } },
            { "C_Hatchback_01_sport_F", {  "", "", -1 } },
            { "B_T_LSV_01_unarmed_black_F", {  "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "I_MRAP_03_F", {  "life_synlevel", "SCALAR", 5 } }
        };
    };

    class syn_air {
        side = "east";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", {  "", "", -1 } },
            { "B_Heli_Light_01_F", {  "", "", -1 } },
            { "O_Heli_Transport_04_bench_black_F", {  "", "", -1 } },
            { "O_Heli_Transport_04_covered_black_F", {  "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", {  "", "", -1 } },
            { "B_T_VTOL_01_vehicle_F", {  "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", {  "", "", -1 } }
        };
    };
};






class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class I_MRAP_03_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {
            { "Strider", "med", {
                "textures\ams\vehicles\amsstrider.jpg"
            },"aru" },
            { "Strider", "syn", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 600;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class C_Offroad_01_repair_F {
        vItemSpace = 65;
        licenses[] = { {"aaa"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
            { "Offroad Repair", "civ", {
                "textures\civ\vehicles\repairoffroad.paa"
            },"" }
        };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Boat_Transport_02_F {
        vItemSpace = 120;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 10;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 1000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 750;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 700;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };

    class B_T_LSV_01_unarmed_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 120;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {
            { "Offroad", "syn", {
                "textures\tu\vehicles\synoffroad.paa"
            },"" },
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            },"" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            },"" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            },"" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            },"" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            },"" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            },"" },
            { "NCA Offroad", "cop", {
                "textures\police\vehicles\offroadncu.paa"
            },"ura" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            },"" },
            { "Offroad", "med", {
                "textures\ams\vehicles\offroadams.paa"
            },"" },
            { "Police", "cop", {
                "textures\offroad.paa"
            },"" },
			{ "monster", "civ", {
                "textures\civ\vehicles\monsteroffroadbycodon.paa"
			},"" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "textures\hatchback_sport.paa"
            },"tfu" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            },"" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            },"" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            },"" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            },"" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            },"" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            },""},
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            },"" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            },"" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            },"" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            },"" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" },
            { "Black", "syn", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            },"" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" },
            { "Black", "syn", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 625;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {};
    };

    class B_T_LSV_01_unarmed_black_F {
        vItemSpace = 180;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class B_UAV_01_F {
        vItemSpace = 0;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {};
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
          { "Black", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
          },"" },
          { "Blue", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
          },"" },
          { "Green", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
          },"" },
          { "Orange", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
          },"" },
          { "Red", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
          },"" },
          { "White", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
          },"" },
          { "Brown", "civ", {
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
          "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
          },"" }
        };
    };

    class C_Hatchback_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            },"" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            },"" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            },"" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            },"" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            },"" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            },"" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            },"" },
            { "Student", "med", {
                "textures\ams\vehicles\sportsams.paa"
            },"" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            },"" },
			{ "wrc", "civ", {
                "hatchback_wrc.paa"
            },"" }
				
        };
    };

   class C_SUV_01_F {
        vItemSpace = 85;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police White", "cop", {
                "textures\suv_white.paa"
            } },
            { "Police Black", "cop", {
                "textures\suv_black.paa"
            } },
            { "Medic", "med", {
                "textures\medic\vehicles\medic_suv.paa"
            } },
            { "HATO", "med", {
                "textures\hato\vehicles\HATO_SUV.jpg"
            },"" },
			{ "halloween", "civ", {
                "textures\civ\vehicles\suv_halloween.paa"
            },"" },
	        { "jurassic park", "civ", {
                "textures\civ\vehicles\suv_jurassicpark.paa"
			},"" },
			{ "m3", "civ", {
                "textures\civ\vehicles\m3suv.paa"
			},"" }
			
		};    
	};

    class C_Van_01_transport_F {
        vItemSpace = 250;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            },"" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            },"" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Ambulance", "med", {
                "textures\ams\vehicles\boxfront.paa",
                "textures\ams\vehicles\boxback.paa"
            },"" },
            { "CCTV Van", "cop", {
                "textures\police\vehicles\boxfront.paa",
                "textures\police\vehicles\boxback.paa"
            },"" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            },"" },
            { "White", "syn", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            },"" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            },"" }
			
		};
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {
           { "Police Hunter", "cop", {
                "textures\police\vehicles\tfuhunterfront.paa",
                "textures\police\vehicles\tfuhunterback.paa"
            },"ura" },
			{ "Police Hunter", "cop", {
                "textures\police\vehicles\tfuhunterfront.paa",
                "textures\police\vehicles\tfuhunterback.paa"
			},"cop" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            },"" }
        };
    };

    class I_Heli_light_03_unarmed_F {
       vItemSpace = 225;
       licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
       price = 3500000;
       textures[] = {
           { "Black", "syn", {
               "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
           },"" },
           { "Digi", "civ", {
               "\A3\air_f_epb\Heli_Light_03\data\heli_light_03_base_co.paa"
           },"" },
           { "Black", "civ", {
               "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
           },"" },
           { "Police", "cop", {
               "textures\police\vehicles\hellcatpolice.paa"
           },"" },
           { "ARU Hellcat", "med", {
               "textures\ams\vehicles\amshellcat.jpg"
           },"" }
       };
   };

    class O_Heli_Transport_04_bench_black_F {
       vItemSpace = 200;
       licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
       price = 25000000;
       textures[] = {};
   };

    class B_T_VTOL_01_vehicle_blue_F {
       vItemSpace = 800;
       licenses[] = { {"pilot"}, {""}, {""}, {""} };
       price = 50000000;
       textures[] = {};
   };

    class B_LSV_01_unarmed_black_F {
       vItemSpace = 200;
       licenses[] = { {""}, {""}, {""}, {""} };
       price = 1000000;
       textures[] = {};
   };

    class B_T_VTOL_01_infantry_olive_F {
       vItemSpace = 800;
       licenses[] = { {"pilot"}, {""}, {""}, {""} };
       price = 50000000;
       textures[] = {};
   };

    class B_T_VTOL_01_vehicle_F {
       vItemSpace = 800;
       licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
       price = 50000000;
       textures[] = {
            { "VTOL", "syn", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" },
            { "VTOL", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            },"" }
       };
   };

    class O_Heli_Transport_04_covered_black_F {
       vItemSpace = 400;
       licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
       price = 25000000;
       textures[] = {};
   };

    class C_Heli_Light_01_civil_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Digi Green", "syn", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            },"" },
            { "M900", "cop", {
                "textures\police\vehicles\m900police.paa"
            },"" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            },"" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            },"" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            },"" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            },"" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            },"" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            },"" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            },"" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            },"" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            },"" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            },"" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            },"" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            },"" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            },"" },
            { "M900", "med", {
                "textures\ams\vehicles\m900ams.paa"
            },"" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
            { "Digi Green", "syn", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            },"" },
            { "MH9", "cop", {
                "textures\police\vehicles\m900police.paa"
            },"" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            },"" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            },"" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            },"" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            },"" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            },"" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            },"" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            },"" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            },"" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            },"" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            },"" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            },"" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            },"" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            },"" },
            { "Mh9", "med", {
                "textures\ams\vehicles\m900ams.paa"
            },"" }
        };
    };


    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 1250000;
        textures[] = {
            { "Digi Green", "syn", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            },"" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            },"" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            },"" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            },"" },
            { "TFU Orca", "cop", {
                "textures\police\vehicles\tfuorca.paa"
            },"tfu" },
            { "Orca", "med", {
                "textures\ams\vehicles\orcaams.paa"
            },"" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 0;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 300;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 25;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class I_Plane_Fighter_03_AA_F {
        vItemSpace = 25;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 30000000;
        textures[] = {};
    };

    class O_Plane_CAS_02_F {
        vItemSpace = 25;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 30000000;
        textures[] = {};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 700;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            },"" },
            { "White", "syn", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            },"" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            },"" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            },"" },
            { "White", "syn", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            },"" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
	
	class SUV_01_base_red_F { // NEED TO ADD SKIN
      DisplayName = "Tuber SUV";
      CustomVar = "taxi";
      vItemSpace = 0;
      vFuelSpace = 60000;
      licenses[] = { {"taxi"}, {""}, {""}, {""} };
      price = 25000;
      textures[] = {};
    };

    class C_Hatchback_01_sport_red_F { // NEED TO ADD SKIN
      DisplayName = "Tuber Hatchback RS";
      CustomVar = "taxi";
      vItemSpace = 0;
      vFuelSpace = 80000;
      licenses[] = { {"taxi"}, {""}, {""}, {""} };
      price = 50000;
      textures[] = {};
    };
};

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CUP_Weapons_LoadOrder", "aceax_gearinfo"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"

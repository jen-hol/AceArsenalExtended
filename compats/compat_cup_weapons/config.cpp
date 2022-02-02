#include "script_component.hpp"

#define AUTHOR ECSTRING(COMPONENT,author)
#define DEFAULT_AUTHOR author = AUTHOR

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CUP_Weapons_LoadOrder", "aceax_gearinfo"};
        DEFAULT_AUTHOR;
        VERSION_CONFIG;
    };
};

#include "models\XtdGearModels.hpp"
#include "infos\XtdGearInfos.hpp"

#undef DEFAULT_AUTHOR
#undef AUTHOR

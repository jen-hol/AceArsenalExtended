class XtdGearModels {
	#include "_options.hpp"

	#define M(NAME) CUP_##NAME
	#define LBL(OPTION) ECSTRING(model_dn,M(OPTION))
	#define LABEL(OPTION) label = LBL(OPTION)
	#define HDR(OPTION) LABEL(OPTION);\
		DEFAULT_AUTHOR

	class CfgWeapons {
		#include "acr.hpp"
		#include "hk417.hpp"
		#include "hk416.hpp"

		#include "ak100.hpp"
	};

	#undef HDR
	#undef LABEL
	#undef LBL
	#undef M
};

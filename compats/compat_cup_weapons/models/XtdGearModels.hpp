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

		#include "m4a1.hpp"
		#include "m4a1sopmod.hpp"
		#include "m4sbr.hpp"

		#include "ak100.hpp"
		#include "ak10.hpp"
		#include "asval.hpp"

		#include "m27.hpp"

		#include "czs.hpp"
	};

	#undef HDR
	#undef LABEL
	#undef LBL
	#undef M
};
class CUP_HK416 {
	label = "HK416";
	author = "$STR_ACEAX_CUP_author";
	options[] = {"camo", "length", "ugl"};

	class camo {
		values[] = {"BLK", "CUP_DESERT", "CUP_WDL"};

		class TAN;
		class CUP_DESERT: TAN {
			label = "$STR_ACEAX_CUP_DESERT_dn";
			image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
		};

		class CUP_WDL {
			label = "$STR_ACEAX_CUP_WDL_dn";
			description = "$STR_ACEAX_CUP_WDL_dsc";
			image="#(rgb,8,8,3)color(0.02,0.39,0.30,1)";
		};
	};

	class length {
		label = "$STR_ACEAX_CUP_length_dn";
		changeingame = 0;

		values[] = {"standard", "cqc"};

		class cqc {
			label = "$STR_ACEAX_CUP_cqc_dn";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};

		class standard {
			label = "$STR_ACEAX_CUP_standard_dn";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};
	};

	class ugl {
		label = "$STR_ACEAX_CUP_ugl_dn";
		changeingame = 0;

		values[] = {"none", "m203", "m320"};

		class none {
			label = "None";
		};

		class m203 {
			label = "M203";
		};

		class m320 {
			label = "M320";
		};
	};
};

class CUP_ACR {
	label = "$STR_ACEAX_CUP_ACR_label";
	author = "$STR_ACEAX_CUP_author";
	options[] = {"camo", "caliber", "length", "ugl"};

	class camo {
		values[] = {"BLK", "CUP_SNW", "TAN", "CUP_WDL"};

		class WHT;
		class CUP_SNW: WHT {
			label = "$STR_ACEAX_CUP_SNW_dn";
			image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)";
		};

		class CUP_WDL {
			label = "$STR_ACEAX_CUP_WDL_dn";
			description = "$STR_ACEAX_CUP_WDL_dsc";
			image="#(rgb,8,8,3)color(0.02,0.39,0.30,1)";
		};
	};

	class caliber {
		label = "$STR_ACEAX_CUP_caliber_dn";
		changeingame = 0;

		values[] = {"cal_556", "cal_68"};

		class cal_556 {
			label = "$STR_ACEAX_CUP_cal_556_dn";
			description = "$STR_ACEAX_CUP_cal_556_dsc";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};

		class cal_68 {
			label = "$STR_ACEAX_CUP_cal_68_dn";
			description = "$STR_ACEAX_CUP_cal_68_dsc";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};
	};

	class length {
		label = "$STR_ACEAX_CUP_length_dn";
		changeingame = 0;

		values[] = {"compact", "standard", "dmr"};

		class compact {
			label = "$STR_ACEAX_CUP_compact_dn";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};

		class standard {
			label = "$STR_ACEAX_CUP_standard_dn";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};

		class dmr {
			label = "$STR_ACEAX_CUP_dmr_dn";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};
	};
};

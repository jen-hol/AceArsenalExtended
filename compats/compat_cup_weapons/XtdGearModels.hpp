class XtdGearModels {
	class CfgWeapons {
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

		class CUP_HK417 {
			label = "HK417";
			author = "$STR_ACEAX_CUP_author";
			options[] = {"camo", "length", "ugl"};

			class camo {
				values[] = {"BLK", "CUP_DESERT", "CUP_WDL"};

				class TAN;
				class CUP_DESERT: TAN {
					label = "Desert";
				};

				class CUP_WDL {
					label = "Woodland";
					image="#(rgb,8,8,3)color(0.02,0.39,0.30,1)";
				};
			};

			class length {
				label = "Barrel Length";
				changeingame = 0;

				values[] = {"dmr", "cqc"};

				class dmr {
					label = "DMR";
					image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
				};

				class cqc {
					label = "CQC";
					image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
				};
			};

			class ugl {
				label = "Underbarrel";
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
	};
};

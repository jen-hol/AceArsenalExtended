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

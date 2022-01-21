class CUP_ACR {
	label = "$STR_ACEAX_CUP_ACR_label";
	author = "$STR_ACEAX_CUP_author";
	options[] = {"camo", "caliber", "length", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "SNW", "TAN", "WDL"};
	};

	class caliber: CUPCaliber {
		values[] = {"Caliber556", "Caliber68"};
	};

	class length: CUPLength {
		values[] = {"Standard", "Compact", "DMR"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "EGLM"};
	};
};

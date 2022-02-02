class CUP_ACR {
	HDR(ACR);
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

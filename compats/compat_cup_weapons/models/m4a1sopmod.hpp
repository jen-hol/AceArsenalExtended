class CUP_M4A1_SOPMOD {
	HDR(M4A1_SOPMOD);

	options[] = {"camo", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "CTRG", "CTRGT", "TAN", "UHEX", "WNT", "WDL"};
	};

	class ugl: CUPUGL {
		values[] = {"FG", "AFG"};
	};
};

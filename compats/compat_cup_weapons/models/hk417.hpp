class CUP_HK416 {
	label = "HK416";
	author = "$STR_ACEAX_CUP_author";
	options[] = {"camo", "length", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "DST", "WDL"};
	};

	class length: CUPLength {
		values[] = {"Standard", "CQC"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "M203", "M320"};
	};
};

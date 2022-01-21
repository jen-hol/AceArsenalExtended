class CUP_HK417 {
	label = "HK417";
	author = "$STR_ACEAX_CUP_author";
	options[] = {"camo", "length", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "DST", "WDL"};
	};

	class length: CUPLength {
		values[] = {"DMR", "CQC"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "M203", "M320"};
	};
};

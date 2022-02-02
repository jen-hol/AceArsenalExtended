class CUP_HK416 {
	HDR(HK416);
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

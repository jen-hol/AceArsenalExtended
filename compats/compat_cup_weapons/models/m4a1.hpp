class CUP_M4A1 {
	HDR(M4A1);
	options[] = {"camo", "length", "handguard", "ugl"};

	class camo: CUPCamo {
		values[] = {"BLK", "DST", "WDL", "WNT"};
	};

	class length: CUPLength {
		values[] = {"M4Long", "M4Short"};
	};

	class handguard: CUPHandguard {
		values[] = {"Factory", "MOE", "Quad", "RC"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "FG", "M203"};
	};
};

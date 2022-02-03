class CUP_M60E4 {
	HDR(M60E4);
	options[] = {"camo", "rail"};

	class camo: CUPCamo {
		values[] = {"BLK", "WDL", "DST", "JUNG"};
	};

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};
};

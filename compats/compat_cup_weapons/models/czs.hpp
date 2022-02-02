class CUP_CZ550 {
	HDR(CZ550);
	options[] = {"rail"};

	class rail: CUPRail {
		values[] = {"Scope", "RIS"};
	};
};

class CUP_CZ584 {
	HDR(CZ584);
	options[] = {"rail"};

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};
};

class CUP_CZ805 {
	HDR(CZ805);
	options[] = {"version", "camo"};

	class version: CUPModel {
		values[] = {"A1", "A1G1", "A2"};
	};

	class camo: CUPCamo {
		values[] = {"GRY", "BLK", "CYT"};
	};
};

class CUP_CZ807 {
	HDR(CZ807);
	options[] = {"version", "camo"};

	class version: CUPModel {
		values[] = {"CZ807" "BREN2"};
	};

	class camo: CUPCamo {
		values[] = {"GRY", "BLK", "CYT"};
	};
};

// class CUP_CZBREN2 {
// 	HDR(CZBREN2);
// 	options[] = {"length", "ugl"};

// 	class length: CUPLength {
// 		values[] = {""}
// 	};
// }
class CUP_AK10 {
	HDR(AK10);

	options[] = {"akmodel", "camo", "ugl"};

	class akmodel: CUPModel {
		label = "AK Model";
		values[] = {"AK12", "AK15", "AK19"};
	};

	class camo: CUPCamo {
		values[] = {"BLK", "ARID", "LUSH", "MTAN", "STIG", "TIG", "TWOC", "WNT", "WDL"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "AFG", "FG", "GP34"};
	};
};

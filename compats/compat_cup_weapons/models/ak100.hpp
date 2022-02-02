class CUP_AK100 {
	HDR(AK100);
	options[] = {"akmodel", "rail", "ugl"};

	class akmodel: CUPModel {
		label = "AK Model";
		values[] = {"AK101", "AK102", "AK103", "AK104", "AK105", "AK107", "AK108", "AK109"};
	};

	class rail: CUPRail {
		values[] = {"None", "RIS", "Zentico"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "GP25"};
	};
};

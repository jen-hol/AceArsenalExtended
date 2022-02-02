class CUP_ASVal {
	HDR(ASVal);
	options[] = {"rail", "ugl"};

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "FlashGrip", "FG"};
	};
};

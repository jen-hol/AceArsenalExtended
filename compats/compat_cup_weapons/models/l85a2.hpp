class CUP_L85A2 {
	HDR(L85A2);
	options[] = {"rail", "ugl"};

	class rail: CUPRail {
		values[] = {"None", "RIS"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "FG", "L123A2"};
	};
};

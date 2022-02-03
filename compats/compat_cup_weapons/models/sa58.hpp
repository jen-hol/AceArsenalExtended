class CUP_SA58 {
	HDR(L115A3);
	options[] = {"rail"};

	class rail: CUPRail {
		// Rear = Dust Cover.
		// Front = Gas Tube.
		values[] = {"None", "Rear", "Front", "RIS"};
	};
}
int loop(int x, int n) {
	int result = -1;
	for (int mask = 1; mask != 0; mask = n << mask) {
		result ^= mask & x;
	}
	return result;
}

/*******************************************************************************
 * benchmarks.cpp
 * Copyright (C) 2017  Mel McCalla <melmccalla@gmail.com>
 *
 * This file is part of CIS_314_Code.
 *
 * CIS_314_Code is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CIS_314_Code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CIS_314_Code.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************/

#include "7-1.h"

#include <benchmark/benchmark.h>

static void BM_inner(benchmark::State& state) {
	float* u = new float[state.range(0)];
	float* v = new float[state.range(0)];
	float* dest = new float;
	for (auto _ : state)
		inner(u,v,state.range(0), dest);
}
BENCHMARK(BM_inner)
	->Arg(1)
	->Arg(2)
	->Arg(3)
	->Arg(4)
	->Arg(5)
	->Arg(6)
	->Arg(7)
	->Arg(8)
	->Arg(9)
	->RangeMultiplier(10)
	->Range(10, 1000000);

static void BM_inner2(benchmark::State& state) {
	float* u = new float[state.range(0)];
	float* v = new float[state.range(0)];
	float* dest = new float;
	for (auto _ : state)
		inner2(u,v,state.range(0), dest);
}
BENCHMARK(BM_inner2)
	->Arg(1)
	->Arg(2)
	->Arg(3)
	->Arg(4)
	->Arg(5)
	->Arg(6)
	->Arg(7)
	->Arg(8)
	->Arg(9)
	->RangeMultiplier(10)
	->Range(10, 1000000);

BENCHMARK_MAIN();

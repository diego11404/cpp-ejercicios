#include "Monitor.hpp"
#include <vector>
//#include <cstdlib>
#include <iostream>
#ifndef __ARR_MONITOR_HPP__
#define __ARR_MONITOR_HPP__
using namespace std;
class CarrMonitor{
	vector<CMonitor> lista;
	public:
		CarrMonitor();
		~CarrMonitor();
		void insertar();
		void eliminarTodo();
		void buscarxPos();
};
#endif

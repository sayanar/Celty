/*! \file Statistician.hh
	Statistics collection machinery
*/
#pragma once
#include <mutex>
#include <memory>
#include <string>
namespace Celty {
class Statistician {
	private:
	Statistician(void);

	static std::shared_ptr<Statistician> instance;
	static std::mutex _mtlock;

	public:
	~Statistician(void);

	static std::shared_ptr<Statistician> &GetInstance(void);

	void LoadClientList(std::string list);
};
}

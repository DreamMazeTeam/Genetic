#include <map>
#include <string>
#include <vector>
#include <iostream>
#include "nlohmann/json.hpp"

// Сокращения для структуры расписания

using TSubjects = std::vector<std::string>;
using TGroups = std::vector<std::pair<std::string, TSubjects>>;
using Timetable = std::vector<std::pair<std::string, TGroups>>;  
using CTimetable = const Timetable;

void print_timetable(CTimetable* t)
{
	for (Timetable::const_iterator day = t->cbegin(); day != t->cend(); day++) {
		std::cout << std::endl << day->first << std::endl;

		for (TGroups::const_iterator group = day->second.cbegin(); group != day->second.cend(); group++) {
			std::cout << std::right << group->first << std::endl << std::endl;

			for (TSubjects::const_iterator subject = group->second.cbegin(); subject != group->second.cend(); subject++) {
				std::cout << std::right << *subject << std::endl;
			}

			std::cout << std::endl;
		}
	}
}

int main(int argc, char* argv[])
{
	Timetable timetable = {
		{
			"Monday", 
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
		{
			"Tuesday",
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
		{
			"Therday",
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
		{
			"Wensday",
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
		{
			"Friday", 
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
		{
			"Saturday",
			{
				{
					"TI-31",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				},
				{
					"TI-41",
					{
						"math",
						"physics",
						"russian",
						"history"
					}
				}
			}
		},
	};
	


	return 0;
}
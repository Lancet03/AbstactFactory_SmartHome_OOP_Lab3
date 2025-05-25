#include <iostream>
#include <memory>
#include "SmartHome.h"
#include "PhilipsFactory.h"
#include "SamsungFactory.h"
#include "ISmartHomeFactory.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;

	std::unique_ptr<ISmartHomeFactory> factory;

	std::cout << "Выберите производителя умного дома:\n1. Philips\n2. Samsung\nПроизводитель: ";
	std::cin >> a;
	std::cout << std::endl;
	switch (a) {
	case 1:
	{
		factory = std::make_unique<PhilipsFactory>();
		break;
	}

	case 2:
	{

		factory = std::make_unique<SamsungFactory>();
		break;

	}
	default: {
		factory = std::make_unique<PhilipsFactory>();
			break;
	}
	}

	SmartHome smartHome(std::move(factory));
	smartHome.run();
}


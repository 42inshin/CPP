#include <iostream>
#include <string>

class PhoneBook
{
	public:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
};

// 연락처는 클래스의 인스턴스로 정의해야한다.
// 연락처 배열을 포함해야한다.
int	main(void)
{
	std::string buf = "";
	PhoneBook *list = new PhoneBook[8];

	while (buf != "EXIT")
	{

		std::cin >> buf;
		if (buf == "ADD")
		{
			// 한 번에 한 필드씩,
			// 모든 필드가 채워질 때까지 새 연락처의 정보를 적을 수 있도록 안내해야한다.
			std::cout << "first name" << std::endl;
			std::cin >> list;

		}
		if (buf == "SEARCH") {}
	}
}

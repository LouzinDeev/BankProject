#include <iostream>
#ifdef MAX_USERS
	#undef MAX_USERS
#endif // MAX_USERS

#define MAX_USERS 10

class Acount {
private :
	std::string Name = "Desconhecido";
	float Money = 0.0;
	float Limit = 0.0;
	int Id = 0;
	bool Registered = false;
public:
		void RegisterUser(const std::string name, int id);
		void SetMoney(const float quant);
		void RemoveMoney(const float quant);
		void SetLimit(const float quant);
		void ShowInfo();
		void GetUserInfo(int& id, std::string& name, float& money, float& limit);
};


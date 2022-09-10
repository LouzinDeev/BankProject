#include <iostream>
#ifdef MAX_USERS
	#undef MAX_USERS
#endif // MAX_USERS

#define MAX_USERS 10

class Acount {
protected :
	std::string Name;
	float Money;
	float Limit;
	int Id;
	bool Registered;
public:
	Acount() {
		Name = "Desconhecido";
		Money = 0.0;
		Limit = 0.0;
		Id = 0;
		Registered = false;
	}
		void RegisterUser(const std::string name, int id);
		void SetMoney(const float quant);
		void RemoveMoney(const float quant);
		void SetLimit(const float quant);
		void ShowInfo();
		void GetUserInfo(int& id, std::string& name, float& money, float& limit);
};


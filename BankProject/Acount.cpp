#include "Acount.h"

void Acount::SetMoney(const float quant) {
	if (!Registered) {
		std::cout << "Este usuario nao existe, por favor registre o usuario ou informe um usuario valido!!\n\n";
	}
	else {
		float aux = Money;
		Money += quant;
		std::cout << "Voce deu dinheiro ao usuario: " << Name << " (ID:" << Id << ")";
		std::cout << " \n \t Saldo antigo: $ " << aux << "\n \t Novo Saldo: $ " << Money << "\n \t + $ " << quant << "\n\n";
	}
}

void Acount::RemoveMoney(const float quant) {
	if (!Registered) {
		std::cout << "Este usuario nao existe, por favor registre o usuario ou informe um usuario valido!!\n\n";
	}
	else {
		float aux = Money;
		Money -= quant;
		std::cout << "Voce removeu dinheiro do usuario: " << Name << " (ID:" << Id << ")";
		std::cout << " \n \t Saldo antigo: $ " << aux << "\n \t Novo Saldo: $ " << Money << "\n \t - $ " << quant << "\n\n";
	}
}

void Acount::SetLimit(const float quant) {
	if (!Registered) {
		std::cout << "Este usuario nao existe, por favor registre o usuario ou informe um usuario valido!!\n\n";
	}
	else {
		float aux = Limit;
		Limit = quant;
		std::cout << "Voce alterou o limite do usuario: " << Name << " (ID:" << Id << ")";
		std::cout << " \n \t Limite antigo: " << aux << "\n \t Novo limite: " << Limit << "\n\n";
	}
}

void Acount::RegisterUser(const std::string name, int id) {
	if (Registered) {
		std::cout << "Este usuario ja esta definido, Informaçoes: \n";
		Acount::ShowInfo();
	}
	Name = name;
	Id = id;
	Registered = true;
}

void Acount::ShowInfo() {
	if (!Registered) {
		std::cout << "Usuario Indefinido!" << "\n\n";
	}
	else {
		std::cout << "O usuario: " << Name << " ID: " << Id << " Tem $ " << Money << " Reais e um limite de $ " << Limit << " Para gastar \n\n";
	}
}

void Acount::GetUserInfo(int& id, std::string& name, float& money, float& limit) {
	id = Id;
	name = Name;
	money = Money;
	limit = Limit;
}
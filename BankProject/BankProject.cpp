// BankProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Acount.h"
Acount Users[MAX_USERS];


void ShowAllUsers() {
	for (int i = 0; i < MAX_USERS; i++) {
		Users[i].ShowInfo();
	}
}

int main() {
	int opt = 0;
	do {

		std::cout << "Ola seja bem vindo ao sistema do banco!!\n";
		std::cout << "\t 1 - Mostrar Usuario\n";
		std::cout << "\t 2 - Cadastrar Usuario\n";
		std::cout << "\t 3 - Editar Limite do Usuario\n";
		std::cout << "\t 4 - Dar Dineiro ao Usuario\n";
		std::cout << "\t 5 - Remover Dineiro do Usuario\n";
		std::cout << "\t 6 - Mostrar todos usuarios\n";
		std::cout << "Escolha: ";
		std::cin >> opt;
		switch (opt) {
		case 1: {
			int id = 0;
			std::cout << "Qual usuario deseja mostrar informacoes: ";
			std::cin >> id;
			if (id > MAX_USERS) {
				std::cout << "Usuarios somente de 0 a 50\n\n";
			}
			else {
				Users[id].ShowInfo();
			}
			break;
		}
		case 2: {
			int id = 0;
			std::cout << "Digite um Id para o usuario: ";
			std::cin >> id;
			if (id > MAX_USERS) {
				std::cout << "Usuarios somente de 0 a 50\n\n";
			}
			else {
				std::string name;
				std::cout << "Digite um nome para o usuario: ";
				std::cin >> name;
				Users[id].RegisterUser(name, id);
			}
			break;
		}
		case 3: {
			int id = 0;
			std::cout << "Qual usuario deseja alterar o limite? ";
			std::cin >> id;
			if (id > MAX_USERS) {
				std::cout << "Usuarios somente de 0 a 50\n\n";
			}
			else {
				float limit = 0;
				std::cout << "Qual O novo limite do usuario? ";
				std::cin >> limit;
				Users[id].SetLimit(limit);
			}
			break;
		}
		case 4: {
			int id = 0;
			std::cout << "Qual usuario deseja dar dinheiro? ";
			std::cin >> id;
			if (id > MAX_USERS) {
				std::cout << "Usuarios somente de 0 a 50\n\n";
			}
			else {
				float quant = 0;
				std::cout << "Qual a quantidade? ";
				std::cin >> quant;
				Users[id].SetMoney(quant);
			}
			break;
		}
		case 5: {
			int id = 0;
			std::cout << "Qual usuario deseja remover dinheiro? ";
			std::cin >> id;
			if (id > MAX_USERS) {
				std::cout << "Usuarios somente de 0 a 50\n\n";
			}
			else {
				float quant = 0;
				std::cout << "Qual a quantidade? ";
				std::cin >> quant;
				Users[id].RemoveMoney(quant);
			}
			break;
		}
		case 6: {
			ShowAllUsers();
			break;
		}
	
		}
	} while (opt != 0);

	
	return 0;
}


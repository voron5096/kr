// Реализация методов
#include "cl_base.h"

cl_base::cl_base(cl_base* head_object, string s_name) { // конструктор головного элемента
    // Присвоим поля нашего класса, значения переданные в качестве аргумента в конструктор
    this -> s_name = s_name; // приравнием поле класса к параметру конструктора
    this -> p_head_object = head_object; // так как значения не одинаковые, this можно не указывать
  
  /* ========================================
  У головного элемента есть вектор подчинённых значений, при добавлении нового элемента нужно добавить в вектор подчинённых объектов головного объекта указатель на текущий объект, который мы будем добавлять. 
  Однако перед этим нужно проверить что головной объект существует (например у корня дерева его нет), и не пустой ли указатель на него
  ======================================== */ 
    if (p_head_object != nullptr)
		p_head_object -> sub_objects.push_back(this); // добавление в вектор указателя на объект в конструкторе
}

/*
Деструктор будет рекурсивным. Он проходится по всем по вектору подчинённых элементов и для всех них вызывает деструкторы 
*/

cl_base::~cl_base() {
	for (int i = 0; i < this -> sub_objects.size(); i++) { // проходимся по вектору подчинённых элементов (используем int оператор чтобы показать что вектор это динамический массив)
		delete sub_objects[i]; // вызываем деструктор объекта имея только указатель на объект
	}
}

bool cl_base::set_name(string s_new_name) { // метод для установки нового имени
    if (p_head_object != nullptr) { // проверим существует ли головной (вышестоящий) элемент, иначе просто присвоим корню дерева новое имя
        for (int i = 0; i < p_head_object -> sub_objects.size(); i++) { // проверим не существует ли такое же имя среди элементов на одной ветке
          if (p_head_object -> sub_objects[i] -> get_name() == get_name()) // если имя элемент вектора существует в ветке
            return false;
        }
    }
    this -> s_name = s_new_name; // если новое имя уникально, присваиваем его
    return true;
}

string cl_base::get_name() { // метод возвращение имени
	return this -> s_name;
}

cl_base* cl_base::get_head_object() { // метод для получения указателя на головной объект
	return this -> p_head_object;
}

// метод поиска подчинённого объекта по аргументу имени (возвращает указатель)
cl_base* cl_base::get_sub_object(string s_name) {
	for (int i = 0; i < this -> sub_objects.size(); i++) { // проходимся по дереву подчинённых элементов
		if (sub_objects[i] -> get_name() == s_name) // если имя совпадает с аргументом
		    return this -> sub_objects[i]; // то возвращаем указатель на него
	}
	return nullptr; // если не находим, то возвращаем пустой указатель
}

void cl_base::print_tree() { // метод вывода иерархии объектов
	if (sub_objects.size() != 0) { // есть ли у объекта подчинённые элементы?
		cout << endl << get_name(); // вывести текущий элемент
		for (int i = 0; i < sub_objects.size(); i++) {
			cout << "  " << sub_objects[i] -> get_name();
			sub_objects[i] -> print_tree();
		}
	}
}
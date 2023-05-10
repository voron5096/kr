// База для всех объектов
#ifndef __CL_BASE_H__
#define __CL_BASE_H__
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cl_base {
		string s_name; // Наименование объекта: Публичное не допускается!
		cl_base* p_head_object; // Указатель на головной объект: Публичное не допускается!
		vector <cl_base*> sub_objects; // Подчиненные объекты: Публичное не допускается!
	
	public:	
		cl_base(cl_base* head_object, string s_name = "Base object"); // 2 параметр задаёт имя по умолчанию
		~cl_base(); // для удаления всех подчинённых объектов
		bool set_name(string new_name); // редактирование нового значение поля
		string get_name(); // получение имени
		cl_base* get_head_object(); // получение имени поля p_head_object
		cl_base* get_sub_object(string s_name); // поиск подчинённого объекта, аргументом выступает именя которое мы ищем
		void print_tree(); // вывод метода иерархии объекта
};

#endif
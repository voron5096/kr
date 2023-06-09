// 1 класс - единственный корневой, все остальные подчинённые к нему 
#include "cl_application.h"
#include "cl_1.h"

cl_application::cl_application (cl_base* head_object): cl_base(head_object) {

};

void cl_application::build_tree_objects() { // построение иерархии дерева
    string s_head_name, s_sub_name; // 2 переменные для головного и подчинённого объектов
    cl_base* p_head = this; // указатель на головной элемент, будет текущим элементом
    cl_base* p_sub = nullptr; // указатель на подчинённый элемент
    cin >> s_head_name; // считываем имя головного (корневого) элемента
    this -> set_name(s_head_name); // // присваеваем его текущему объекту
    //cl_base* child = new cl_base(s_head_name, nullptr);
    
    
    while (true) { // следом идет ввод бесконечных пар объектов
    cin >> s_head_name >> s_sub_name;
    if (s_head_name == s_sub_name) // проверяем их на разность
      break;
    if (p_sub != nullptr && s_head_name == p_sub -> get_name()) // головой элемент может поменяться, и создаться новая ветка к последнему созданному объекту, сделаем проверку не поменялся ли у нас головной элемент
      p_head = p_sub; // подчинённый становится головным
    // проверим существует ли это имя на текущем уровне иерархии, и тогда можем вызывать конструктор
    // также перед добавлением мы должны убедиться что добавляем его к последнему созданному элементу (не добавляем в случайное место) 
    if ((p_head -> get_sub_object(s_sub_name) == nullptr) && (s_head_name == p_head -> get_name()))
      p_sub = new cl_1(p_head, s_sub_name); // конструктор, создаёт объект нового класса (передается указатель на головной элемент, к которому добавляется новый подчинённый элемент)
    
    }
}


int cl_application::exec_app() { // все манипуляции дерева
    cout << this -> get_name(); // вывод корневого элемента
    this -> print_tree();
    return 0;
}
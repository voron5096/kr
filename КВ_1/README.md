### 2 МЕТОД РЕШЕНИЯ
Для решения задачи используется:

Объекты стандартного потока ввода-вывода cin, cout

Условный оператор if

Оператор цикла for

Цикл с предусловием while

Класс cl_base:
- Свойства/поля:
- - Поле наименования объекта
- - - Наименование - s_name
- - - Тип -строковое
- - - Модификатор доступа - закрытое
- - Указатель на головной объект
- - - Наименование - p_head_object
- - - Тип - указатель на объект класса cl_base
- - - Модификатор доступа - закрытое
- - Вектор подчинённых объектов
- - - Наименованиеsub_objects
- - - Тип - указатель на объект класса cl_base
- - - Модификатор доступа - закрытое
- Функционал:
- - Метод cl_base параметризированный конструктор с 2 параметрами
- - Метод ~cl_base деструктор
- - Метод set_name редактирование нового значения поля
- - Метод get_name получение имени
- - Метод get_head_object получение имени поля p_head_object
- - Метод get_sub_object поиск подчинённого объекта
- - Метод print_tree вывод метода иерархии объекта


Класс cl_1
- Функционал:
- - Метод cl_1 параметризированный конструктор наследуется от базового класса cl_base

Класс cl_application
- Функционал:
- - Метод cl_application параметризированный конструктор, с параметромуказателя на главный объектo
- - Метод build_tree_objects построение исходного дерева иерархии объектов
- - Метод exec_app запуск приложения

Таблица 1 – Иерархия наследования классов

<table class="iksweb" style="width: 1014px; height: 283px;">
<tbody>
<tr style="height: 63px;">
<td style="width: 22.375px; height: 63px;">№</td>
<td style="width: 91.8438px; height: 63px;">Имя класса</td>
<td style="width: 112.938px; height: 63px;">Классы-наследник</td>
<td style="width: 237.891px; height: 63px;">Модификатор доступа при наследовании</td>
<td style="width: 383.031px; height: 63px;">Описание</td>
<td style="width: 50.0938px; height: 63px;">Номер</td>
<td style="width: 114.828px; height: 63px;">Комментарий&nbsp;</td>
</tr>
<tr style="height: 2px;">
<td style="width: 22.375px; height: 48.3438px;" rowspan="3">1</td>
<td style="width: 91.8438px; height: 2px;" rowspan="3">cl_base</td>
<td style="width: 112.938px; height: 2px;">&nbsp;</td>
<td style="width: 237.891px; height: 2px;">&nbsp;</td>
<td style="width: 383.031px; height: 2px;">Базовый класс в иерархии классов. Содержит основные поля и методы</td>
<td style="width: 50.0938px; height: 2px;">&nbsp;</td>
<td style="width: 114.828px; height: 2px;">&nbsp;</td>
</tr>
<tr style="height: 23.3438px;">
<td style="width: 112.938px; height: 23.3438px;">cl_application</td>
<td style="width: 237.891px; height: 23.3438px;">public</td>
<td style="width: 383.031px; height: 23.3438px;">&nbsp;</td>
<td style="width: 50.0938px; height: 23.3438px;">2</td>
<td style="width: 114.828px; height: 23.3438px;">&nbsp;</td>
</tr>
<tr style="height: 23px;">
<td style="width: 112.938px; height: 23px;">cl_1</td>
<td style="width: 237.891px; height: 23px;">public</td>
<td style="width: 383.031px; height: 23px;">&nbsp;</td>
<td style="width: 50.0938px; height: 23px;">3</td>
<td style="width: 114.828px; height: 23px;">&nbsp;</td>
</tr>
<tr style="height: 23px;">
<td style="width: 22.375px; height: 23px;">2</td>
<td style="width: 91.8438px; height: 23px;">cl_application</td>
<td style="width: 112.938px; height: 23px;">&nbsp;</td>
<td style="width: 237.891px; height: 23px;">&nbsp;</td>
<td style="width: 383.031px; height: 23px;">Класс корневого&nbsp;объекта (приложения)</td>
<td style="width: 50.0938px; height: 23px;">&nbsp;</td>
<td style="width: 114.828px; height: 23px;">&nbsp;</td>
</tr>
<tr style="height: 23px;">
<td style="width: 22.375px; height: 23px;">3</td>
<td style="width: 91.8438px; height: 23px;">cl_1</td>
<td style="width: 112.938px; height: 23px;">&nbsp;</td>
<td style="width: 237.891px; height: 23px;">&nbsp;</td>
<td style="width: 383.031px; height: 23px;">Класс объектов, подчинённых корневому объекту класса Application</td>
<td style="width: 50.0938px; height: 23px;">&nbsp;</td>
<td style="width: 114.828px; height: 23px;">&nbsp;</td>
</tr>
</tbody>
</table>

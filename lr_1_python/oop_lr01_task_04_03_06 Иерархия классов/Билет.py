# Программирование на языке высокого уровня (Python).
# Задание №4.3.6. Вариант 5
#
# Выполнил: Гоморина А.В.
# Группа: ПИН-б-о-21-1
# E-mail: nastyagomorinalove@gmail.com

class Билет:
    def __init__(self, количество_поездок):
        self.количество_поездок = количество_поездок

    def списать_поездку(self):
        if self.количество_поездок > 0:
            self.количество_поездок -= 1
            print("Поездка списана.")
        else:
            print("У вас нет доступных поездок.")

    def пополнить_билет(self, количество_поездок):
        self.количество_поездок += количество_поездок
        print(f"Билет пополнен. Теперь доступно {self.количество_поездок} поездок.")

    def проверить_статус(self):
        if self.количество_поездок > 0:
            print("Билет действителен.")
        else:
            print("Билет истек или не действителен.")

    def сбросить_билет(self):
        self.количество_поездок = 0
        print("Билет сброшен. Все поездки обнулены.")

    def вывод_информации(self):
        print(f"Тип билета: {type(self).__name__}, Доступно поездок: {self.количество_поездок}")

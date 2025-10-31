#include <iostream>
#include <ctime>
#include <string>

//int** zLin(int rows, int cols) {
//    int** arr = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new int[cols];
//    }
//    return arr;
//}
//
//void linn(int** arr, int rows, int cols, int minVal, int maxVal) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = rand() % (maxVal - minVal + 1) + minVal;
//        }
//    }
//}
//
//void nLin(int** arr, int rows, int cols) {
//    std::cout << "\nСгенерированный массив:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            std::cout << arr[i][j] << "\t";
//        }
//        std::cout << std::endl;
//    }
//}
//
//
//void procesHak(int** arr, int rows, int cols) {
//    std::cout << "\nРезультаты по каждому столбцу:\n";
//    for (int j = 0; j < cols; j++) {
//        int sum = 0;
//        int minVal = arr[0][j];
//        int maxVal = arr[0][j];
//
//        for (int i = 0; i < rows; i++) {
//            sum += arr[i][j];
//            if (arr[i][j] < minVal) minVal = arr[i][j];
//            if (arr[i][j] > maxVal) maxVal = arr[i][j];
//        }
//
//        std::cout << "Столбец " << j + 1
//            << ": сумма = " << sum
//            << ", минимум = " << minVal
//            << ", максимум = " << maxVal << std::endl;
//    }
//}
//
//
//int main() {
//    system("chcp 1251 > nul");
// 
//    std::srand(std::time(0));
//	
//
//    int rows, cols, minVal, maxVal;
//
//    std::cout << "Введите количество строк: ";
//    std::cin >> rows;
//    std::cout << "Введите количество столбцов: ";
//    std::cin >> cols;
//    std::cout << "Введите минимальное значение: ";
//    std::cin >> minVal;
//    std::cout << "Введите максимальное значение: ";
//    std::cin >> maxVal;
//
//    int** arr = zLin(rows, cols);
//    linn(arr, rows, cols, minVal, maxVal);
//    nLin(arr, rows, cols);
//    procesHak(arr, rows, cols);
//
// 
//
//    return 0;
//}



//2
//const std::string months[12] = {
//    "Январь", "Февраль", "Март", "Апрель",
//    "Май", "Июнь", "Июль", "Август",
//    "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
//};
//
//const int dayss[12] = {
//    31, 28, 31, 30, 31, 30,
//    31, 31, 30, 31, 30, 31
//};
//
//
//int** linn(const int* days) {
//    int** temps = new int* [12];
//    for (int i = 0; i < 12; i++) {
//        temps[i] = new int[days[i]];
//    }
//    return temps;
//}
//
//
//void tempetures(int** temps, const int* days, int minT, int maxT) {
//    for (int i = 0; i < 12; i++) {
//        for (int j = 0; j < days[i]; j++) {
//            temps[i][j] = rand() % (maxT - minT + 1) + minT;
//        }
//    }
//}
//
//void analysDjosko(int** temps, const int* days) {
//    std::cout << "\n Средние, минимальные и максимальные температуры по месяцам:\n";
//    for (int i = 0; i < 12; i++) {
//        int sum = 0;
//        int minT = temps[i][0];
//        int maxT = temps[i][0];
//
//        for (int j = 0; j < days[i]; j++) {
//            int val = temps[i][j];
//            sum += val;
//            if (val < minT) minT = val;
//            if (val > maxT) maxT = val;
//        }
//
//        double avg = static_cast<double>(sum) / days[i];
//
//        std::cout << months[i] << " (" << days[i] << " дн.) → "
//            << "средняя: " << avg << "°C, "
//            << "мин: " << minT << "°C, "
//            << "макс: " << maxT << "°C" << std::endl;
//    }
//}
//
//int main() {
//    std::srand(std::time(0));
//    system("chcp 1251 > nul");
//
//    int minT, maxT;
//    std::cout << "Введите минимальную температуру: ";
//    std::cin >> minT;
//    std::cout << "Введите максимальную температуру: ";
//    std::cin >> maxT;
//
//    int** temps = linn(dayss);
//    tempetures(temps, dayss, minT, maxT);
//    analysDjosko(temps, dayss);
//
//
//
//    return 0;
//}
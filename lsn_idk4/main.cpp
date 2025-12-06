#include <fstream>
#include <iostream>


int** init_array(int n, int m) {
    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[m];
    }
    return array;
}

void delete_array(int** array, int n){
    for(int i = 0; i < n; ++i){
        delete[] array[i];
    }
    delete[] array;
}

void fill_array(std::ifstream& file, int** array, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            file >> array[i][j];
        }
    }
}

void square_2d_array(int** array, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            array[i][j] *= array[i][j];
        }
    }
}

void print_array(std::ostream& stream, int** array, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            stream << array[i][j] << ' ';
        }stream << '\n';
    }
}



int main(){
    int n, m;
    std::ofstream infile("in.txt", std::_Iosbn _Openmode::_S_app);
    // std::ofstream outFile("out.txt");

    // if(!infile){
    //     std::cerr << "Fail opening";
    //     return 1;
    // }
    
    // infile >> n >> m;
    // int** array = init_array(n, m);
    // fill_array(infile, array, n, m);
    // print_array(outFile, array, n, m);
    // square_2d_array(array, n, m);
    // print_array(outFile, array, n, m);
    // delete_array(array, n);
    infile << "H"; 
    return 0;
}

#include <iostream>
#include <ctime>

double sr(int* a, int size){
    
    double sum = 0.0;
    for(int i = 0; i < size; ++i){
        sum += 0.0 + a[i];
    }
    return sum / size;
}

int main1(){
    srand(time(0));
    int size;
    std::cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; ++i){
        arr[i] = rand() % 101;
    }

    std::cout << "Avg: " << sr(arr, size) << '\n';
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << ' ';
    }
    delete[] arr;
}

void shake_mtrx(int** mtrx, int n, int m){
    int t = 1;
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            for(int j = 0; j < m; ++j){
                mtrx[i][j] = t++;
            }
        }else{
            for(int j = m-1; j >= 0; --j){
                mtrx[i][j] = t++;
            }
        }
    }
}

void daf_mtrx(int** mtrx, int n, int m){
    int bot = 0;
    int top = n;
    int left = 0;
    int right = m;

    bool go_right = true;
    bool go_left = false;
    bool go_up = false;
    bool go_down = false;
    int t = 1;
    while(t <= n * m){
        if(go_right){
            int i = left;
            while(i < right){
                mtrx[bot][i++] = t++;
            }
            go_right = false;
            go_up = true;
            bot ++;
            continue;
        }
        if(go_down){
            int i = bot;
            while(i < top){
                mtrx[i++][right] = t++;
            }
            go_down = false;
            go_left = true;
            right -= 1;
        }
        if(go_left){
            int i = right;
            while(i > left){
                mtrx[top][i--] = t ++;
            }
            go_left = false;
            go_down = true;
            top --;
        }
        if(go_up){
            int i = left;
            while(i > bot){
                mtrx[i--][left] = t++;
            }
            go_up = false;
            go_right = true;
            left++;
        }

    }
}

int main(){
    int rows, columns;
    std::cin >> rows >> columns;
    int **mtrx = new int*[rows];
    for(int i = 0; i < rows; ++i){
        mtrx[i] = new int[columns];
    }

    daf_mtrx(mtrx, rows, columns);

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < columns; ++j){
            std::cout << mtrx[i][j] << '\t';
        }
        std::cout << '\n';
    }

    for(int i = 0; i < rows; ++i){
        delete[] mtrx[i];
    }
    delete[] mtrx;
}
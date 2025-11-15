#include <iostream>
#include <cstring>

// int substring(const char* str1, const char* str2){
//     int idx1 = 0;
//     while(str1[idx1] != '\0'){
//         int idx2 = 0;
//         bool eq = true;
//         if(str1[idx1] == str2[idx2]){
//             while(str2[idx2] != '\0'){
//                 if(str1[idx1+idx2] != str2[idx2]){
//                     eq = false;
//                     break;
//                 }
//                 ++idx2;
//             }
//             if(eq){
//                 return idx1;
//             }
//         }
//         ++idx1;
//     }
//     return -1;
// }


bool startswith(char* src, char* str){
    while(*str != 0){
        if(*src == 0 || *src != *str){
            return false;
        }
        ++str;
        ++src;
    }
    return true;
}

int substring(char* str1, char* str2){
    int idx = 0;
    while(str1[idx] != '\0'){
        if(startswith(str1+idx, str2)){
            return idx;
        }
        ++idx;
    }
    return -1;
}

void delete_symbs(char* str, int count, int start){
    int idx = start;
    while(str[idx+count] != '\0'){
        str[idx] = str[idx+count];
        ++idx;
    }
    str[idx] = 0;
}

void add_symbs(char* str, int count, int start){
    
}

void replace_one(char* str){
    int idx = 0;
    while(str[idx] != '\0'){
        if(startswith(str + idx, "one")){
            delete_symbs(str, 2, idx);
            str[idx] = '1';
        }
        ++idx;
    }
}

char* replace_from_on_to(char* str, char* from, char *to, char out[]){
    int idx = 0;
    int out_idx = 0;

    while(str[idx] != '\0'){
        if(startswith(str + idx, from)){
            int write_idx = 0;
            while(to[write_idx] != '\0'){
                out[out_idx] = to[write_idx];
                ++out_idx;
                ++write_idx;
            }
            // std::cout << write_idx << ' ';
            idx += strlen(from);
        }else{
            out[out_idx] = str[idx];
            ++idx;
            ++out_idx;
        }
        
    }
    out[out_idx] = '\0';
    return out;
}


// char* replace_from_on_to_inplace(char* str, char* from, char *to){
//     int idx = 0;
//     int out_idx = 0;

//     size_t from_size = strlen(from);
//     size_t to_size = strlen(to);

//     while(str[idx] != '\0'){
//         if(startswith(str + idx, from)){
//             int write_idx = 0;
//             while(to[write_idx] != '\0'){
//                 out[out_idx] = to[write_idx];
//                 ++out_idx;
//                 ++write_idx;
//             }
//             // std::cout << write_idx << ' ';
//             idx += strlen(from);
//         }else{
//             out[out_idx] = str[idx];
//             ++idx;
//             ++out_idx;
//         }
        
//     }
//     out[out_idx] = '\0';
//     return out;
// }

int main(int argc, char* argv[]){

}

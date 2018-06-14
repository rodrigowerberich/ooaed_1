//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_UTILS_H
#define OOAED_1_UTILS_H

template <typename T>
bool compare_pointer_content(const T *p1, const T *p2){
    return *p1==*p2;
}

template <typename pT, typename T, typename... TT>
void emplace_unique_ptr(T & container, TT&&... t){
    container.emplace_back(std::make_unique<pT>(std::forward<TT>(t)...));
};

#endif //OOAED_1_UTILS_H

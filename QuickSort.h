//
// Created by cbalb on 01/03/2026.
//

#ifndef QUICKSORT_SORTINGALGORITHM_V01_QUICKSORT_H
#define QUICKSORT_SORTINGALGORITHM_V01_QUICKSORT_H
#include <vector>
#include <ctime>
#include <iostream>
using namespace std;

class QuickSort {
private:
    vector<int> lista;

    int getPivot(vector<int> listaActual);


public:


    //constructores
    QuickSort();
    QuickSort(vector<int> v);
    //setters
    void setElement(int x);
    void addVector(vector<int> v);
    //getters
    vector<int> getVector() const;
    int getElement(int i) const;
    //funciones print
    void showSort();
    void print();
    //Funciones QuickSort
    vector<int> naivePartition(vector<int>& v);
    void sort();

};


#endif //QUICKSORT_SORTINGALGORITHM_V01_QUICKSORT_H
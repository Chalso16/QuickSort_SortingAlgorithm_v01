//
// Created by cbalb on 01/03/2026.
//

#include "QuickSort.h"
#include <iostream>
#include <vector>
using namespace std;

//constructores
QuickSort::QuickSort() {
}

QuickSort::QuickSort(vector<int> v) {
    this->lista=v;
}

//setters
void QuickSort::setElement(int x) {
    this->lista.push_back(x);
}

void QuickSort::addVector(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        this->lista.push_back(v.at(i));
    }
}

//getters
vector<int> QuickSort::getVector() const {
    return this->lista;
}

int QuickSort::getElement(int i) const{
    return this->lista.at(i);
}

//Print functions
void QuickSort::print() {
    for (int i=0; i<lista.size(); i++) {
        cout << lista.at(i)<<" ";
    }
    cout << endl;
}

void QuickSort::showSort() {
    for(int i=0; i<lista.size(); i++) {
        cout << lista.at(i)<<" ";
    }
    cout << endl;
}

//Sorting Algorithms
// int QuickSort::getPivot(vector<int> listaActual) {
//     int pivot=-1;
//     if (listaActual.size()==0) {
//         return pivot;
//     }
//     pivot = listaActual.size()/2;
//     cout << "Posicion pivote seleccionado "<<pivot<<endl;
//     return pivot;
// }

vector<int> QuickSort::naivePartition(vector<int>& v) {
    if (v.size()<=1) {          //caso base, tamaño 1
        return v;
    }
    int pivot = v.at(0);     //Pivote el primer elemento
    vector<int> smaller;
    vector<int> greater;

    //Particion Naive
    for (int i=1; i<v.size(); i++) {
        if (v.at(i)<pivot) {
            smaller.push_back(v.at(i));
        }
        if (v.at(i)>=pivot) {
            greater.push_back(v.at(i));
        }
    }

    //Recursion
    vector<int> left = naivePartition(smaller);
    vector<int> right = naivePartition(greater);
    //Concatenacion
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}

void QuickSort::sort() {
    this->lista = naivePartition(lista);
    print();
}



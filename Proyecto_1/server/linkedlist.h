//
// Created by kisung on 24/02/18.
//

#include "node.cpp"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
/**
 *
 * @tparam T
 * Parametro T generico.
 *
 * Estructura de datos dinamica en c++.
 */
template <class T>
class LinkedList {
private:
    LLNode<T> *first;
    int counter = 0;

public:
    /**
     * Constructor de la clase.
     */
    LinkedList<T>();
    /**
     *
     * @param num
     * Recibe un valor T para insertar en la lista de primero.
     *
     */
    void setFirst(T num);
    /**
     *
     * @return
     * Retorna el primero valor insertado.
     */
    T getFirst();
    /**
     *
     * @param num
     * Recibe un valor T para insertar en la lista de ultimo.
     */
    void addLast(T num);
    /**
     *
     * @param num
     * Recibe un valor T para insertar de primero.
     *
     */
    void addFirst(T num);
    /**
     *
     * @param pos
     * Parametro de posicion con respecto de la lista.
     * @param num
     * Valor T a insertar en el indice.
     */
    void addIn(int pos, T num);
    /**
     * Esta funcion eliminar el ultmo dato de la lista.
     */
    void delLast();
    /**
     * Esta funcion eliminar el primer dato de la lista.
     */
    void delFirst();
    /**
     *
     * @param pos
     * Elimina por posicion.
     */
    void delIn(int pos);
    /**
     *
     * @param pos
     * Recibeo una posicion en la lista.
     * @return
     * Retorna el valor en posicion del entero dado.
     */
    T getIn(int pos);
    /**
     *
     * @return
     * Retorna la cantidad de valores en la lista.
     */
    int getCount();
    /**
     *
     * @param pos
     * Recibe un posicion para editar en la lista.
     * @param num
     * Recibe el valor para modificar en la lista.
     */
    void editIn(int pos, T num);
};

#endif //LINKEDLIST_H

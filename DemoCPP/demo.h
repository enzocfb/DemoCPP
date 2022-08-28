#ifndef __DEMO_H__  
#define __DEMO_H__ 

#include <iostream>

template <typename T>
void Exe(std::string msg, T func)
{
  std::cout << "\n>>>>>>>>>>>>> " << msg << "() ..." << std::endl;
  func();
}

// Basics
// void DemoBasics();
// void CounterTest();
void DemoInitializer1();
void DemoInitializer2();
void DemoInitializer3();
void DemoTypeId();
void DemoConditional();

void DemoMultipleParams();
void DemoTupleOverload();
void DemoVariadicOverload();


/**
 * @brief Función que demuestra diversos métodos para crear funciones con un número variables de
 * parámetros y de tipos de parámetros.
 * La primera función, sum1, recibe un parámetro de tipo T y luego cero o más parámetros
 *     template <typename T, typename... Q>   
 * en este caso además fue necesario crear la función sum1() que retorna 0 para el caso en el cual
 * no se introducen parámetros.
 * La segunda función, sum2 y sum3 reciben cero o más parámetros, por esa razón es definida como
 *     template <typename ... T>
 * 
 */
void demoVariadic();

/**
 * @brief Función para demostrar el uso de una función de múltiples argumentos que imprime 
 * una lista de los mismos con un espacio de separación entre cada elemento.
 * para eso aplica la función spaceBefore(const T& arg) a cada argumento de la función.
 * 
 */
void DemoFoldedFunctions();
void DemoHomogeneous();
void DemoInvoke();

// Inheritance
void DemoMultiBase1();
void DemoMultiBase2();         // # Pending Er !
void DemoVirtual();

void DemoFoldTraverse();
void DemoPrintAuto();

void DemoLambdaFunctions();
void DemoVarTmplAuto();

void DemoCallBacks();
void DemoCheckPath3();

void DemoCreateFile();
//void DemoTimeAsString();
void DemoSymlink();

void DemoConvert();
void DemoIncomplete();

void DemoMapHandle();
void DemoMapNodeMerge();
void DemoMapNodeMove();


/**
 * @brief Función utilizada para mostrar la creación de multiples tipos
 * para esta demo se simula la generación de figuras geométricas
 * Esta función empieza por generar una colección de objetos geométricos,
 * Los objetos simulados son:
 *    Línea que parte del punto (1,2) al (3,4):
 *          Line{Coord{1,2},Coord{3,4}}
 *    Círculo con centro en (5,5) y radio 2:
 *          Circle{Coord{5,5},2})  
 *    Rectángulo con esquinas (3,3) y (6,4):
 *          Rectangle{Coord{3,3},Coord{6,4}})  
 *
 *  
 */
void DemoVariantPoly1();

/**
 * @brief Función utilizada para mostrar la creación de un vector de múltiplos tipos.
 * Para crear utilizamos por ejemplo:
 * @code using Var = std::variant<int, double, std::string>;
 * @code std::vector<Var> values {42, 0.19, "hello world", 0.815, "Hi!"};
 *  
 */
void DemoVariantPoly2();

/**
 * @brief Función utilizada para mostrar la creación de un vector de múltiples tipos
 * y la autodetección del tipo.
 * 
 */
void DemoVariantPoly3();


void DemoVariantPoly4();

void DemoMutex();
void DemoAngleBracketHack();
void DemoMakeUnique();

void DemoTestArray();
void DemoTemplateParamTypes();
void DemoForeach();
void DemoForeachInvoke();

void DemoLen();
void DemoMax();
void DemoConstructor();
void DemoSizeScope();

void DemoBitset();
void demoLinkedListSorted();
void demoDoubleLinkedListSorted();
void DemoDSMap();
void DemoStack();
void DemoMultiset();

void DemoSort1();
void DemoSort2();
void DemoPermutation();

void DemoIsBaseOf();
void DemoBasicTraits();
void DemoTraits();

void DemoInnerProduct();

void DemoSmartPtr();
void DemoRegex();

void DemoAmpersand();
void DemoPointersL1();
void DemoPointersL2Vectors();
void DemoPointersL2VectorX();
void DemoVectorSTL();

void DemoPointersL3Matrix();
void DemoPointerstoFn1();
void DemoPointerstoFn2();
void DemoPointerstoFn3();
void DemoPointersToStruct();
void DemoPointersToMembers1();
void DemoPointersToMembers2();

#endif
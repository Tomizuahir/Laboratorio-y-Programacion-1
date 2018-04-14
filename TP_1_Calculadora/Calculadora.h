#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

int sumar(float primerNumero,float segundoNumero,float* resultadoSuma);
/** \brief se calcula la suma del primer numero ingresado con el segundo
 *
 * \param primerNumero float
 * \param segundoNumero float
 * \param resultadoSuma float*
 * \return int
 *
 */


int restar(float primerNumero,float segundoNumero,float* resultadoResta);
/** \brief se calcula la resta del primer numero ingresado con el segundo
 *
 * \param primerNumero float
 * \param segundoNumero float
 * \param resultadoResta float*
 * \return int
 *
 */


int dividir(float primerNumero,float segundoNumero,float* resultadoDivision);
/** \brief se calcula la division del primer numero ingresado con el segundo
 *
 * \param primerNumero float
 * \param segundoNumero float
 * \param resultadoDivision float*
 * \return int
 *
 */


int multiplicar(float primerNumero,float segundoNumero,float* resultadoMulticacion);
/** \brief se calcula la multiplicacion del primer numero ingresado con el segundo
 *
 * \param primerNumero float
 * \param segundoNumero float
 * \param resultadoMulticacion float*
 * \return int
 *
 */


int factorial(int numeroFactorial,int* resultadoFactorial);

/** \brief se calcula el factorial del primer numero con el segundo
 *
 * \param numeroFactorial int
 * \param resultadoFactorial int*
 * \return int
 *
 */

#endif // CALCULADORA_H_INCLUDED

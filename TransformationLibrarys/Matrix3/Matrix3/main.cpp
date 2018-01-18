#include "Matrix3.h"


int main()
{
	/// <summary>
	/// Matrix tests
	/// </summary>
	/// <returns></returns>
	
	Matrix3 matrix1 = Matrix3(1, 2, 3
		, 4, 5, 6
		, 7, 8, 9);
	Matrix3 matrix2 = Matrix3(9, 8, 7
		, 6, 5, 4
		, 3, 2, 1);
	Vector3 vector1 = Vector3(1, 2, 3);
	Vector3 vector2 = Vector3(3, 2, 1);
	std::cout << "Matrix test one, by a vector, should be [14,32,50]" << std::endl << std::endl;
	std::cout << (matrix1*vector1).toString() << std::endl << std::endl;

	std::cout << "Matrix test two, minus another matrix, should be \n[-8,-6,-4]\n[-2,0,2]\n[4,6,8]" << std::endl << std::endl;
	std::cout << (matrix1-matrix2).toString() << std::endl<<std::endl;

	std::cout << "Matrix test three, by a double, should be \n[3,6,9]\n[12,15,18]\n[21,24,27]" << std::endl << std::endl;
	std::cout << (matrix1*3).toString() << std::endl << std::endl;

	std::cout << "Matrix test four, by another matrix, should be \n[30,24,18]\n[84,69,54]\n[138,114,90]" << std::endl << std::endl;
	std::cout << (matrix1 * matrix2).toString() << std::endl << std::endl;

	std::cout << "Matrix test five transpose a matrix, should be \n[1,4,7]\n[2,5,8]\n[3,6,9]" << std::endl << std::endl;
	std::cout << (matrix1.Transpose()).toString() << std::endl << std::endl;

	std::cout << "Matrix test six adding two matrixs, should be \n[10,10,10]\n[10,10,10]\n[10,10,10]" << std::endl << std::endl;
	std::cout << (matrix1+matrix2).toString() << std::endl << std::endl;

	std::cout << "Matrix test seven,det of a matrix, should be 0" << std::endl << std::endl;
	std::cout << matrix1.Determinant() << std::endl << std::endl;

	std::cout << "Matrix test eight,inverse of a matrix, should be \n[0,0,0]\n[0,0,0]\n[0,0,0]" << std::endl << std::endl;
	std::cout << (matrix1.Inverse()).toString() << std::endl << std::endl;

	//90Degrees
	std::cout << "Matrix test nine,rotation of a matrix" << std::endl << std::endl;
	std::cout << (matrix1.Rotation(1.5707963268)).toString() << std::endl << std::endl;

	std::cout << "Matrix test ten,Translation of a matrix" << std::endl << std::endl;
	std::cout << (matrix1.Translate(2,3)).toString() << std::endl << std::endl;

	std::cout << "Matrix test ten,Scaling of a matrix" << std::endl << std::endl;
	std::cout << (matrix1.Scale(2,3)).toString() << std::endl << std::endl;



	





	std::system("PAUSE");
}
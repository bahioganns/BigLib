#include <vector>
#include <iostream>

#ifndef BIG_N_H
#define BIG_N_H 

class BigInt;

enum CompareNat : int {equal, rhsIsBigger, lhsIsBigger};

class BigNat{

protected:	
	std::vector<int> digits; // Digits store in reversed order

public:
	friend std::ostream& operator<< (std::ostream &stream, BigNat num);
	
	//=====MODULES=====
	//Author: Alex Kosh 7301
	//Problems witr cout function return
	
	friend int COM_NN_D(BigNat &lhs, BigNat &rhs); 				//Checked
	friend bool NZER_N_B(BigNat &lhs); 							//Checked
	friend BigNat ADD_1N_N(BigNat &lhs); 						//Checked
	friend BigNat ADD_NN_N(BigNat &lhs, BigNat &rhs); 			//Checked
	friend BigNat SUB_NN_N(BigNat &lhs, BigNat &rhs); 			//Checked
	friend BigNat MUL_ND_N(BigNat &lhs, int mul); 				//Checked
	friend BigNat MUL_Nk_N(BigNat &lhs, int k); 				//Checked
	friend BigNat MUL_NN_N(BigNat &lhs, BigNat &rhs);			//Checked, not optimal
	friend BigNat SUB_NDN_N(BigNat &lhs, int k, BigNat &rhs);	//Checked, but useless?
	friend BigNat DIV_NN_Dk(BigNat &lhs, BigNat &rhs); 			//Checked, returns BigNat
	friend BigNat DIV_NN_N(BigNat lhs, BigNat rhs); 			//Checked
	friend BigNat MOD_NN_N(BigNat lhs, BigNat rhs);				//Checked, may be not optimal?
	friend BigNat GCD_NN_N(BigNat lhs, BigNat rhs);				//Checked
	friend BigNat LCM_NN_N(BigNat &lhs, BigNat &rhs);			//Checked
	
	//==Friends for BigNat==
	friend BigInt TRANS_N_Z(BigNat lhs);
	friend BigNat TRANS_Z_N(BigInt lhs);
	
	//======================
	//======Operators support======
	BigNat operator++(int num);
	BigNat operator+(BigNat &rhs);
	BigNat operator-(BigNat &rhs);
	BigNat operator*(BigNat &rhs);
	BigNat operator*(int &rhs);
	BigNat operator/(BigNat &rhs);
	BigNat operator%(BigNat &rhs);
	
	//=============================
	
	BigNat(std::string str);
	BigNat();
	BigNat(BigInt num);
	void remove_leading_zeros();
};


#endif

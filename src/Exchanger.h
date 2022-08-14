/*!------------------------------------------------
@file       Exchanger.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef EXCHANGER_H_
#define EXCHANGER_H_

// インクルードファイル ================================
#include <iostream>
#include <string>

// クラスの前方宣言 ====================================
class Dollar;
class ExchangeRate;

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Exchanger.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Exchanger {
 public:
    //! Constructor
    Exchanger();
    //! Destructor
    virtual ~Exchanger();

    int exchange( std::string initialAmount );

 protected:
 private:
    Dollar* srcCurrency;
};

#endif  // EXCHANGER_H_

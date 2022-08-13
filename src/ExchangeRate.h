/*!------------------------------------------------
@file       ExchangeRate.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef EXCHANGERATE_H_
#define EXCHANGERATE_H_

// インクルードファイル ================================
#include <string>
#include <decimal_for_cpp/decimal.h>

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       ExchangeRate.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class ExchangeRate {
 public:
    //! Constructor
    explicit ExchangeRate( std::string initialRate );
    //! Destructor
    virtual ~ExchangeRate();

    dec::decimal2 value();

 protected:
 private:
    dec::decimal4 rate;
    ExchangeRate();
};

#endif  // EXCHANGERATE_H_

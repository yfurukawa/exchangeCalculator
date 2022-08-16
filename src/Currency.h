/*!------------------------------------------------
@file       Currency.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef CURRENCY_H_
#define CURRENCY_H_

// インクルードファイル ================================
#include <string>
#include <decimal_for_cpp/decimal.h>

// クラスの前方宣言 ====================================
class ExchangeRate;

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Currency.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Currency {
 public:
    //! Constructor
    explicit Currency( const std::string initialAmount, const std::string currencyName );
    //! Destructor
    virtual ~Currency();

    dec::decimal2 value();
    virtual Currency* exchange( Currency* const dstCurrency, ExchangeRate* rate );
    std::string currencyName();
    
 protected:
    const dec::decimal4 amount_;
    Currency();
 private:
    const std::string currencyName_;
 
};

#endif  // CURRENCY_H_

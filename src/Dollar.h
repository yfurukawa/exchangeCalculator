/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef DOLLAR_H_
#define DOLLAR_H_

// インクルードファイル ================================
#include "Currency.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Dollar.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Dollar : public Currency {
 public:
    //! Constructor
    explicit Dollar( const std::string initialAmount );
    //! Destructor
    virtual ~Dollar();

    virtual Currency* exchange( ExchangeRate& rate );

 protected:
 private:
    Dollar();
};

#endif  // DOLLAR_H_

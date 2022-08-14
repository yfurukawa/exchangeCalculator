/*!------------------------------------------------
@file       Yen.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef YEN_H_
#define YEN_H_

// インクルードファイル ================================
#include "Currency.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Yen.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Yen : public Currency {
 public:
    //! Constructor
    explicit Yen( const std::string initialAmount );
    //! Destructor
    virtual ~Yen();

    virtual Currency* exchange( ExchangeRate& rate );

 protected:
 private:
    Yen();
};

#endif  // YEN_H_

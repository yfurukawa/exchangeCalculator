/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef DOLLAR_H_
#define DOLLAR_H_

// インクルードファイル ================================
#include <string>
#include "decimal_for_cpp/decimal.h"

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
class Dollar {
 public:
  //! Constructor
  explicit Dollar( const std::string initoalAmount );
  dec::decimal2 value();

  //! Destructor
  virtual ~Dollar();

 protected:
 private:
    dec::decimal4 amount;
    Dollar();
};

#endif  // DOLLAR_H_

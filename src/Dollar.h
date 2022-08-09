/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef DOLLAR_H_
#define DOLLAR_H_

// インクルードファイル ================================

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
  explicit Dollar( const float amount );
  float value();

  //! Destructor
  virtual ~Dollar();

 protected:
 private:
    int dollar;
    int cent;
    Dollar();
};

#endif  // DOLLAR_H_

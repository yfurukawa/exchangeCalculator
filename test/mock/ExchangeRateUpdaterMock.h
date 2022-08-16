/*!------------------------------------------------
@file       ExchangeRateUpdaterMock.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef EXCHANGERATEUPDATERMOCK_H_
#define EXCHANGERATEUPDATERMOCK_H_

// インクルードファイル ================================
#include "../../src/ExchangeRateUpdater.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       ExchangeRateUpdaterMock.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class ExchangeRateUpdaterMock : public ExchangeRateUpdater {
 public:
  //! Constructor
  ExchangeRateUpdaterMock();
  //! Destructor
  virtual ~ExchangeRateUpdaterMock();

 protected:
 private:
};

#endif  // EXCHANGERATEUPDATERMOCK_H_

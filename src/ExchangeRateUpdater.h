/*!------------------------------------------------
@file       ExchangeRateUpdater.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef EXCHANGERATEUPDATER_H_
#define EXCHANGERATEUPDATER_H_

// インクルードファイル ================================

// クラスの前方宣言 ====================================
class Currency;
class ExchangeRate;

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       ExchangeRateUpdater.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class ExchangeRateUpdater {
 public:
    //! Constructor
    ExchangeRateUpdater();
    //! Destructor
    virtual ~ExchangeRateUpdater();

    ExchangeRate* provideExchangeRate( const Currency* from, const Currency* to );

 protected:
 private:
};

#endif  // EXCHANGERATEUPDATER_H_

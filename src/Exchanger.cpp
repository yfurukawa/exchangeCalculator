/*!------------------------------------------------
@file       Exchanger.h
@brief      
@attention  なし
--------------------------------------------------*/

#include "Exchanger.h"
#include "Dollar.h"
#include "ExchangeRate.h"
#include "ExchangeRateUpdater.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Exchanger::Exchanger() : srcCurrency_( nullptr ), dstCurrency_( nullptr ), updater_( nullptr ) {
}

Exchanger::Exchanger( ExchangeRateUpdater* const updater ) : srcCurrency_( nullptr ), dstCurrency_( nullptr), updater_( updater ) {
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Exchanger::~Exchanger() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
int Exchanger::exchange( std::string initialAmount ) {
    try {
        srcCurrency_ = new Dollar( initialAmount);
        ExchangeRate* rate = updater_->provideExchangeRate( srcCurrency_, dstCurrency_ );
        Currency* exchangedCurrency = srcCurrency_->exchange( rate );
        std::cout << exchangedCurrency->value() << std::endl;
        delete exchangedCurrency;
        delete rate;
        return 0;
    }
    catch( const std::invalid_argument& e) {
        std::cerr << e.what() <<  std::endl;
        exit(1);
    }


} 

/*!------------------------------------------------
@file       Exchanger.h
@brief      
@attention  なし
--------------------------------------------------*/

#include "Exchanger.h"
#include "Dollar.h"
#include "ExchangeRate.h"
#include "ExchangeRateUpdater.h"
#include "Yen.h"

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
        srcCurrency_ = new Dollar( initialAmount );
        dstCurrency_ = new Yen( "0" ); // TODO生成の要否を検討
        ExchangeRate* rate = updater_->provideExchangeRate( srcCurrency_, dstCurrency_ );
        Currency* exchangedCurrency = srcCurrency_->exchange( dstCurrency_, rate );
        std::cout << "Exchanged currency is " << exchangedCurrency->value() << exchangedCurrency->currencyName() << std::endl;
        delete exchangedCurrency;
        delete rate;
        delete srcCurrency_;
        delete dstCurrency_;
        return 0;
    }
    catch( const std::invalid_argument& e) {
        std::cerr << e.what() <<  std::endl;
        exit(1);
    }


} 

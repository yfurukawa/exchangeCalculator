/*!------------------------------------------------
@file       Exchanger.h
@brief      
@attention  なし
--------------------------------------------------*/

#include "Exchanger.h"
#include "Dollar.h"
#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Exchanger::Exchanger() : srcCurrency_( nullptr ), updater_( nullptr ) {
}

Exchanger::Exchanger( const ExchangeRateUpdater* const updater ) : srcCurrency_( nullptr ), updater_( updater ) {
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
        ExchangeRate rate( "130.52"); // 本当は、何処からか為替レートを拾ってくる
        Currency* exchangedCurrency = srcCurrency_->exchange( rate );
        std::cout << exchangedCurrency->value() << std::endl;
        return 0;
    }
    catch( const std::invalid_argument& e) {
        std::cerr << e.what() <<  std::endl;
        exit(1);
    }


} 

/*!------------------------------------------------
@file       Currency.h
@brief      
@attention  なし
--------------------------------------------------*/
#include "Currency.h"
#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Currency::Currency() {
}

Currency::Currency( const std::string initialAmount, std::string currencyName ) : amount_( initialAmount ), currencyName_( currencyName ) {
    if( initialAmount == "" ) {
        throw std::invalid_argument( "initialAoumt must be positive value." );
    }
    if( initialAmount.find(",") != std::string::npos ) {
        throw std::invalid_argument( "initialAmount must not include comma." );
    }
    if( amount_ < 0 ) {
        throw std::invalid_argument( "initialAoumt must be positive value." );
    }
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Currency::~Currency() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
dec::decimal2 Currency::value() {
    return dec::decimal_cast<2>(amount_);
}

Currency* Currency::exchange( Currency* const dstCurrency, ExchangeRate* rate ) {
    dec::decimal4 result = amount_ * rate->value();
    if( result < 1 ) {
        throw std::out_of_range("Exchanged currency is less than 1, due to initialAmount is too small.");
    }
    return new Currency( dec::toString( result ), dstCurrency->currencyName() );
}

std::string Currency::currencyName() {
    return currencyName_;
}

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

Currency::Currency( const std::string initialAmount ) : amount( initialAmount ) {
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
    return dec::decimal_cast<2>(amount);
}

Currency* Currency::exchange( ExchangeRate* rate ) {
    dec::decimal4 result = amount * rate->value();
    if( result < 1 ) {
        throw std::out_of_range("Exchanged currency is less than 1, due to initialAmount is too small.");
    }
    return new Currency( dec::toString( result ) );
}

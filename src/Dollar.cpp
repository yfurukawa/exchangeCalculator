/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <stdexcept>
#include "Dollar.h"
#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Dollar::Dollar() : Currency( 0 ) {
}

Dollar::Dollar( const std::string initialAmount ) : Currency( initialAmount ) {
    if( amount < 0 ) {
        throw std::out_of_range("initialAoumt must be positive value.");
    }
}
/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Dollar::~Dollar() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
// dec::decimal2 Dollar::value() {
//     return dec::decimal_cast<2>(amount);
// }

Currency* Dollar::exchange( ExchangeRate& rate ) {
    dec::decimal4 result = amount * rate.value();
    return dynamic_cast<Currency*>(new Dollar( dec::toString( result ) ));
}

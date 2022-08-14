/*!------------------------------------------------
@file       ExchangeRate.h
@brief      
@attention  なし
--------------------------------------------------*/

#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
ExchangeRate::ExchangeRate() {
}

ExchangeRate::ExchangeRate( std::string initialRate ) : rate ( initialRate) {
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
ExchangeRate::~ExchangeRate() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
dec::decimal6 ExchangeRate::value() {
    return rate;
}

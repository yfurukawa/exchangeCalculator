/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <stdexcept>
#include <iostream>
#include "Dollar.h"
#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Dollar::Dollar() : Currency( 0, "" ) {
}

Dollar::Dollar( const std::string initialAmount ) : Currency( initialAmount, "Dollar" ) {
    if( initialAmount.length() > 15 ) {
        throw std::out_of_range("initialAoumt must be less than 1,000,000,000,000.");
    }
    if( (initialAmount.find( '.' ) != std::string::npos) && initialAmount.find( '.' ) >= 13 ) {
        throw std::out_of_range("initialAoumt must be less than 1,000,000,000,000.");
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

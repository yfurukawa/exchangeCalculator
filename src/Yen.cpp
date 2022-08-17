/*!------------------------------------------------
@file       Yen.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <iostream>
#include <stdexcept>
#include "ExchangeRate.h"
#include "Yen.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Yen::Yen() : Currency( 0, "" ) {
}

Yen::Yen( const std::string initialAmount) : Currency( initialAmount, "Yen" )  {
    if( initialAmount == "" ) {
        throw std::invalid_argument("initialAoumt must be positive value.");
    }
    
    if( amount_ < 0 ) {
        throw std::invalid_argument("initialAoumt must be positive value.");
    }

    // 変換元の値に銭の位が含まれていた場合は、異常値なので例外扱いとする
    if( (amount_ - amount_.trunc()) > 0 ) {
        throw std::invalid_argument("initialAmount must be an integer.");
    }
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Yen::~Yen() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/

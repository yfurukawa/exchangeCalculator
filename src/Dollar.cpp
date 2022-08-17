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
Dollar::Dollar() : Currency( 0, "" ) {
}

Dollar::Dollar( const std::string initialAmount ) : Currency( initialAmount, "Dollar" ) {
    if( initialAmount == "" ) {
        throw std::invalid_argument("initialAoumt must be positive value.");
    }
    if( amount_ < 0 ) {
        throw std::invalid_argument("initialAoumt must be positive value.");
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

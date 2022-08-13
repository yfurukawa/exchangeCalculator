/*!------------------------------------------------
@file       Dollar.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <stdexcept>
#include "Dollar.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Dollar::Dollar() : amount( 0 ) {
}

Dollar::Dollar( const std::string initoalAmount ) : amount( initoalAmount ) {
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
dec::decimal2 Dollar::value() {
    return dec::decimal_cast<2>(amount);
}

/*!------------------------------------------------
@file       ExchangeRateUpdater.h
@brief      
@attention  なし
--------------------------------------------------*/
#include "ExchangeRateUpdater.h"
#include "ExchangeRate.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
ExchangeRateUpdater::ExchangeRateUpdater() {
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
ExchangeRateUpdater::~ExchangeRateUpdater() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
ExchangeRate* ExchangeRateUpdater::provideExchangeRate( const Currency* from, const Currency* to ) {
    ExchangeRate* rate = new ExchangeRate( "130.52" ); // 本当は、何処からか為替レートを拾ってくる
    return rate;
}

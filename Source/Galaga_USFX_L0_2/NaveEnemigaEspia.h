// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L0_2_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
public:

    ANaveEnemigaEspia();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Espia")
    float escudo;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Espia")
    float Sigilo;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Espia")
    float consumo_de_energia;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Espia")
    float Armamento;

protected:


    virtual void BeginPlay() override;


    virtual void Mover(float DeltaTime);


    void ActivarSigilo();


    void DesactivarSigilo();


    void RecopilarInformacion();


    void InterceptarComunicaciones();


};